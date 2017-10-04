<?php
/**
 * @file
 * linkedin_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function linkedin_user_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 4,
  );

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 3,
  );

  return $roles;
}
