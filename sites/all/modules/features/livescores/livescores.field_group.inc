<?php
/**
 * @file
 * livescores.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function livescores_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home|node|game|form';
  $field_group->group_name = 'group_home';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Home',
    'weight' => '5',
    'children' => array(
      0 => 'field_home_q1',
      1 => 'field_home_q2',
      2 => 'field_home_q3',
      3 => 'field_home_q4',
      4 => 'field_home_total',
      5 => 'field_home_override',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-home field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_home|node|game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_visitors|node|game|form';
  $field_group->group_name = 'group_visitors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visitors',
    'weight' => '3',
    'children' => array(
      0 => 'field_visit_q1',
      1 => 'field_visit_q2',
      2 => 'field_visit_q3',
      3 => 'field_visit_q4',
      4 => 'field_visitors_total',
      5 => 'field_visit_override',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-visitors field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_visitors|node|game|form'] = $field_group;

  return $export;
}
