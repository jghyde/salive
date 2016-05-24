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
    'classified_categories' => array(
      'name' => 'Classified Ads categories',
      'machine_name' => 'classified_categories',
      'description' => 'This vocabulary is the one used by the Classified Ads module to classify ads. Do not remove it: it is managed by the Classified Ads module, not by the taxonomy module.',
      'hierarchy' => 0,
      'module' => 'classified',
      'weight' => -10,
    ),
  );
}
