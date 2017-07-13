<?php
/**
 * @file
 * taxedu_features.features.workbench_email.inc
 */

/**
 * Implements hook_workbench_email_export().
 */
function taxedu_features_workbench_email_export() {
  $items = array(
    'draft:needs_review:editor' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'author' => 0,
      'automatic' => 0,
      'subject' => NULL,
      'message' => NULL,
      'role' => 'editor',
    ),
  );
  return $items;
}
