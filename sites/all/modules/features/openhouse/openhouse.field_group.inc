<?php
/**
 * @file
 * openhouse.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function openhouse_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|openhouse|default';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'openhouse';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_motherhood';
  $field_group->data = array(
    'label' => 'Address Info',
    'weight' => '11',
    'children' => array(
      0 => 'field_address',
      1 => 'field_listing',
      2 => 'field_asking',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-address field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_address|node|openhouse|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|openhouse|full';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'openhouse';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_motherhood';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '11',
    'children' => array(
      0 => 'field_address',
      1 => 'field_listing',
      2 => 'field_asking',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Address',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-address field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_address|node|openhouse|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agenct|node|openhouse|default';
  $field_group->group_name = 'group_agenct';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'openhouse';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_motherhood';
  $field_group->data = array(
    'label' => 'Agent',
    'weight' => '13',
    'children' => array(
      0 => 'field_venue',
      1 => 'field_real_estate_agent',
      2 => 'field_agent_phone',
      3 => 'field_agent_web_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Agent',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-agenct field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_agenct|node|openhouse|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agenct|node|openhouse|full';
  $field_group->group_name = 'group_agenct';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'openhouse';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_motherhood';
  $field_group->data = array(
    'label' => 'Agent Information',
    'weight' => '13',
    'children' => array(
      0 => 'field_venue',
      1 => 'field_real_estate_agent',
      2 => 'field_agent_phone',
      3 => 'field_agent_web_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Agent Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-agenct field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_agenct|node|openhouse|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_motherhood|node|openhouse|default';
  $field_group->group_name = 'group_motherhood';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'openhouse';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'motherhood',
    'weight' => '2',
    'children' => array(
      0 => 'group_address',
      1 => 'group_agenct',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'motherhood',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-motherhood field-group-div clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_motherhood|node|openhouse|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_motherhood|node|openhouse|form';
  $field_group->group_name = 'group_motherhood';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'openhouse';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'motherhood',
    'weight' => '2',
    'children' => array(
      0 => 'field_address',
      1 => 'field_real_estate_agent',
      2 => 'field_agent_phone',
      3 => 'field_agent_web_address',
      4 => 'field_listing',
      5 => 'field_asking',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'motherhood',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-motherhood field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_motherhood|node|openhouse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_motherhood|node|openhouse|full';
  $field_group->group_name = 'group_motherhood';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'openhouse';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'motherhood',
    'weight' => '2',
    'children' => array(
      0 => 'group_address',
      1 => 'group_agenct',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'motherhood',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-motherhood field-group-div clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_motherhood|node|openhouse|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_openhousewords|node|openhouse|teaser';
  $field_group->group_name = 'group_openhousewords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'openhouse';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'openhousewords',
    'weight' => '1',
    'children' => array(
      0 => 'field_openhouse_date',
      1 => 'field_asking',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-openhousewords field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_openhousewords|node|openhouse|teaser'] = $field_group;

  return $export;
}
