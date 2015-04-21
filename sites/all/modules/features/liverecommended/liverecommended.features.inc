<?php
/**
 * @file
 * liverecommended.features.inc
 */

/**
 * Implements hook_views_api().
 */
function liverecommended_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function liverecommended_image_default_styles() {
  $styles = array();

  // Exported image style: news_thumbs__144x108_.
  $styles['news_thumbs__144x108_'] = array(
    'label' => 'News Thumbs (144x108)',
    'effects' => array(
      25 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 180,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      26 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 144,
          'height' => 108,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
