<?php
/**
 * @file
 * linkedin_user.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function linkedin_user_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'registeration';
  $page->task = 'page';
  $page->admin_title = 'Registeration';
  $page->admin_description = '';
  $page->path = 'linkedin-register';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_registeration__panel_context_71a81bec-86a6-48df-ab0a-0fdbad32b413';
  $handler->task = 'page';
  $handler->subtask = 'registeration';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '48.86838991958189',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '51.13161008041811',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sign_up',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sign_up' => array(
        'type' => 'region',
        'title' => 'sign up',
        'width' => '487',
        'width_type' => 'px',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sign_up' => NULL,
    ),
    'sign_up' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '57f0973c-8250-4f75-a4ba-48c5d1b4a58e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_registeration__panel_context_71a81bec-86a6-48df-ab0a-0fdbad32b413';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6d96038f-b13a-47de-9e32-233a0a327007';
  $pane->panel = 'sign_up';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'markup' => 'none',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => 'Be great at what you do ',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'registrationLi',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6d96038f-b13a-47de-9e32-233a0a327007';
  $display->content['new-6d96038f-b13a-47de-9e32-233a0a327007'] = $pane;
  $display->panels['sign_up'][0] = 'new-6d96038f-b13a-47de-9e32-233a0a327007';
  $pane = new stdClass();
  $pane->pid = 'new-95e5283f-e0b6-4090-8981-15c4169b2c8f';
  $pane->panel = 'sign_up';
  $pane->type = 'block';
  $pane->subtype = 'formblock-user_register';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Get started - it\'s free.',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '95e5283f-e0b6-4090-8981-15c4169b2c8f';
  $display->content['new-95e5283f-e0b6-4090-8981-15c4169b2c8f'] = $pane;
  $display->panels['sign_up'][1] = 'new-95e5283f-e0b6-4090-8981-15c4169b2c8f';
  $pane = new stdClass();
  $pane->pid = 'new-f4f47c9d-b5e2-48bd-8f8b-5753e8e82fba';
  $pane->panel = 'sign_up';
  $pane->type = 'block';
  $pane->subtype = 'node-recent';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f4f47c9d-b5e2-48bd-8f8b-5753e8e82fba';
  $display->content['new-f4f47c9d-b5e2-48bd-8f8b-5753e8e82fba'] = $pane;
  $display->panels['sign_up'][2] = 'new-f4f47c9d-b5e2-48bd-8f8b-5753e8e82fba';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['registeration'] = $page;

  return $pages;

}
