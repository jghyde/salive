<?php
/**
 * @file
 * livenewsthumbs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function livenewsthumbs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'san_angelo_news';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'San Angelo News';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'newsthumbs',
      'display' => 'block',
      'args' => '',
      'title' => 'Most Recent',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'newsthumbs',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Trending Hot',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'newsthumbs',
      'display' => 'block_3',
      'args' => '',
      'title' => 'Most Rants',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Most Rants');
  t('Most Recent');
  t('San Angelo News');
  t('Trending Hot');

  $export['san_angelo_news'] = $quicktabs;

  return $export;
}
