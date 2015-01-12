<?php
/**
 * @file
 * liveprofile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function liveprofile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Not Active' => 'Not Active',
      'Reporter' => 'Reporter',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'megauser' => 'megauser',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'megauser' => 'megauser',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'megauser' => 'megauser',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
      'megauser' => 'megauser',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Reporter' => 'Reporter',
      'administrator' => 'administrator',
      'megauser' => 'megauser',
    ),
    'module' => 'user',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
      'megauser' => 'megauser',
    ),
    'module' => 'user',
  );

  return $permissions;
}
