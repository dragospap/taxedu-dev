<?php
/**
 * @file
 * taxedu_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function taxedu_features_default_rules_configuration() {
  $items = array();
  $items['rules_assign_user_role'] = entity_import('rules_config', '{ "rules_assign_user_role" : {
      "LABEL" : "Assign User Role",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [], "user_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:field-i-m-a-teacher" ], "value" : "1" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "account:roles" ], "value" : { "value" : { "7" : "7" } } } }
      ]
    }
  }');
  return $items;
}
