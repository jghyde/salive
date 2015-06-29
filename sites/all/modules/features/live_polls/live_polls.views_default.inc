<?php
/**
 * @file
 * live_polls.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function live_polls_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'poll';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'poll';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Poll';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-3 clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Poll Image */
  $handler->display->display_options['fields']['field_poll_image']['id'] = 'field_poll_image';
  $handler->display->display_options['fields']['field_poll_image']['table'] = 'field_data_field_poll_image';
  $handler->display->display_options['fields']['field_poll_image']['field'] = 'field_poll_image';
  $handler->display->display_options['fields']['field_poll_image']['label'] = '';
  $handler->display->display_options['fields']['field_poll_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_poll_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_poll_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_poll_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_poll_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_poll_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_poll_image']['settings'] = array(
    'colorbox_node_style' => '',
    'colorbox_node_style_first' => 'large',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Rate */
  $handler->display->display_options['fields']['field_rate']['id'] = 'field_rate';
  $handler->display->display_options['fields']['field_rate']['table'] = 'field_data_field_rate';
  $handler->display->display_options['fields']['field_rate']['field'] = 'field_rate';
  $handler->display->display_options['fields']['field_rate']['label'] = '';
  $handler->display->display_options['fields']['field_rate']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_rate']['element_class'] = 'text-center';
  $handler->display->display_options['fields']['field_rate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rate']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rate']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rate']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rate']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'user',
    'text' => 'none',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Client (field_client) */
  $handler->display->display_options['arguments']['field_client_tid']['id'] = 'field_client_tid';
  $handler->display->display_options['arguments']['field_client_tid']['table'] = 'field_data_field_client';
  $handler->display->display_options['arguments']['field_client_tid']['field'] = 'field_client_tid';
  $handler->display->display_options['arguments']['field_client_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_client_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_client_tid']['title'] = '%1 Poll';
  $handler->display->display_options['arguments']['field_client_tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_client_tid']['breadcrumb'] = '%1 Poll';
  $handler->display->display_options['arguments']['field_client_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_client_tid']['default_argument_options']['argument'] = 'No Poll Fount!';
  $handler->display->display_options['arguments']['field_client_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_client_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_client_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_client_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_client_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_client_tid']['validate_options']['vocabularies'] = array(
    'client' => 'client',
  );
  $handler->display->display_options['arguments']['field_client_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_client_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_client_tid']['validate']['fail'] = 'ignore';
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
    'poll_item' => 'poll_item',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'poll/%';
  $export['poll'] = $view;

  return $export;
}
