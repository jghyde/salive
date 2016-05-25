<?php
/**
 * @file
 * liveadcontext.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function liveadcontext_taxonomy_default_vocabularies() {
  return array(
    'dfp_ad_categories' => array(
      'name' => 'DFP Ad Categories',
      'machine_name' => 'dfp_ad_categories',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
