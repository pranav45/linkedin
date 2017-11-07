<?php
/**
 * @file
 * linkedin_user.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function linkedin_user_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-browse-linkedin_influencers--:<front>.
  $menu_links['menu-browse-linkedin_influencers--:<front>'] = array(
    'menu_name' => 'menu-browse-linkedin',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Influencers |	',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-browse-linkedin_influencers--:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-linkedin_job-:<front>.
  $menu_links['menu-browse-linkedin_job-:<front>'] = array(
    'menu_name' => 'menu-browse-linkedin',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Job |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-browse-linkedin_job-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-linkedin_learning-:<front>.
  $menu_links['menu-browse-linkedin_learning-:<front>'] = array(
    'menu_name' => 'menu-browse-linkedin',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Learning |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-browse-linkedin_learning-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-linkedin_mobile-:<front>.
  $menu_links['menu-browse-linkedin_mobile-:<front>'] = array(
    'menu_name' => 'menu-browse-linkedin',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Mobile |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-browse-linkedin_mobile-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-linkedin_profinder-:<front>.
  $menu_links['menu-browse-linkedin_profinder-:<front>'] = array(
    'menu_name' => 'menu-browse-linkedin',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ProFinder |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-browse-linkedin_profinder-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-business-solutions_learning:<front>.
  $menu_links['menu-business-solutions_learning:<front>'] = array(
    'menu_name' => 'menu-business-solutions',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Learning',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-business-solutions_learning:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-business-solutions_marketing-:<front>.
  $menu_links['menu-business-solutions_marketing-:<front>'] = array(
    'menu_name' => 'menu-business-solutions',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Marketing |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-business-solutions_marketing-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-business-solutions_sales-:<front>.
  $menu_links['menu-business-solutions_sales-:<front>'] = array(
    'menu_name' => 'menu-business-solutions',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sales |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-business-solutions_sales-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-business-solutions_talent-:<front>.
  $menu_links['menu-business-solutions_talent-:<front>'] = array(
    'menu_name' => 'menu-business-solutions',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Talent |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-business-solutions_talent-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-directories_companies-:<front>.
  $menu_links['menu-directories_companies-:<front>'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Companies |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-directories_companies-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-directories_jobs-:<front>.
  $menu_links['menu-directories_jobs-:<front>'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Jobs |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-directories_jobs-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-directories_members-:<front>.
  $menu_links['menu-directories_members-:<front>'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Members |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-directories_members-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-directories_people-:<front>.
  $menu_links['menu-directories_people-:<front>'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'People |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-directories_people-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-directories_pulse-:<front>.
  $menu_links['menu-directories_pulse-:<front>'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Pulse |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-directories_pulse-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-directories_salaries-:<front>.
  $menu_links['menu-directories_salaries-:<front>'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Salaries |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-directories_salaries-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-directories_titles-:<front>.
  $menu_links['menu-directories_titles-:<front>'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Titles |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-directories_titles-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-directories_top-jobs:<front>.
  $menu_links['menu-directories_top-jobs:<front>'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Top jobs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-directories_top-jobs:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-directories_topics-:<front>.
  $menu_links['menu-directories_topics-:<front>'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Topics |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-directories_topics-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-directories_universities-:<front>.
  $menu_links['menu-directories_universities-:<front>'] = array(
    'menu_name' => 'menu-directories',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Universities |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-directories_universities-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_-2017:<front>.
  $menu_links['menu-footer-menu_-2017:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => '© 2017',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-456',
        ),
      ),
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_456.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_-2017:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_community-guidelines:<front>.
  $menu_links['menu-footer-menu_community-guidelines:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Community Guidelines',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_community-guidelines:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_cookie-policy:<front>.
  $menu_links['menu-footer-menu_cookie-policy:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Cookie Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_cookie-policy:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_copyright-policy:<front>.
  $menu_links['menu-footer-menu_copyright-policy:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Copyright Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_copyright-policy:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_guest-controls:<front>.
  $menu_links['menu-footer-menu_guest-controls:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Guest Controls',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_guest-controls:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_language:<front>.
  $menu_links['menu-footer-menu_language:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Language',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_language:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_privacy-policy:<front>.
  $menu_links['menu-footer-menu_privacy-policy:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_privacy-policy:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_user-agreement:<front>.
  $menu_links['menu-footer-menu_user-agreement:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'User Agreement',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-footer-menu_user-agreement:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-general-_about-:<front>.
  $menu_links['menu-general-_about-:<front>'] = array(
    'menu_name' => 'menu-general-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-general-_about-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-general-_blog-:<front>.
  $menu_links['menu-general-_blog-:<front>'] = array(
    'menu_name' => 'menu-general-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Blog |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-general-_blog-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-general-_careers-:<front>.
  $menu_links['menu-general-_careers-:<front>'] = array(
    'menu_name' => 'menu-general-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Careers |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-general-_careers-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-general-_developers:<front>.
  $menu_links['menu-general-_developers:<front>'] = array(
    'menu_name' => 'menu-general-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Developers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-general-_developers:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-general-_help-center-:<front>.
  $menu_links['menu-general-_help-center-:<front>'] = array(
    'menu_name' => 'menu-general-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Help center |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-general-_help-center-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-general-_press-:<front>.
  $menu_links['menu-general-_press-:<front>'] = array(
    'menu_name' => 'menu-general-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Press |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-general-_press-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-general-_sign-up-:<front>.
  $menu_links['menu-general-_sign-up-:<front>'] = array(
    'menu_name' => 'menu-general-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sign Up |',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'profiles/linkedin/modules/contributed/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-general-_sign-up-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About |');
  t('Blog |');
  t('Careers |');
  t('Community Guidelines');
  t('Companies |');
  t('Cookie Policy');
  t('Copyright Policy');
  t('Developers');
  t('Guest Controls');
  t('Help center |');
  t('Influencers |	');
  t('Job |');
  t('Jobs |');
  t('Language');
  t('Learning');
  t('Learning |');
  t('Marketing |');
  t('Members |');
  t('Mobile |');
  t('People |');
  t('Press |');
  t('Privacy Policy');
  t('ProFinder |');
  t('Pulse |');
  t('Salaries |');
  t('Sales |');
  t('Sign Up |');
  t('Talent |');
  t('Titles |');
  t('Top jobs');
  t('Topics |');
  t('Universities |');
  t('User Agreement');
  t('© 2017');

  return $menu_links;
}
