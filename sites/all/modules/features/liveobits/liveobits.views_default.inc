<?php
/**
 * @file
 * liveobits.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function liveobits_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'obituaries';
  $view->description = 'Pages and blocks with obituaries';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Obituaries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'San Angelo Obituaries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Portrait Image */
  $handler->display->display_options['fields']['field_portrait_image']['id'] = 'field_portrait_image';
  $handler->display->display_options['fields']['field_portrait_image']['table'] = 'field_data_field_portrait_image';
  $handler->display->display_options['fields']['field_portrait_image']['field'] = 'field_portrait_image';
  $handler->display->display_options['fields']['field_portrait_image']['label'] = '';
  $handler->display->display_options['fields']['field_portrait_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portrait_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portrait_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_portrait_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portrait_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portrait_image']['settings'] = array(
    'image_style' => 'profile',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_portrait_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portrait_image']['delta_offset'] = '0';
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
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Content: Date of Birth */
  $handler->display->display_options['fields']['field_date_of_birth']['id'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['table'] = 'field_data_field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['field'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_birth']['element_type'] = '0';
  $handler->display->display_options['fields']['field_date_of_birth']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_birth']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_date_of_birth']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_birth']['settings'] = array(
    'format_type' => 'grammar',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date of Death */
  $handler->display->display_options['fields']['field_date_of_death']['id'] = 'field_date_of_death';
  $handler->display->display_options['fields']['field_date_of_death']['table'] = 'field_data_field_date_of_death';
  $handler->display->display_options['fields']['field_date_of_death']['field'] = 'field_date_of_death';
  $handler->display->display_options['fields']['field_date_of_death']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_death']['element_type'] = '0';
  $handler->display->display_options['fields']['field_date_of_death']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_death']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_date_of_death']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_death']['settings'] = array(
    'format_type' => 'grammar',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
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
  /* Field: Content: Death Notice Only */
  $handler->display->display_options['fields']['field_death_notice_only']['id'] = 'field_death_notice_only';
  $handler->display->display_options['fields']['field_death_notice_only']['table'] = 'field_data_field_death_notice_only';
  $handler->display->display_options['fields']['field_death_notice_only']['field'] = 'field_death_notice_only';
  $handler->display->display_options['fields']['field_death_notice_only']['label'] = '';
  $handler->display->display_options['fields']['field_death_notice_only']['element_type'] = '0';
  $handler->display->display_options['fields']['field_death_notice_only']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_death_notice_only']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_death_notice_only']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_death_notice_only']['type'] = 'list_key';
  /* Sort criterion: Content: Date of Death (field_date_of_death) */
  $handler->display->display_options['sorts']['field_date_of_death_value']['id'] = 'field_date_of_death_value';
  $handler->display->display_options['sorts']['field_date_of_death_value']['table'] = 'field_data_field_date_of_death';
  $handler->display->display_options['sorts']['field_date_of_death_value']['field'] = 'field_date_of_death_value';
  $handler->display->display_options['sorts']['field_date_of_death_value']['order'] = 'DESC';
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
    'obituary' => 'obituary',
  );
  /* Filter criterion: Content: Death Notice Only (field_death_notice_only) */
  $handler->display->display_options['filters']['field_death_notice_only_value']['id'] = 'field_death_notice_only_value';
  $handler->display->display_options['filters']['field_death_notice_only_value']['table'] = 'field_data_field_death_notice_only';
  $handler->display->display_options['filters']['field_death_notice_only_value']['field'] = 'field_death_notice_only_value';
  $handler->display->display_options['filters']['field_death_notice_only_value']['value'] = array(
    1 => '1',
  );

  /* Display: Pageof Obituaries */
  $handler = $view->new_display('page', 'Pageof Obituaries', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'obituary' => 'obituary',
  );
  /* Filter criterion: Content: Death Notice Only (field_death_notice_only) */
  $handler->display->display_options['filters']['field_death_notice_only_value']['id'] = 'field_death_notice_only_value';
  $handler->display->display_options['filters']['field_death_notice_only_value']['table'] = 'field_data_field_death_notice_only';
  $handler->display->display_options['filters']['field_death_notice_only_value']['field'] = 'field_death_notice_only_value';
  $handler->display->display_options['filters']['field_death_notice_only_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_death_notice_only_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Last Name (field_obit_lname) */
  $handler->display->display_options['filters']['field_obit_lname_value']['id'] = 'field_obit_lname_value';
  $handler->display->display_options['filters']['field_obit_lname_value']['table'] = 'field_data_field_obit_lname';
  $handler->display->display_options['filters']['field_obit_lname_value']['field'] = 'field_obit_lname_value';
  $handler->display->display_options['filters']['field_obit_lname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_obit_lname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_obit_lname_value']['expose']['operator_id'] = 'field_obit_lname_value_op';
  $handler->display->display_options['filters']['field_obit_lname_value']['expose']['label'] = 'Search by last name';
  $handler->display->display_options['filters']['field_obit_lname_value']['expose']['operator'] = 'field_obit_lname_value_op';
  $handler->display->display_options['filters']['field_obit_lname_value']['expose']['identifier'] = 'field_obit_lname_value';
  $handler->display->display_options['filters']['field_obit_lname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_obit_lname_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_obit_lname_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_obit_lname_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_obit_lname_value']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'obituaries';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'obituaries.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
    'block_1' => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Obituaries';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';

  /* Display: Death Notice Block */
  $handler = $view->new_display('block', 'Death Notice Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'San Angelo Death Notices';
  $handler->display->display_options['display_description'] = 'Block of death notices';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See All San Angelo Death Notices';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'death-notice';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date of Death */
  $handler->display->display_options['fields']['field_date_of_death']['id'] = 'field_date_of_death';
  $handler->display->display_options['fields']['field_date_of_death']['table'] = 'field_data_field_date_of_death';
  $handler->display->display_options['fields']['field_date_of_death']['field'] = 'field_date_of_death';
  $handler->display->display_options['fields']['field_date_of_death']['label'] = '';
  $handler->display->display_options['fields']['field_date_of_death']['element_type'] = '0';
  $handler->display->display_options['fields']['field_date_of_death']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_death']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_date_of_death']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_death']['settings'] = array(
    'format_type' => 'grammar',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'obituary' => 'obituary',
  );
  /* Filter criterion: Content: Death Notice Only (field_death_notice_only) */
  $handler->display->display_options['filters']['field_death_notice_only_value']['id'] = 'field_death_notice_only_value';
  $handler->display->display_options['filters']['field_death_notice_only_value']['table'] = 'field_data_field_death_notice_only';
  $handler->display->display_options['filters']['field_death_notice_only_value']['field'] = 'field_death_notice_only_value';
  $handler->display->display_options['filters']['field_death_notice_only_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'obituary' => 'obituary',
  );
  /* Filter criterion: Content: Death Notice Only (field_death_notice_only) */
  $handler->display->display_options['filters']['field_death_notice_only_value']['id'] = 'field_death_notice_only_value';
  $handler->display->display_options['filters']['field_death_notice_only_value']['table'] = 'field_data_field_death_notice_only';
  $handler->display->display_options['filters']['field_death_notice_only_value']['field'] = 'field_death_notice_only_value';
  $handler->display->display_options['filters']['field_death_notice_only_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_death_notice_only_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'email/obits';
  $export['obituaries'] = $view;

  return $export;
}
