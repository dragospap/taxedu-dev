<?php
/**
 * @file
 * taxedu_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function taxedu_features_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|page|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => 0,
    'children' => array(
      0 => 'title_field',
      1 => 'title',
      2 => 'field_ne_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-content field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $field_groups['group_page_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_metadata|node|page|form';
  $field_group->group_name = 'group_page_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => 10,
    'children' => array(
      0 => 'field_tags',
      1 => 'language',
      2 => 'og_group_ref',
      3 => 'group_content_access',
      4 => 'scheduler_settings',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-metadata field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $field_groups['group_page_metadata|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_report_download|node|_taxedu_resources|default';
  $field_group->group_name = 'group_report_download';
  $field_group->entity_type = 'node';
  $field_group->bundle = '_taxedu_resources';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_resources_group';
  $field_group->data = array(
    'label' => 'report and download',
    'weight' => '27',
    'children' => array(
      0 => 'field_resource_my_file',
      1 => 'field_report_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'report and download',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-report-download field-group-htab',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_report_download|node|_taxedu_resources|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resources_group|node|_taxedu_resources|default';
  $field_group->group_name = 'group_resources_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = '_taxedu_resources';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources group',
    'weight' => '26',
    'children' => array(
      0 => 'field_details',
      1 => 'field_how_to_use_this_lesson',
      2 => 'title',
      3 => 'group_report_download',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resources group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-resources-group field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_resources_group|node|_taxedu_resources|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Metadata');
  t('Resources group');
  t('report and download');

  return $field_groups;
}
