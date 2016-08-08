<?php
/**
 * @file
 * Rules for Infusionsoft Integration
 */

/**
 * Implements hook_rules_event_info().
 */
function infusionsoft_rules_event_info() {
  $items = array(
    'infusionsoft_contact_add' => array(
      'label' => t('After creating a new Infusionsoft contact'),
      'group' => t('Infusionsoft'),
      'variables' => array(
        'user' => array('type' => 'user', 'label' => 'Drupal User'),
      ),
    ),
	'infusionsoft_contact_update' => array(
      'label' => t('After updating an Infusionsoft contact'),
      'group' => t('Infusionsoft'),
      'variables' => array(
        'user' => array('type' => 'user', 'label' => 'Drupal User'),
      ),
    ),
  );
  
  return $items;
}

/**
 * Implements hook_rules_condition_info().
 */
function infusionsoft_rules_condition_info() {
  return array(
    'infusionsoft_contact_has_tags' => array(
      'label' => t('Infusionsoft Contact has tag(s)'),
      'parameter' => array(
        'account' => array(
		  'type' => 'user',
		  'label' => t('User'),
		  'description' => t('The drupal user connected to the Infusionsoft account.'),
		),
        'tags' => array(
          'type' => 'list<integer>',
          'label' => t('Tags'),
          'options list' => 'infusionsoft_groups_options',
        ),
        'operation' => array(
          'type' => 'text',
          'label' => t('Match tags'),
          'options list' => 'infusionsoft_rules_condition_operations',
          'restriction' => 'input',
          'optional' => TRUE,
          'default value' => 'AND',
          'description' => t('If matching against all selected tags, the contact must have <em>all</em> the tags selected.'),
        ),
      ),
      'group' => t('Infusionsoft'),
      'base' => 'rules_condition_infusionsoft_contact_has_tag',
    ),
  );
}

/**
 * Options list callback for the operation parameter of condition contact has tag.
 */
function infusionsoft_rules_condition_operations() {
  return array(
    'AND' => t('all'),
    'OR' => t('any'),
  );
}

/**
 * Condition to check whether contact has particular roles
 */
function rules_condition_infusionsoft_contact_has_tag($account, $tags, $operation = 'AND') {
  if (empty($account->field_infusionsoft_id[LANGUAGE_NONE][0]['value'])) {
    return FALSE;
  }
  $contacttagsraw = infusionsoft_group_contact_options($account->field_infusionsoft_id[LANGUAGE_NONE][0]['value']);
  $contacttags = array_map('infusionsoft_contact_has_tag_getContactGroup', $contacttagsraw);
  watchdog('infusionsoft','The following:'.$contacttagsraw.', '.$contacttags.', '.$tags);

  switch ($operation) {
    case 'OR':
      foreach ($tags as $tag) {
        if (in_array($tag, $contacttags)) {
          return TRUE;
        }
      }
      return FALSE;

    case 'AND':
      foreach ($tags as $tag) {
        if (!in_array($tag, $contacttags)) {
          return FALSE;
        }
      }
      return TRUE;
  }
}

function infusionsoft_contact_has_tag_getContactGroup($tags) {
  return $tags['GroupId'];
}


/**
 * Implements hook_rules_action_info().
 */
