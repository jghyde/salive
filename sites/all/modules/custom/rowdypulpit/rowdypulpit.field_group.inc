<?php
/**
 * @file
 * rowdypulpit.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rowdypulpit_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contribpanel|node|contrib|form';
  $field_group->group_name = 'group_contribpanel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contrib';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contrib Panel',
    'weight' => '1',
    'children' => array(
      0 => 'field_contrib_img',
      1 => 'field_contrib_img_url',
      2 => 'field_contrib_teaser',
      3 => 'field_issue_of_publication',
      4 => 'field_section',
      5 => 'field_type_of_posting',
      6 => 'field_youtube',
      7 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contrib Panel',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_contribpanel|node|contrib|form'] = $field_group;

  return $export;
}
