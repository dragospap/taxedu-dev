<?php
/**
 * @file
 * taxedu_features.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function taxedu_features_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|_taxedu_resources|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = '_taxedu_resources';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => 'resource-title',
      ),
    ),
  );
  $export['node|_taxedu_resources|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function taxedu_features_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|_taxedu_blocks|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = '_taxedu_blocks';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'body' => 'middle',
    ),
    'classes' => array(),
    'wrappers' => array(
      'middle' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
  );
  $export['node|_taxedu_blocks|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|_taxedu_resources|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = '_taxedu_resources';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_resource_image',
        1 => 'title',
        2 => 'field_details',
        3 => 'field_how_to_use_this_lesson',
        4 => 'field_resource_my_file',
        5 => 'field_report_',
        6 => 'group_resources_group',
        7 => 'group_report_download',
      ),
    ),
    'fields' => array(
      'field_resource_image' => 'ds_content',
      'title' => 'ds_content',
      'field_details' => 'ds_content',
      'field_how_to_use_this_lesson' => 'ds_content',
      'field_resource_my_file' => 'ds_content',
      'field_report_' => 'ds_content',
      'group_resources_group' => 'ds_content',
      'group_report_download' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|_taxedu_resources|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function taxedu_features_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'viewmodeeee1';
  $ds_view_mode->label = 'viewmodeeee1';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['viewmodeeee1'] = $ds_view_mode;

  return $export;
}
