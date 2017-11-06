<?php
/**
 * @file
 * linkedin_user.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function linkedin_user_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-browse-linkedin.
  $menus['menu-browse-linkedin'] = array(
    'menu_name' => 'menu-browse-linkedin',
    'title' => 'Browse Linkedin',
    'description' => '',
  );
  // Exported menu: menu-business-solutions.
  $menus['menu-business-solutions'] = array(
    'menu_name' => 'menu-business-solutions',
    'title' => 'Business Solutions',
    'description' => 'List of links related to the Business',
  );
  // Exported menu: menu-directories.
  $menus['menu-directories'] = array(
    'menu_name' => 'menu-directories',
    'title' => 'Directories',
    'description' => '',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer-menu',
    'description' => '',
  );
  // Exported menu: menu-general-.
  $menus['menu-general-'] = array(
    'menu_name' => 'menu-general-',
    'title' => 'General ',
    'description' => 'List Of links related to menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse Linkedin');
  t('Business Solutions');
  t('Directories');
  t('Footer-menu');
  t('General');
  t('List Of links related to menu');
  t('List of links related to the Business');

  return $menus;
}
