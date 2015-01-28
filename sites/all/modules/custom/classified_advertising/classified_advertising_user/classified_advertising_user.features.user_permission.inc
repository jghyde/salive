<?php
/**
 * @file
 * classified_advertising_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function classified_advertising_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view post access counter'.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'statistics',
  );

  return $permissions;
}
