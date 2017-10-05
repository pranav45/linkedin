<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function linkedin_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

function linkedin_install_tasks(&$install_state) {
  $tasks = array();
  $tasks['linkedin_default_users'] = array();
  return $tasks;
}

function linkedin_default_users() {
    $u_roles = user_roles();
    $admin_user = variable_get('user_admin_role');
    unset($u_roles[$admin_user]);
    unset($u_roles[DRUPAL_ANONYMOUS_RID]);
    unset($u_roles[DRUPAL_AUTHENTICATED_RID]);
    foreach($u_roles as $key => $value) {
      $mail = 'test-' . strtolower($value) . '@osseed.com';
      $new_user = array(
        'name' => $value,
        'mail' => $mail,
        'pass' => strtolower($value),
        'status' => 1,
        'init' => $mail,
        'roles' =>array(
          $key => $value,
        ),
      );
      user_save('',$new_user);
    }
}
