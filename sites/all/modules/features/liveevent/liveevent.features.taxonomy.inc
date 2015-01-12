<?php
/**
 * @file
 * liveevent.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function liveevent_taxonomy_default_vocabularies() {
  return array(
    'event_type' => array(
      'name' => 'Event Type',
      'machine_name' => 'event_type',
      'description' => 'This is the type of event that will sort all of the events.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
