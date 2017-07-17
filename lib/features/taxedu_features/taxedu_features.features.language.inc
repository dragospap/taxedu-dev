<?php
/**
 * @file
 * taxedu_features.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function taxedu_features_locale_default_languages() {
  $languages = array();

  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'Deutsch',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'de',
    'weight' => 0,
  );
  // Exported language: hu.
  $languages['hu'] = array(
    'language' => 'hu',
    'name' => 'Hungarian',
    'native' => 'Magyar',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'hu',
    'weight' => 0,
  );
  // Exported language: ro.
  $languages['ro'] = array(
    'language' => 'ro',
    'name' => 'Romanian',
    'native' => 'Română',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'ro',
    'weight' => 0,
  );
  return $languages;
}
