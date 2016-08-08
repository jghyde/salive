<?php
/**
 * @file
 */

/**
 * Implements hook_default_rules_configuration().
 */
function infusionsoft_default_rules_configuration() {
  $rule = rules_reaction_rule();

  $rule->label = 'Opt in User to Infusionsoft Email Service';
  $rule->active = FALSE;
  $rule->tags = array('Infusionsoft');
  $rule
    ->event('infusionsoft_contact_add')
    ->action('infusionsoft_opt_in', array(
	  'email' => 'user:mail',
	  'opt_in_reason' => 'Signed up for membership account.',
	));

  $rules['infusionsoft_opt_in_user_to_email_service'] = $rule;

  $rule = rules_reaction_rule();

  $rule->label = 'New Infusionsoft contact';
  $rule->active = FALSE;
  $rule->tags = array('Infusionsoft');
  $rule
    ->event('user_insert')
	->action('infusionsoft_add_contact', array(
	  'user' => 'account',
	));

  $rules['infusionsoft_new_contact'] = $rule;

  return $rules;
}
