<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "linkin" to match
 *    your subtheme's name, 'e.g.,' if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "linkin". If you install this subtheme via Drush, this is automated.
 * 2. Uncomment the required function to use.
 */


/**
 * Preprocess variables for the html template.
 */
/* -- Delete this line if you want to use this function
function linkin_preprocess_html(&$variables) {
}
// */


/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
function linkin_process_html(&$variables) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
function linkin_preprocess_page(&$variables) {
}
function linkin_process_page(&$variables) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function linkin_preprocess_node(&$variables) {
}
function linkin_process_node(&$variables) {
}
// */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function linkin_preprocess_comment(&$variables) {
}
function linkin_process_comment(&$variables) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function linkin_preprocess_block(&$variables) {
}
function linkin_process_block(&$variables) {
}
// */
function linkedin_form_user_login_block_alter(&$form, &$form_state, $form_id) {
    $form['name']['#size'] = 20;
    $form['name']['#attributes']['placeholder']  = 'Email';
    $form['name']['#title_display']  = 'invisible';
    $form['pass']['#attributes']['placeholder'] = 'Password';
    $form['pass']['#title_display'] = 'invisible';
    $form['pass']['#size'] = 20;
    $form['actions']['submit']['#value'] = t('Sign In');
    $markup = l(t('Forgot password?'), 'user/password');
    $markup = '<div class="clearfix">' . $markup . '</div>';
    $form['links']['#markup'] = $markup;
    $form['links']['#weight'] = 100;
    }

/**
 * Implements hook_form_alter().
 */
function linkin_form_alter(&$form, &$form_state, $form_id) {
  switch ($form_id) {
    case 'user_register_form': // the value we stole from the rendered form
    $form['password'] = array(
     '#type' => 'password',
     '#title' => t('Password(6 or more characters)'),
     '#size' => 30,
     '#maxlength' => 32,
     '#required' => TRUE,
     '#weight' => 3,
    );
    $form['actions']['submit']['#value'] = t('Join now');
    $form['mail']['#size']  = 30;
    $form['cutomtext'] = array(
    '#type' => 'item',
    '#markup' => '<div id="textcustom" ><label id="customise">By clicking Join now, you agree to the LinkedIn <a href="#" id="policylink">User Agreement</a>,<a href="#" id="policylink"> Privacy Policy</a>, and <a href="#" id="policylink">Cookie Policy</a>.</label></div>',
    '#weight' => 3, // Adjust so that you can place it whereever
    );
    break;
  }
}
