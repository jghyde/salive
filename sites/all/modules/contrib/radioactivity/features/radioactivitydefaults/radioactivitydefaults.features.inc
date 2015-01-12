<?php
/**
 * @file
 * radioactivitydefaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radioactivitydefaults_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "radioactivity" && $api == "radioactivity_decay_profile") {
    return array("version" => "1");
  }
}