function infusionsoft_rules_action_info() {
  $actions = array();

  $actions['infusionsoft_opt_in'] = array(
    'label' => t('Opt in a Contact to the Email Service'),
    'parameter' => array(
      'email' => array(
        'type' => 'text',
        'label' => t('Email address to opt-in'),
      ),
	  'opt_in_reason' => array(
	    'type' => 'text',
		'label' => t('Contact opt-in reason'),
	  ),
    ),
    'group' => t('Infusionsoft'),
    'callbacks' => array(
      'execute' => 'infusionsoft_rules_opt_in',
    ),
  );

  $actions['infusionsoft_add_contact'] = array(
    'label' => t('Add a Contact'),
    'parameter' => array(
      'user' => array(
        'type' => 'user',
        'label' => t('The Drupal User'),
      ),
    ),
    'group' => t('Infusionsoft'),
    'callbacks' => array(
      'execute' => 'infusionsoft_rules_add_contact',
    ),
  );

  $actions['infusionsoft_rules_delete_contact'] = array(
    'label' => t('Delete a Contact'),
    'parameter' => array(
      'user' => array(
        'type' => 'user',
        'label' => t('The Drupal User'),
      ),
    ),
    'group' => t('Infusionsoft'),
    'callbacks' => array(
      'execute' => 'infusionsoft_rules_delete_contact',
    ),
  );

  $actions['infusionsoft_rules_delete_contact_byemail'] = array(
    'label' => t('Delete a Contact by Email'),
    'parameter' => array(
      'email' => array(
        'type' => 'text',
        'label' => t('Email address of a Contact'),
		'description' => t('Email address must be of an existing Infusionsoft Contact'),
      ),
    ),
    'group' => t('Infusionsoft'),
    'callbacks' => array(
      'execute' => 'infusionsoft_rules_delete_contact_byemail',
    ),
  );

  $actions['infusionsoft_add_contact_group'] = array(
    'label' => t('Add a Contact to a Group'),
    'parameter' => array(
      'user' => array(
        'type' => 'user',
        'label' => t('The Drupal User'),
      ),
      'infusionsoft_group_id' => array(
        'type' => 'integer',
        'label' => t('The Infusionsoft Group'),
        'options list' => 'infusionsoft_groups_options',
      ),
    ),
    'group' => t('Infusionsoft'),
    'callbacks' => array(
      'execute' => 'infusionsoft_rules_add_to_group',
    ),
  );

  $actions['infusionsoft_remove_contact_group'] = array(
    'label' => t('Remove a Contact from a Group'),
    'parameter' => array(
      'user' => array(
        'type' => 'user',
        'label' => t('The Drupal User'),
      ),
      'infusionsoft_group_id' => array(
        'type' => 'integer',
        'label' => t('The Infusionsoft Group'),
        'options list' => 'infusionsoft_groups_options',
      ),
    ),
    'group' => t('Infusionsoft'),
    'callbacks' => array(
      'execute' => 'infusionsoft_rules_remove_from_group',
    ),
  );

  $actions['infusionsoft_add_contact_campaign'] = array(
    'label' => t('Add a Contact to a campaign'),
    'parameter' => array(
      'user' => array(
        'type' => 'user',
        'label' => t('The Drupal User'),
      ),
      'campaign' => array(
        'type' => 'integer',
        'label' => t('The Infusionsoft Campaign'),
        'options list' => 'infusionsoft_campaigns_options',
      ),
    ),
    'group' => t('Infusionsoft'),
    'callbacks' => array(
      'execute' => 'infusionsoft_rules_add_to_campaign',
    ),
  );

  $actions['infusionsoft_add_contact_group_byemail'] = array(
    'label' => t('Add a Contact to a Group by Email'),
    'parameter' => array(
      'email' => array(
        'type' => 'text',
        'label' => t('Email address of a Contact'),
        'description' => t('Email address may be of an existing Infusionsoft Contact or a new Contact'),
      ),
      'infusionsoft_group_id' => array(
        'type' => 'integer',
        'label' => t('The Infusionsoft Group'),
        'options list' => 'infusionsoft_groups_options',
      ),
    ),
    'group' => t('Infusionsoft'),
    'callbacks' => array(
      'execute' => 'infusionsoft_rules_add_to_group_byemail',
    ),
  );

  $actions['infusionsoft_add_contact_group_by_id'] = array(
    'label' => t('Add a Contact to a Group by Id'),
    'parameter' => array(
      'Id' => array(
        'type' => 'integer',
        'label' => t('Contact Id'),
        'description' => t('Numeric Id of an existing Infusionsoft Contact'),
      ),
      'infusionsoft_group_id' => array(
        'type' => 'integer',
        'label' => t('The Infusionsoft Group'),
        'options list' => 'infusionsoft_groups_options',
      ),
    ),
    'group' => t('Infusionsoft'),
    'callbacks' => array(
      'execute' => 'infusionsoft_rules_add_to_group_by_id',
    ),
  );

  $actions['infusionsoft_remove_contact_group_byemail'] = array(
    'label' => t('Remove a Contact from a Group by Email'),
    'parameter' => array(
      'email' => array(
        'type' => 'text',
        'label' => t('Email address of a Contact'),
		'description' => t('Email address must be of an existing Infusionsoft Contact'),
      ),
      'infusionsoft_group_id' => array(
        'type' => 'integer',
        'label' => t('The Infusionsoft Group'),
        'options list' => 'infusionsoft_groups_options',
      ),
    ),
    'group' => t('Infusionsoft'),
    'callbacks' => array(
      'execute' => 'infusionsoft_rules_remove_from_group_byemail',
    ),
  );

  return $actions;
}

