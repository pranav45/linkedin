<?php

@ini_set('max_execution_time',       240);
@ini_set('session.cache_expire',     200000);
@ini_set('session.cookie_lifetime',  0);

global $conf;

// Hard set the files directory
$conf['file_public_path'] = 'sites/default/files';
$conf['file_private_path'] = 'sites/default/files/private';

// Minimum cache lifetime - always none.
$conf['cache_lifetime'] = 0;

// Expiration of cached pages - 15 minutes.
$conf['page_cache_maximum_age'] = 900;

// Cached page compression - always off.
$conf['page_compression'] = 0;


/** -----------------------------------------------
 * All Pantheon Environemnts.
 */
if (defined('PANTHEON_ENVIRONMENT') && !defined('MAINTENANCE_MODE')) {
  $settings = json_decode($_SERVER['PRESSFLOW_SETTINGS'], TRUE);
}

/** -----------------------------------------------
 * Settings for production environment
 */
if (defined('PANTHEON_ENVIRONMENT') && PANTHEON_ENVIRONMENT === 'live') {

  // Anonymous caching - enabled.
  $conf['cache'] = 1;

  // Block caching - enabled.
  $conf['block_cache'] = 0;

  // Enable css and js aggregation.
  $conf['preprocess_css'] = 1;
  $conf['preprocess_js'] = 1;

  // Disable error reporting.
  $conf['error_level'] = 1;
}

/** -----------------------------------------------
 * Default Settings for all non-production environments
 */
if (!defined('PANTHEON_ENVIRONMENT') || (defined('PANTHEON_ENVIRONMENT') && PANTHEON_ENVIRONMENT !== 'live')) {
  // Enable PHP error reporting.
  error_reporting(E_ALL & ~E_NOTICE);
  ini_set('display_errors', TRUE);
  ini_set('display_startup_errors', TRUE);

  // Enable full error reporting.
  $conf['error_level'] = 2;
}


/** -----------------------------------------------
 * Settings for stage and test environments
 */
if (defined('PANTHEON_ENVIRONMENT') && PANTHEON_ENVIRONMENT === 'test') {
  // Enable css and js aggregation.
  $conf['preprocess_css'] = 1;
  $conf['preprocess_js'] = 1;
  // Disable error reporting.
  $conf['error_level'] = 0;
}


/** -----------------------------------------------
 * Settings for development environment
 */
if (defined('PANTHEON_ENVIRONMENT') && PANTHEON_ENVIRONMENT === 'dev') {
  // Disable css and js aggregation.
  $conf['preprocess_css'] = 0;
  $conf['preprocess_js'] = 0;

  // Disable caching
  $conf['cache'] = 0;
}

/** -----------------------------------------------
 * Add local settings from settings.local.php
 */
if (!defined('PANTHEON_ENVIRONMENT')) {

  // Use /tmp for temporary files.
  $conf['file_temporary_path'] = '/tmp';

  # Load in additional site configuration settings.
  $local_settings = dirname(__FILE__) . '/settings.local.php';
  if (file_exists($local_settings)) {
    include $local_settings;
  }
}
