<?php
/**
 * @file
 * taxedu_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function taxedu_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = '_taxedu_country';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Country';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'country data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'nothing' => 'nothing',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '    ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    '_taxedu_country_data' => '_taxedu_country_data',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['_taxedu_country'] = $view;

  $view = new view();
  $view->name = '_taxedu_forum_banner_add';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Forum Banner Add';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row padding-forum"><div class="col-md-12 go-to-forum"> <a href="forum"><span>&nbsp; </span></a></div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    '_taxedu_blocks' => '_taxedu_blocks',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['_taxedu_forum_banner_add'] = $view;

  $view = new view();
  $view->name = '_taxedu_my_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu My Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '<';
  $handler->display->display_options['pager']['options']['tags']['next'] = '>';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'myresources-table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'myresources-list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'myresources-wrap';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'body' => 'body',
    'status' => 'status',
    'edit_node' => 'edit_node',
    'created' => 'created',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="myresources-header">
  <div class="col-md-4 col-sm-12">Resource title</div>
  <div class="col-md-5 col-sm-12">Short description</div>
  <div class="col-md-1 col-sm-1">Status</div>
  <div class="col-md-1 col-sm-1">Date</div>
  <div class="col-md-1 col-sm-1">Actions</div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have no resources added!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'col-md-4 col-sm12 resource-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'col-md-5 col-sm-12';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'col-md-1 col-sm-4 text-nowrap';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd-m-Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'text-right';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-minus" aria-hidden="true"></i> Update';
  /* Field: Content revision: Log message */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Field: Workbench Moderation: From state */
  $handler->display->display_options['fields']['from_state']['id'] = 'from_state';
  $handler->display->display_options['fields']['from_state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['from_state']['field'] = 'from_state';
  $handler->display->display_options['fields']['from_state']['label'] = '';
  $handler->display->display_options['fields']['from_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['from_state']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    '_taxedu_resources' => '_taxedu_resources',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'draft' => 'draft',
    'expired' => 'expired',
    'published' => 'published',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'col-md-4 col-sm12 resource-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'col-md-5 col-sm-12';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Workbench Moderation: State */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = '';
  $handler->display->display_options['fields']['state']['element_type'] = 'div';
  $handler->display->display_options['fields']['state']['element_class'] = 'col-md-1 col-sm-4';
  $handler->display->display_options['fields']['state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['state']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'col-md-1 col-sm-4 no-wrap';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd-m-Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'text-right';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-plus" aria-hidden="true"></i> Update';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'text-right';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-minus" aria-hidden="true"></i> Delete';
  $export['_taxedu_my_resources'] = $view;

  $view = new view();
  $view->name = '_taxedu_resource_banner_add';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Resource Banner Add';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="upload-my-resources padding-forum"><a href="node/add/-taxedu-resources"><span class="upload">&nbsp;</span></a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    '_taxedu_blocks' => '_taxedu_blocks',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['_taxedu_resource_banner_add'] = $view;

  $view = new view();
  $view->name = '_taxedu_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['css_class'] = 'resources-block-views';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4 teachers-items';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_resource_image']['id'] = 'field_resource_image';
  $handler->display->display_options['fields']['field_resource_image']['table'] = 'field_data_field_resource_image';
  $handler->display->display_options['fields']['field_resource_image']['field'] = 'field_resource_image';
  $handler->display->display_options['fields']['field_resource_image']['label'] = '';
  $handler->display->display_options['fields']['field_resource_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_resource_image']['element_class'] = 'img-responsive img-rounded element-image';
  $handler->display->display_options['fields']['field_resource_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resource_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_resource_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_image']['settings'] = array(
    'image_style' => '_taxedu_teachers-corner',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'col-md-12 text-left resource-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: How to use this lesson */
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['id'] = 'field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['table'] = 'field_data_field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['field'] = 'field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['label'] = '';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['element_label_colon'] = FALSE;
  /* Field: Content: Details */
  $handler->display->display_options['fields']['field_details']['id'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['table'] = 'field_data_field_details';
  $handler->display->display_options['fields']['field_details']['field'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['label'] = '';
  $handler->display->display_options['fields']['field_details']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_details']['element_label_colon'] = FALSE;
  /* Field: Content: Minidescription */
  $handler->display->display_options['fields']['field_minidescription']['id'] = 'field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['table'] = 'field_data_field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['field'] = 'field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['label'] = '';
  $handler->display->display_options['fields']['field_minidescription']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_minidescription']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_minidescription']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_minidescription']['element_class'] = 'col-md-12 minidescription';
  $handler->display->display_options['fields']['field_minidescription']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minidescription']['element_default_classes'] = FALSE;
  /* Field: buton details */
  $handler->display->display_options['fields']['field_details_1']['id'] = 'field_details_1';
  $handler->display->display_options['fields']['field_details_1']['table'] = 'field_data_field_details';
  $handler->display->display_options['fields']['field_details_1']['field'] = 'field_details';
  $handler->display->display_options['fields']['field_details_1']['ui_name'] = 'buton details';
  $handler->display->display_options['fields']['field_details_1']['label'] = '';
  $handler->display->display_options['fields']['field_details_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_details_1']['alter']['text'] = '<a href="#" class="button btn button-box pull-right btn-large btn-block" data-toggle="modal" data-target="#teachersDetailsModal[nid]">
                                    Details
                                </a>';
  $handler->display->display_options['fields']['field_details_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_details_1']['element_class'] = 'col-md-4';
  $handler->display->display_options['fields']['field_details_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_details_1']['element_default_classes'] = FALSE;
  /* Field: button launch course */
  $handler->display->display_options['fields']['field_resource_my_file']['id'] = 'field_resource_my_file';
  $handler->display->display_options['fields']['field_resource_my_file']['table'] = 'field_data_field_resource_my_file';
  $handler->display->display_options['fields']['field_resource_my_file']['field'] = 'field_resource_my_file';
  $handler->display->display_options['fields']['field_resource_my_file']['ui_name'] = 'button launch course';
  $handler->display->display_options['fields']['field_resource_my_file']['label'] = '';
  $handler->display->display_options['fields']['field_resource_my_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_my_file']['alter']['text'] = '<a href="[field_resource_my_file]" class="button btn button-box pull-right btn-large btn-block" target="_blank">Launch Course</a>    ';
  $handler->display->display_options['fields']['field_resource_my_file']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_resource_my_file']['element_class'] = 'col-md-8';
  $handler->display->display_options['fields']['field_resource_my_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_my_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resource_my_file']['empty'] = '<a href="#" class="button btn button-box pull-right btn-large btn-block" >No Course</a>    ';
  $handler->display->display_options['fields']['field_resource_my_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_my_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_resource_my_file']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  /* Field: button how to use */
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['id'] = 'field_how_to_use_this_lesson_1';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['table'] = 'field_data_field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['field'] = 'field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['ui_name'] = 'button how to use';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['label'] = '';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['alter']['text'] = '<a href="#" class="button btn button-box-fullwidth btn-large btn-block"  data-toggle="modal" data-target="#teachersHowUseModal[nid]">How to use this lesson</a> ';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['element_class'] = 'col-md-12';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['element_default_classes'] = FALSE;
  /* Field: modal details */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'modal details';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="modal fade" id="teachersDetailsModal[nid]" tabindex="-1" role="dialog" >
    <div class="modal-dialog" role="document">
        <div class="modal-content">
            <div class="modal-header">
                <h4 class="modal-title">[title] :: Details</h4>
            </div>
            <div class="modal-body">
                 <div class="row">
                   [field_details]
                 </div>
            </div>
            <div class="modal-footer">
                <a href="" class="btn btn-default" data-dismiss="modal" id="closegame">Close</a>
            </div>
        </div>
    </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: modal how use */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'modal how use';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="modal fade" id="teachersHowUseModal[nid]" tabindex="-1" role="dialog" >
    <div class="modal-dialog" role="document">
        <div class="modal-content">
            <div class="modal-header">
                <h4 class="modal-title">[title] :: How to use this lesson</h4>
            </div>
            <div class="modal-body">
[field_how_to_use_this_lesson] 
            </div>
            <div class="modal-footer">
                <a href="" class="btn btn-default" data-dismiss="modal">Close</a>
            </div>
        </div>
    </div>
</div>

';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
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
    '_taxedu_resources' => '_taxedu_resources',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Target group (field_target_group) (translated) */
  $handler->display->display_options['filters']['field_target_group_value_i18n']['id'] = 'field_target_group_value_i18n';
  $handler->display->display_options['filters']['field_target_group_value_i18n']['table'] = 'field_data_field_target_group';
  $handler->display->display_options['filters']['field_target_group_value_i18n']['field'] = 'field_target_group_value_i18n';
  $handler->display->display_options['filters']['field_target_group_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_group_value_i18n']['expose']['operator_id'] = 'field_target_group_value_i18n_op';
  $handler->display->display_options['filters']['field_target_group_value_i18n']['expose']['operator'] = 'field_target_group_value_i18n_op';
  $handler->display->display_options['filters']['field_target_group_value_i18n']['expose']['identifier'] = 'field_target_group_value_i18n';
  $handler->display->display_options['filters']['field_target_group_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_target_group_value_i18n']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Resource type (field_resource_type) (translated) */
  $handler->display->display_options['filters']['field_resource_type_value_i18n']['id'] = 'field_resource_type_value_i18n';
  $handler->display->display_options['filters']['field_resource_type_value_i18n']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value_i18n']['field'] = 'field_resource_type_value_i18n';
  $handler->display->display_options['filters']['field_resource_type_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value_i18n']['expose']['operator_id'] = 'field_resource_type_value_i18n_op';
  $handler->display->display_options['filters']['field_resource_type_value_i18n']['expose']['operator'] = 'field_resource_type_value_i18n_op';
  $handler->display->display_options['filters']['field_resource_type_value_i18n']['expose']['identifier'] = 'field_resource_type_value_i18n';
  $handler->display->display_options['filters']['field_resource_type_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Resources';
  $export['_taxedu_resources'] = $view;

  $view = new view();
  $view->name = '_taxedu_resources_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Resources Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'block-resource-details-from-views';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="row go-to-forum"> <a href="../forum"><span>&nbsp; </span></a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['empty'] = TRUE;
  $handler->display->display_options['footer']['view']['view_to_insert'] = '_taxedu_resources:block';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area_1']['id'] = 'area_1';
  $handler->display->display_options['footer']['area_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_1']['field'] = 'area';
  $handler->display->display_options['footer']['area_1']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_1']['content'] = '<a href="../resources" class="return"><i class="fa fa-chevron-left" aria-hidden="true"></i> Return to resources list</a>';
  $handler->display->display_options['footer']['area_1']['format'] = 'full_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_class'] = 'title caption';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Minidescription */
  $handler->display->display_options['fields']['field_minidescription']['id'] = 'field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['table'] = 'field_data_field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['field'] = 'field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['label'] = '';
  $handler->display->display_options['fields']['field_minidescription']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_minidescription']['element_class'] = 'minidescription-caption';
  $handler->display->display_options['fields']['field_minidescription']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minidescription']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_resource_image']['id'] = 'field_resource_image';
  $handler->display->display_options['fields']['field_resource_image']['table'] = 'field_data_field_resource_image';
  $handler->display->display_options['fields']['field_resource_image']['field'] = 'field_resource_image';
  $handler->display->display_options['fields']['field_resource_image']['label'] = '';
  $handler->display->display_options['fields']['field_resource_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_resource_image']['element_class'] = 'image-caption';
  $handler->display->display_options['fields']['field_resource_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resource_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_image']['settings'] = array(
    'image_style' => 'taxedu_resource_page',
    'image_link' => '',
  );
  /* Field: Content: Details */
  $handler->display->display_options['fields']['field_details']['id'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['table'] = 'field_data_field_details';
  $handler->display->display_options['fields']['field_details']['field'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_details']['element_class'] = 'resource-details';
  $handler->display->display_options['fields']['field_details']['element_default_classes'] = FALSE;
  /* Field: Content: How to use this lesson */
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['id'] = 'field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['table'] = 'field_data_field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['field'] = 'field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['element_class'] = 'resource-how-to';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['element_default_classes'] = FALSE;
  /* Field: Content: Resource file */
  $handler->display->display_options['fields']['field_resource_my_file_1']['id'] = 'field_resource_my_file_1';
  $handler->display->display_options['fields']['field_resource_my_file_1']['table'] = 'field_data_field_resource_my_file';
  $handler->display->display_options['fields']['field_resource_my_file_1']['field'] = 'field_resource_my_file';
  $handler->display->display_options['fields']['field_resource_my_file_1']['label'] = '';
  $handler->display->display_options['fields']['field_resource_my_file_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_my_file_1']['alter']['text'] = 'Download ';
  $handler->display->display_options['fields']['field_resource_my_file_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_resource_my_file_1']['alter']['path'] = '[field_resource_my_file_1] ';
  $handler->display->display_options['fields']['field_resource_my_file_1']['alter']['link_class'] = 'btn button download';
  $handler->display->display_options['fields']['field_resource_my_file_1']['element_class'] = 'btn btn-default button download';
  $handler->display->display_options['fields']['field_resource_my_file_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_my_file_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resource_my_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_my_file_1']['type'] = 'file_url_plain';
  /* Field: report button */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'report button';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#" class="button btn  text-right  btn-danger btn-report" data-toggle="modal" data-target="#reportModal[nid]">
                                    Report this ressource
                                </a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'col-md-12 text-right';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: modal report */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'modal report';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="modal fade" id="reportModal[nid]" tabindex="-1" role="dialog" >
    <div class="modal-dialog" role="document">
        <div class="modal-content">
            <div class="modal-header">
                <h4 class="modal-title">[title] :: REPORT</h4>
            </div>
            <div class="modal-body">
                 <div class="row">                 
<p>If you think this ressource has violated copyright or
other rights, please fill the reasons in the box below.</p>
                 </div>
            </div>
            <div class="modal-footer">
                <a href="" class="btn btn-default" data-dismiss="modal" id="closegame">Close</a>
            </div>
        </div>
    </div>
</div>

';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    '_taxedu_resources' => '_taxedu_resources',
  );
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
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
    '_taxedu_resources' => '_taxedu_resources',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'resources/%';
  $export['_taxedu_resources_node'] = $view;

  $view = new view();
  $view->name = '_taxedu_resources_return';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Resources return';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="../resources" class="return"><i class="fa fa-chevron-left" aria-hidden="true"></i> Return to resources list</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    '_taxedu_blocks' => '_taxedu_blocks',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['_taxedu_resources_return'] = $view;

  $view = new view();
  $view->name = '_taxedu_resources_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Resources Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'flexslider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '5000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_resource_image']['id'] = 'field_resource_image';
  $handler->display->display_options['fields']['field_resource_image']['table'] = 'field_data_field_resource_image';
  $handler->display->display_options['fields']['field_resource_image']['field'] = 'field_resource_image';
  $handler->display->display_options['fields']['field_resource_image']['label'] = '';
  $handler->display->display_options['fields']['field_resource_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_resource_image']['element_class'] = 'row img-slider';
  $handler->display->display_options['fields']['field_resource_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resource_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_image']['settings'] = array(
    'image_style' => 'taxedu_resource_page',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Minidescription */
  $handler->display->display_options['fields']['field_minidescription']['id'] = 'field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['table'] = 'field_data_field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['field'] = 'field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['label'] = '';
  $handler->display->display_options['fields']['field_minidescription']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_minidescription']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row caption-slider"><h1>[title]</h1><h3>[field_minidescription]</h3></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    '_taxedu_resources' => '_taxedu_resources',
  );
  /* Filter criterion: Content: In slider (field_in_slider) */
  $handler->display->display_options['filters']['field_in_slider_value']['id'] = 'field_in_slider_value';
  $handler->display->display_options['filters']['field_in_slider_value']['table'] = 'field_data_field_in_slider';
  $handler->display->display_options['filters']['field_in_slider_value']['field'] = 'field_in_slider_value';
  $handler->display->display_options['filters']['field_in_slider_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_in_slider_value']['expose']['operator_id'] = 'field_in_slider_value_op';
  $handler->display->display_options['filters']['field_in_slider_value']['expose']['label'] = 'In slider (field_in_slider)';
  $handler->display->display_options['filters']['field_in_slider_value']['expose']['operator'] = 'field_in_slider_value_op';
  $handler->display->display_options['filters']['field_in_slider_value']['expose']['identifier'] = 'field_in_slider_value';
  $handler->display->display_options['filters']['field_in_slider_value']['reduce_duplicates'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['_taxedu_resources_slider'] = $view;

  $view = new view();
  $view->name = '_taxedu_social_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Social Links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'connect with us';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'social-icons-round';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: class */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'field_data_field_class';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['label'] = '';
  $handler->display->display_options['fields']['field_class']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class']['element_default_classes'] = FALSE;
  /* Field: Content: Social Link */
  $handler->display->display_options['fields']['field_social_link']['id'] = 'field_social_link';
  $handler->display->display_options['fields']['field_social_link']['table'] = 'field_data_field_social_link';
  $handler->display->display_options['fields']['field_social_link']['field'] = 'field_social_link';
  $handler->display->display_options['fields']['field_social_link']['label'] = '';
  $handler->display->display_options['fields']['field_social_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_social_link']['alter']['text'] = '<a href="[field_social_link-url]">

<span class="fa-stack fa-2x">
  <i class="fa fa-circle fa-stack-2x"></i>
  <i class="fa [field_class] fa-stack-1x"></i>
</span>
</a>';
  $handler->display->display_options['fields']['field_social_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_social_link']['alter']['link_class'] = '[field_class] ';
  $handler->display->display_options['fields']['field_social_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_social_link']['click_sort_column'] = 'url';
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
    '_taxedu_social_links' => '_taxedu_social_links',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['_taxedu_social_links'] = $view;

  $view = new view();
  $view->name = '_taxedu_surprising_facts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Surprising facts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '_TaxEdu Surprising facts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = '_taxedu_surprising_facts_content:block';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: eu */
  $handler->display->display_options['fields']['field_eu']['id'] = 'field_eu';
  $handler->display->display_options['fields']['field_eu']['table'] = 'field_data_field_eu';
  $handler->display->display_options['fields']['field_eu']['field'] = 'field_eu';
  $handler->display->display_options['fields']['field_eu']['label'] = '';
  $handler->display->display_options['fields']['field_eu']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_eu']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eu']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eu']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Labels */
  $handler->display->display_options['fields']['field_labels']['id'] = 'field_labels';
  $handler->display->display_options['fields']['field_labels']['table'] = 'field_data_field_labels';
  $handler->display->display_options['fields']['field_labels']['field'] = 'field_labels';
  $handler->display->display_options['fields']['field_labels']['label'] = '';
  $handler->display->display_options['fields']['field_labels']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_labels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_labels']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<li class="eu[field_eu]"><a href="#[field_labels]">[title]</a></li>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    '_taxedu_surprising_facts' => '_taxedu_surprising_facts',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['_taxedu_surprising_facts'] = $view;

  $view = new view();
  $view->name = '_taxedu_surprising_facts_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Surprising facts content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '_TaxEdu Surprising facts content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Labels */
  $handler->display->display_options['fields']['field_labels']['id'] = 'field_labels';
  $handler->display->display_options['fields']['field_labels']['table'] = 'field_data_field_labels';
  $handler->display->display_options['fields']['field_labels']['field'] = 'field_labels';
  $handler->display->display_options['fields']['field_labels']['label'] = '';
  $handler->display->display_options['fields']['field_labels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_labels']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="[field_labels]">
[body]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    '_taxedu_surprising_facts' => '_taxedu_surprising_facts',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['_taxedu_surprising_facts_content'] = $view;

  $view = new view();
  $view->name = '_taxedu_teachers_corner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Teachers Corner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Teachers Corner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4 teachers-items';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Continut Url */
  $handler->display->display_options['fields']['field_resurse_public_url_1']['id'] = 'field_resurse_public_url_1';
  $handler->display->display_options['fields']['field_resurse_public_url_1']['table'] = 'field_data_field_resurse_public_url';
  $handler->display->display_options['fields']['field_resurse_public_url_1']['field'] = 'field_resurse_public_url';
  $handler->display->display_options['fields']['field_resurse_public_url_1']['ui_name'] = 'Continut Url';
  $handler->display->display_options['fields']['field_resurse_public_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_resurse_public_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resurse_public_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resurse_public_url_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resurse_public_url_1']['group_column'] = '';
  /* Field: Content: Resource public file */
  $handler->display->display_options['fields']['field_resource_public_file_1']['id'] = 'field_resource_public_file_1';
  $handler->display->display_options['fields']['field_resource_public_file_1']['table'] = 'field_data_field_resource_public_file';
  $handler->display->display_options['fields']['field_resource_public_file_1']['field'] = 'field_resource_public_file';
  $handler->display->display_options['fields']['field_resource_public_file_1']['label'] = '';
  $handler->display->display_options['fields']['field_resource_public_file_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_public_file_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_resource_public_file_1']['element_class'] = 'launch-course';
  $handler->display->display_options['fields']['field_resource_public_file_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_public_file_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resource_public_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_public_file_1']['type'] = 'file_video';
  $handler->display->display_options['fields']['field_resource_public_file_1']['settings'] = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '640',
    'height' => '480',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  /* Field: Content: How to use this lesson */
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['id'] = 'field_how_to_use_this_lesson_1';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['table'] = 'field_data_field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['field'] = 'field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['label'] = '';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_to_use_this_lesson_1']['element_default_classes'] = FALSE;
  /* Field: Continut Details */
  $handler->display->display_options['fields']['field_details_1']['id'] = 'field_details_1';
  $handler->display->display_options['fields']['field_details_1']['table'] = 'field_data_field_details';
  $handler->display->display_options['fields']['field_details_1']['field'] = 'field_details';
  $handler->display->display_options['fields']['field_details_1']['ui_name'] = 'Continut Details';
  $handler->display->display_options['fields']['field_details_1']['label'] = '';
  $handler->display->display_options['fields']['field_details_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_details_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_details_1']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_teachersimg']['id'] = 'field_teachersimg';
  $handler->display->display_options['fields']['field_teachersimg']['table'] = 'field_data_field_teachersimg';
  $handler->display->display_options['fields']['field_teachersimg']['field'] = 'field_teachersimg';
  $handler->display->display_options['fields']['field_teachersimg']['label'] = '';
  $handler->display->display_options['fields']['field_teachersimg']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_teachersimg']['element_class'] = 'img-responsive img-rounded element-image';
  $handler->display->display_options['fields']['field_teachersimg']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teachersimg']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teachersimg']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teachersimg']['settings'] = array(
    'image_style' => '_taxedu_teachers-corner',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'col-md-12 text-left';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Minidescription */
  $handler->display->display_options['fields']['field_minidescription']['id'] = 'field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['table'] = 'field_data_field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['field'] = 'field_minidescription';
  $handler->display->display_options['fields']['field_minidescription']['label'] = '';
  $handler->display->display_options['fields']['field_minidescription']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_minidescription']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_minidescription']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_minidescription']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_minidescription']['element_class'] = 'col-md-12 minidescription';
  $handler->display->display_options['fields']['field_minidescription']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minidescription']['element_default_classes'] = FALSE;
  /* Field: Content: Details */
  $handler->display->display_options['fields']['field_details']['id'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['table'] = 'field_data_field_details';
  $handler->display->display_options['fields']['field_details']['field'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['label'] = '';
  $handler->display->display_options['fields']['field_details']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_details']['alter']['text'] = '<a href="#" class="button btn button-box pull-right btn-large btn-block" data-toggle="modal" data-target="#teachersDetailsModal[nid]">
                                    Details
                                </a>';
  $handler->display->display_options['fields']['field_details']['alter']['path'] = '#';
  $handler->display->display_options['fields']['field_details']['alter']['rel'] = 'data-toggle="modal" data-target="#teachersDetailsModal[nid]"';
  $handler->display->display_options['fields']['field_details']['alter']['link_class'] = 'button btn button-box pull-right btn-large btn-block';
  $handler->display->display_options['fields']['field_details']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_details']['element_class'] = 'col-md-5 btn-left';
  $handler->display->display_options['fields']['field_details']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_details']['element_default_classes'] = FALSE;
  /* Field: Buton url-video */
  $handler->display->display_options['fields']['field_resource_public_file']['id'] = 'field_resource_public_file';
  $handler->display->display_options['fields']['field_resource_public_file']['table'] = 'field_data_field_resource_public_file';
  $handler->display->display_options['fields']['field_resource_public_file']['field'] = 'field_resource_public_file';
  $handler->display->display_options['fields']['field_resource_public_file']['ui_name'] = 'Buton url-video';
  $handler->display->display_options['fields']['field_resource_public_file']['label'] = '';
  $handler->display->display_options['fields']['field_resource_public_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_public_file']['alter']['text'] = '<a href="#" class="button btn button-box pull-right btn-large btn-block" data-toggle="modal" data-target="#teachersLaunchModal[nid]">Play Clip</a> ';
  $handler->display->display_options['fields']['field_resource_public_file']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_resource_public_file']['element_class'] = 'col-md-7 btn-right';
  $handler->display->display_options['fields']['field_resource_public_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_public_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resource_public_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_public_file']['type'] = 'file_video';
  $handler->display->display_options['fields']['field_resource_public_file']['settings'] = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '640',
    'height' => '480',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  /* Field: Content: Resurse public url */
  $handler->display->display_options['fields']['field_resurse_public_url']['id'] = 'field_resurse_public_url';
  $handler->display->display_options['fields']['field_resurse_public_url']['table'] = 'field_data_field_resurse_public_url';
  $handler->display->display_options['fields']['field_resurse_public_url']['field'] = 'field_resurse_public_url';
  $handler->display->display_options['fields']['field_resurse_public_url']['label'] = '';
  $handler->display->display_options['fields']['field_resurse_public_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resurse_public_url']['alter']['text'] = '<a href="[field_resurse_public_url_1]" class="button btn button-box pull-right btn-large btn-block" target="_blank">Launch Course</a>    ';
  $handler->display->display_options['fields']['field_resurse_public_url']['alter']['link_class'] = 'button btn button-box pull-right btn-large btn-block';
  $handler->display->display_options['fields']['field_resurse_public_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_resurse_public_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_resurse_public_url']['element_class'] = 'col-md-7 btn-right';
  $handler->display->display_options['fields']['field_resurse_public_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resurse_public_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resurse_public_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_resurse_public_url']['group_column'] = '';
  /* Field: Content: How to use this lesson */
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['id'] = 'field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['table'] = 'field_data_field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['field'] = 'field_how_to_use_this_lesson';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['label'] = '';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['alter']['text'] = '<a href="#" class="button btn button-box-fullwidth btn-large btn-block"  data-toggle="modal" data-target="#teachersHowUseModal[nid]">How to use this lesson</a> ';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['element_class'] = 'col-md-12 btn-how-to-use';
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_to_use_this_lesson']['element_default_classes'] = FALSE;
  /* Field: Modal content Details */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Modal content Details';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="modal fade" id="teachersDetailsModal[nid]" tabindex="-1" role="dialog" >
    <div class="modal-dialog" role="document">
        <div class="modal-content">
            <div class="modal-header">
                <h4 class="modal-title">[title]</h4>
            </div>
            <div class="modal-body">
                 <div class="row">
                   [field_details_1]
                 </div>
            </div>
            <div class="modal-footer">
                <a href="" class="btn btn-default" data-dismiss="modal" id="closegame">Close</a>
            </div>
        </div>
    </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Modal content Launch Course */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Modal content Launch Course';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="modal fade" id="teachersLaunchModal[nid]" tabindex="-1" role="dialog" >
    <div class="modal-dialog" role="document">
        <div class="modal-content">
            <div class="modal-header">
                <h4 class="modal-title">[title]</h4>
            </div>
            <div class="modal-body">
[field_resource_public_file_1]
            </div>
            <div class="modal-footer">
                <a href="" class="btn btn-default" data-dismiss="modal">Close</a>
            </div>
        </div>
    </div>
</div>

';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Modal content How use */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Modal content How use';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="modal fade" id="teachersHowUseModal[nid]" tabindex="-1" role="dialog" >
    <div class="modal-dialog" role="document">
        <div class="modal-content">
            <div class="modal-header">
                <h4 class="modal-title">[title]</h4>
            </div>
            <div class="modal-body">
[field_how_to_use_this_lesson_1] 
            </div>
            <div class="modal-footer">
                <a href="" class="btn btn-default" data-dismiss="modal">Close</a>
            </div>
        </div>
    </div>
</div>

';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '                    <div class="col-md-12 teachers-btn">
                        <div class="col-md-5 ">
                               <a href="#" class="button btn button-box pull-right btn-large btn-block" data-toggle="modal" data-target="#teachersDetailsModal[nid]">
                                    Details
                                </a>
                         </div>
                        <div class="col-md-7 ">
                            <a href="#" class="button btn button-box pull-right btn-large btn-block" data-toggle="modal" data-target="#teachersLaunchModal[nid]">Launch Course</a>                        
                        </div>
                        <br><br>
                        <div class="col-md-12 ">
                            <a href="#" class="button btn button-box-fullwidth btn-large btn-block"  data-toggle="modal" data-target="#teachersHowUseModal[nid]">How to use this lesson</a>                           
                        </div>
                    </div>
';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
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
    'taxedu_teachers_corner' => 'taxedu_teachers_corner',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Target group (field_target_group) */
  $handler->display->display_options['filters']['field_target_group_value']['id'] = 'field_target_group_value';
  $handler->display->display_options['filters']['field_target_group_value']['table'] = 'field_data_field_target_group';
  $handler->display->display_options['filters']['field_target_group_value']['field'] = 'field_target_group_value';
  $handler->display->display_options['filters']['field_target_group_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_group_value']['expose']['operator_id'] = 'field_target_group_value_op';
  $handler->display->display_options['filters']['field_target_group_value']['expose']['operator'] = 'field_target_group_value_op';
  $handler->display->display_options['filters']['field_target_group_value']['expose']['identifier'] = 'field_target_group_value';
  $handler->display->display_options['filters']['field_target_group_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_target_group_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Resource type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator_id'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['operator'] = 'field_resource_type_value_op';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['identifier'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_resource_type_value']['reduce_duplicates'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'teachers-corner';
  $export['_taxedu_teachers_corner'] = $view;

  $view = new view();
  $view->name = '_taxedu_teenager_slider_what_are_tax_evasion_and_tax_fraud_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Teenager Slider What are tax evasion and tax fraud?';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '_TaxEdu Teenager Slider What are tax evasion and tax fraud?';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
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
    '_taxedu_what_are_tax_evasion_and' => '_taxedu_what_are_tax_evasion_and',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['_taxedu_teenager_slider_what_are_tax_evasion_and_tax_fraud_'] = $view;

  $view = new view();
  $view->name = '_taxedu_young_slider_the_role_of_the_eu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '_TaxEdu Young Slider The role of the EU';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '_TaxEdu Young Slider The role of the EU';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '                       <div class="container">
                            <div class="text-center"><h3>[title] </h3></div>
                            <div class="slidetext">                            
                               [body]
                            </div>
                        </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    '_taxedu_young_slider_the_role_of' => '_taxedu_young_slider_the_role_of',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['_taxedu_young_slider_the_role_of_the_eu'] = $view;

  return $export;
}
