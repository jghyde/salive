<?php
/**
 * @file
 * liverecommended.features.inc
 */

/**
 * Implements hook_views_api().
 */
function liverecommended_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function liverecommended_image_default_styles() {
  $styles = array();

  // Exported image style: news_thumbs__144x108_.
  $styles['news_thumbs__144x108_'] = array(
    'name' => 'news_thumbs__144x108_',
    'label' => 'News Thumbs (144x108)',
    'effects' => array(
      25 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 180,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      26 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
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
