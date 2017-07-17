<?php
/**
 * @file
 * taxedu_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function taxedu_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_resource_view';
  $context->description = 'node resource view';
  $context->tag = 'Node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        '_taxedu_resources' => '_taxedu_resources',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-166' => array(
          'module' => 'webform',
          'delta' => 'client-block-166',
          'region' => 'help',
          'weight' => '-10',
        ),
        'views-_taxedu_forum_banner_add-block' => array(
          'module' => 'views',
          'delta' => '_taxedu_forum_banner_add-block',
          'region' => 'content',
          'weight' => '3',
        ),
        'views-_taxedu_resources_return-block' => array(
          'module' => 'views',
          'delta' => '_taxedu_resources_return-block',
          'region' => 'content',
          'weight' => '4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Node');
  t('node resource view');
  $export['node_resource_view'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'teachers_corner_views_log';
  $context->description = 'alter teachers corner views when user is loged';
  $context->tag = 'Views';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        '_taxedu_teachers_corner' => '_taxedu_teachers_corner',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-_taxedu_forum_banner_add-block' => array(
          'module' => 'views',
          'delta' => '_taxedu_forum_banner_add-block',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-2f7d0f0b92e3e715cd92642f1705ce5c' => array(
          'module' => 'views',
          'delta' => '2f7d0f0b92e3e715cd92642f1705ce5c',
          'region' => 'content',
          'weight' => '6',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Views');
  t('alter teachers corner views when user is loged');
  $export['teachers_corner_views_log'] = $context;

  return $export;
}
