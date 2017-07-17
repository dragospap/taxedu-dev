<?php
/**
 * @file
 * taxedu_features.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function taxedu_features_workbench_moderation_export_transitions() {
  $items = array(
    'published:draft' => array(
      'from_name' => 'published',
      'to_name' => 'draft',
      'name' => '',
    ),
    'published:expired' => array(
      'from_name' => 'published',
      'to_name' => 'expired',
      'name' => '',
    ),
  );
  return $items;
}
