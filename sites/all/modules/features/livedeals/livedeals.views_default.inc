<?php
/**
 * @file
 * livedeals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function livedeals_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'deal';
  $view->description = 'The deals';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Deal';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shop San Angelo First Deals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Below are the current and active San Angelo LIVE! Daily Deals. Use them and shop in San Angelo FIRST! ';
  $handler->display->display_options['header']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'dailydeal_pic',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '420',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Deal Start Date */
  $handler->display->display_options['fields']['field_deal_start_date']['id'] = 'field_deal_start_date';
  $handler->display->display_options['fields']['field_deal_start_date']['table'] = 'field_data_field_deal_start_date';
  $handler->display->display_options['fields']['field_deal_start_date']['field'] = 'field_deal_start_date';
  $handler->display->display_options['fields']['field_deal_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_deal_start_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_deal_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deal_start_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_deal_start_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_deal_start_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_deal_start_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Content: Number of Coupons Left */
  $handler->display->display_options['fields']['field_number_of_coupons_left']['id'] = 'field_number_of_coupons_left';
  $handler->display->display_options['fields']['field_number_of_coupons_left']['table'] = 'field_data_field_number_of_coupons_left';
  $handler->display->display_options['fields']['field_number_of_coupons_left']['field'] = 'field_number_of_coupons_left';
  $handler->display->display_options['fields']['field_number_of_coupons_left']['element_type'] = '0';
  $handler->display->display_options['fields']['field_number_of_coupons_left']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_number_of_coupons_left']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_number_of_coupons_left']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'deal' => 'deal',
  );
  /* Filter criterion: Content: Deal Start Date (field_deal_start_date) */
  $handler->display->display_options['filters']['field_deal_start_date_value']['id'] = 'field_deal_start_date_value';
  $handler->display->display_options['filters']['field_deal_start_date_value']['table'] = 'field_data_field_deal_start_date';
  $handler->display->display_options['filters']['field_deal_start_date_value']['field'] = 'field_deal_start_date_value';
  $handler->display->display_options['filters']['field_deal_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_deal_start_date_value']['default_date'] = 'now -7 days';
  /* Filter criterion: Content: Number of Coupons Left (field_number_of_coupons_left) */
  $handler->display->display_options['filters']['field_number_of_coupons_left_value']['id'] = 'field_number_of_coupons_left_value';
  $handler->display->display_options['filters']['field_number_of_coupons_left_value']['table'] = 'field_data_field_number_of_coupons_left';
  $handler->display->display_options['filters']['field_number_of_coupons_left_value']['field'] = 'field_number_of_coupons_left_value';
  $handler->display->display_options['filters']['field_number_of_coupons_left_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_number_of_coupons_left_value']['value']['value'] = '1';

  /* Display: Deal List Page */
  $handler = $view->new_display('page', 'Deal List Page', 'page');
  $handler->display->display_options['display_description'] = 'A page with all active deals listed';
  $handler->display->display_options['path'] = 'deals';
  $handler->display->display_options['menu']['title'] = 'Daily Deals';
  $handler->display->display_options['menu']['description'] = 'All San Angelo Daily Deals that are Active';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Deal List Feed */
  $handler = $view->new_display('feed', 'Deal List Feed', 'feed');
  $handler->display->display_options['display_description'] = 'A feed of all active daily deals from San Angelo LIVE!';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'deals.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Deal List Block */
  $handler = $view->new_display('block', 'Deal List Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shop San Angelo First';
  $handler->display->display_options['display_description'] = 'A block of current deals on San Angelo LIVE!';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $export['deal'] = $view;

  return $export;
}