/**
 * Rules action: Opt in User to Email Service
 *
 * @param $account
 */
function infusionsoft_rules_opt_in($email, $reason) {
  infusionsoft_contact_opt_in($email, $reason);
}

/**
 * Rules action: Add a contact
 */
function infusionsoft_rules_add_contact($account) {
  infusionsoft_contact_id($account);
}

/**
 * Rules action: Delete a contact
 */
function infusionsoft_rules_delete_contact($account) {
  if (!empty($account->field_infusionsoft_id[LANGUAGE_NONE][0]['value'])) {
    $infusionsoft_id = $account->field_infusionsoft_id[LANGUAGE_NONE][0]['value'];
    infusionsoft_contact_delete($infusionsoft_id);
  }
}

/**
 * Rules action: Delete a contact by Email
 */
function infusionsoft_rules_delete_contact_byemail($email) {
  $contact = array();
  $contact['Email'] = $email;
  $id = infusionsoft_contact_load_by_email($contact['Email']);
  if ($id) {
    // Delete contact in Infusionsoft if one exists.
    infusionsoft_contact_delete($id);
  }
}

/**
 * Rules action: adds a user to a group
 */
function infusionsoft_rules_add_to_group($account, $group_id) {
  infusionsoft_user_op('add', 'group', infusionsoft_contact_id($account), $group_id);
}

/**
 * Rules action: remove a user from a group
 */
function infusionsoft_rules_remove_from_group($account, $group_id) {
  infusionsoft_user_op('remove', 'group', infusionsoft_contact_id($account), $group_id);
}

/**
 * Rules action: adds a user to a campaign.
 */
function infusionsoft_rules_add_to_campaign($account, $campaign_id) {
  infusionsoft_user_op('add', 'campaign', infusionsoft_contact_id($account), $campaign_id);
}

/**
 * Rules action: Add a Contact to a Group by Email
 */
function infusionsoft_rules_add_to_group_byemail($email, $group_id) {
  $id = infusionsoft_contact_load_by_email($email);
  if (!$id) {
    $account = user_load_by_mail($email);
    if ($account) {
      // Create an Infusionsoft contact based on existing Drupal user.
      $id = infusionsoft_contact_id($account);
    }
    else {
      // Create an Infusionsoft contact not connected to a Drupal user.
      $contact = array();
      $contact['Email'] = $email;
      $id = infusionsoft_contact_add($contact);
    }
  }

  infusionsoft_user_op('add', 'group', $id, $group_id);
}

/**
 * Rules action: Add a Contact to a Group by Id
 */
function infusionsoft_rules_add_to_group_by_id($id, $group_id) {
  infusionsoft_user_op('add', 'group', $id, $group_id);
}

/**
 * Rules action: Remove a Contact from a Group by Email
 */
function infusionsoft_rules_remove_from_group_byemail($email, $group_id) {
  $contact = array();
  $contact['Email'] = $email;
  $id = infusionsoft_contact_load_by_email($contact['Email']);
  if (!$id) {
    return;
  }

  infusionsoft_user_op('remove', 'group', $id, $group_id);
}
