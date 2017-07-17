<?php
/**
 * @file
 * taxedu_features.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function taxedu_features_workbench_moderation_export_states() {
  $items = array(
    'draft' => array(
      'name' => 'draft',
      'label' => 'Draft',
      'description' => 'Work in progress',
      'weight' => -10,
    ),
    'expired' => array(
      'name' => 'expired',
      'label' => 'Expired',
      'description' => 'Not visible to site visitors',
      'weight' => -10,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Make this version live',
      'weight' => -10,
    ),
  );
  return $items;
}
