<?php
/**
 * @file
 * liveobits.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function liveobits_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function liveobits_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function liveobits_image_default_styles() {
  $styles = array();

  // Exported image style: funeralhome.
  $styles['funeralhome'] = array(
    'name' => 'funeralhome',
    'label' => 'funeralhome',
    'effects' => array(
      16 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function liveobits_node_info() {
  $items = array(
    'obituary' => array(
      'name' => t('Obit'),
      'base' => 'node_content',
      'description' => t('A tribute to someone who died.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
