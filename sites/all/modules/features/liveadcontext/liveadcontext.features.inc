<?php
/**
 * @file
 * liveadcontext.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function liveadcontext_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "dfp" && $api == "default_dfp_tags") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
