<?php
/**
 * @file
 * livescores.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function livescores_taxonomy_default_vocabularies() {
  return array(
    'school' => array(
      'name' => 'School',
      'machine_name' => 'school',
      'description' => 'The division of a school, example 5A, 4A, and etc.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
