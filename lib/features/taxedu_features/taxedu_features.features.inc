<?php
/**
 * @file
 * taxedu_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function taxedu_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function taxedu_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function taxedu_features_image_default_styles() {
  $styles = array();

  // Exported image style: _taxedu_teachers-corner.
  $styles['_taxedu_teachers-corner'] = array(
    'label' => '_TaxEdu Teachers-corner',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 375,
          'height' => 188,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: _taxedu_view_what_is_tax.
  $styles['_taxedu_view_what_is_tax'] = array(
    'label' => '_TaxEdu View what is tax',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 138,
          'height' => 138,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: taxedu_resource_page.
  $styles['taxedu_resource_page'] = array(
    'label' => 'TaxEdu Resource Page',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function taxedu_features_node_info() {
  $items = array(
    '_taxedu_blocks' => array(
      'name' => t('_TaxEdu Blocks'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    '_taxedu_country_data' => array(
      'name' => t('_TaxEdu Country Data'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    '_taxedu_resources' => array(
      'name' => t('_TaxEdu Resources'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    '_taxedu_social_links' => array(
      'name' => t('_TaxEdu Social Links'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    '_taxedu_surprising_facts' => array(
      'name' => t('_TaxEdu Surprising facts'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    '_taxedu_what_are_tax_evasion_and' => array(
      'name' => t('_TaxEdu Teenager Slider What are tax evasion and tax fraud?'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    '_taxedu_young_slider_the_role_of' => array(
      'name' => t('_TaxEdu Young Slider The role of the EU'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'taxedu_teachers_corner' => array(
      'name' => t('TaxEdu Teachers Corner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'web_page' => array(
      'name' => t('Web page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
