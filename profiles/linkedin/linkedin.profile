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
$tasks['quora_default_content'] = array();
return $tasks;
}

function linkedin_default_content() {
//print_r(" I AM COMING HERE TO CREATE USERS");
//drupal_set_message(" I cam here too");
$users = array(
    'editor' => 'pranavaeer73@gmail.com',
    'manager' => 'pranav.mainkar896@gmail.com',
);
foreach ($users as $name => $email) {
  $fields = array(
    'name' => $name,
    'mail' => $email,
    'pass' => $name,
    'status' => 1,
    'roles' => array(
       DRUPAL_AUTHENTICATED_RID => 'authenticated user',
       3 => 'editor',
       4 => 'manager',
     ),
  );
  $account = user_save('', $fields);
}
}
