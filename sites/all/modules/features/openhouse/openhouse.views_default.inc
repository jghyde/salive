<?php
/**
 * @file
 * openhouse.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openhouse_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openhouse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Open House';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'This Week\'s Open Houses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Property Images */
  $handler->display->display_options['fields']['field_property_images']['id'] = 'field_property_images';
  $handler->display->display_options['fields']['field_property_images']['table'] = 'field_data_field_property_images';
  $handler->display->display_options['fields']['field_property_images']['field'] = 'field_property_images';
  $handler->display->display_options['fields']['field_property_images']['label'] = '';
  $handler->display->display_options['fields']['field_property_images']['element_type'] = '0';
  $handler->display->display_options['fields']['field_property_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_images']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_property_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_property_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_property_images']['settings'] = array(
    'image_style' => 'i350x197_updated',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_property_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_property_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_openhouse_date']['id'] = 'field_openhouse_date';
  $handler->display->display_options['fields']['field_openhouse_date']['table'] = 'field_data_field_openhouse_date';
  $handler->display->display_options['fields']['field_openhouse_date']['field'] = 'field_openhouse_date';
  $handler->display->display_options['fields']['field_openhouse_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_openhouse_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_openhouse_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_openhouse_date']['settings'] = array(
    'format_type' => 'small_date_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: When -  start date (field_openhouse_date) */
  $handler->display->display_options['sorts']['field_openhouse_date_value']['id'] = 'field_openhouse_date_value';
  $handler->display->display_options['sorts']['field_openhouse_date_value']['table'] = 'field_data_field_openhouse_date';
  $handler->display->display_options['sorts']['field_openhouse_date_value']['field'] = 'field_openhouse_date_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'openhouse' => 'openhouse',
  );
  /* Filter criterion: Content: When -  start date (field_openhouse_date) */
  $handler->display->display_options['filters']['field_openhouse_date_value']['id'] = 'field_openhouse_date_value';
  $handler->display->display_options['filters']['field_openhouse_date_value']['table'] = 'field_data_field_openhouse_date';
  $handler->display->display_options['filters']['field_openhouse_date_value']['field'] = 'field_openhouse_date_value';
  $handler->display->display_options['filters']['field_openhouse_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_openhouse_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_openhouse_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_openhouse_date_value']['year_range'] = '-0:+3';

  /* Display: Up and Coming San Angelo Real Estate Open Houses */
  $handler = $view->new_display('page', 'Up and Coming San Angelo Real Estate Open Houses', 'page');
  $handler->display->display_options['display_description'] = 'Main stream page of Open Houses';
  $handler->display->display_options['path'] = 'openhouse';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'openhouses.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Open Houses */
  $handler = $view->new_display('block', 'Open Houses', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'The Week\'s Open Houses';
  $handler->display->display_options['display_description'] = 'Open houses happening in San Angelo, Texas.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $export['openhouse'] = $view;

  return $export;
}
