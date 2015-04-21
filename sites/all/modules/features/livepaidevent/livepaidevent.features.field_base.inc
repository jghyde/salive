<?php
/**
 * @file
 * livepaidevent.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function livepaidevent_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_submitted_address'
  $field_bases['field_submitted_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_submitted_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  return $field_bases;
}
