<?php
/**
 * @file
 * taxedu_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function taxedu_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_acas:<front>.
  $menu_links['main-menu_acas:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Acasă',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_acas:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'ro',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_blogs:blog.
  $menu_links['main-menu_blogs:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blogs',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_blogs:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_forum:forum.
  $menu_links['main-menu_forum:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'forum',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_forum:forum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -40,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_hi-current-userfield-firstname:user.
  $menu_links['main-menu_hi-current-userfield-firstname:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Hi, [current-user:field-firstname]!',
    'options' => array(
      'menu_token_link_path' => 'user/logout',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5956343240f18',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'fa fa-user icon-red',
        'style' => '',
      ),
      'identifier' => 'main-menu_hi-current-userfield-firstname:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -35,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_kezdlap:<front>.
  $menu_links['main-menu_kezdlap:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Kezdőlap',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_kezdlap:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_lehrer-ecke:teachers-corner.
  $menu_links['main-menu_lehrer-ecke:teachers-corner'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'teachers-corner',
    'router_path' => 'teachers-corner',
    'link_title' => 'Lehrer-Ecke',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_lehrer-ecke:teachers-corner',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_log-in:user/login.
  $menu_links['main-menu_log-in:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'log in',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'fa fa-user  icon-red',
        'style' => '',
      ),
      'identifier' => 'main-menu_log-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -37,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_login:user/login.
  $menu_links['main-menu_login:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'login',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'fa fa-sign-in  icon-red',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_log-in:user/login',
  );
  // Exported menu link: main-menu_my-profile:menutoken/5959fd57c26f1.
  $menu_links['main-menu_my-profile:menutoken/5959fd57c26f1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menutoken/5959fd57c26f1',
    'router_path' => 'menutoken/%',
    'link_title' => 'My profile',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5959fd3c82faf',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'fa fa-user icon-red',
        'style' => '',
      ),
      'identifier' => 'main-menu_my-profile:menutoken/5959fd57c26f1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_hi-current-userfield-firstname:user/logout',
  );
  // Exported menu link: main-menu_newsletters:my_subscriptions.
  $menu_links['main-menu_newsletters:my_subscriptions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my_subscriptions',
    'router_path' => 'my_subscriptions',
    'link_title' => 'Newsletters',
    'options' => array(
      'identifier' => 'main-menu_newsletters:my_subscriptions',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_register:user/register.
  $menu_links['main-menu_register:user/register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Register',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'fa fa-asterisk  icon-red',
        'style' => '',
      ),
      'identifier' => 'main-menu_register:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_log-in:user/login',
  );
  // Exported menu link: main-menu_resources:resources.
  $menu_links['main-menu_resources:resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'resources',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_resources:resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_rubrica-profesorilor:teachers-corner.
  $menu_links['main-menu_rubrica-profesorilor:teachers-corner'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'teachers-corner',
    'router_path' => 'teachers-corner',
    'link_title' => 'Rubrica profesorilor',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_rubrica-profesorilor:teachers-corner',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'language' => 'ro',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_search:search/site.
  $menu_links['main-menu_search:search/site'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/site',
    'router_path' => 'search/site',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'main-menu_search:search/site',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_tanrsarok:teachers-corner.
  $menu_links['main-menu_tanrsarok:teachers-corner'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'teachers-corner',
    'router_path' => 'teachers-corner',
    'link_title' => 'Tanársarok',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_tanrsarok:teachers-corner',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_teachers-corner:teachers-corner.
  $menu_links['main-menu_teachers-corner:teachers-corner'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'teachers-corner',
    'router_path' => 'teachers-corner',
    'link_title' => 'teachers corner',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_teachers-corner:teachers-corner',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -41,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_wikis:wiki.
  $menu_links['main-menu_wikis:wiki'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wiki',
    'router_path' => 'wiki',
    'link_title' => 'Wikis',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_wikis:wiki',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-breadcrumb-menu_european-commission:http://ec.europa.eu/index_en.htm.
  $menu_links['menu-breadcrumb-menu_european-commission:http://ec.europa.eu/index_en.htm'] = array(
    'menu_name' => 'menu-breadcrumb-menu',
    'link_path' => 'http://ec.europa.eu/index_en.htm',
    'router_path' => '',
    'link_title' => 'European Commission',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-display-title' => 1,
        'data-remove-class' => 1,
      ),
      'identifier' => 'menu-breadcrumb-menu_european-commission:http://ec.europa.eu/index_en.htm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: menu-service-tools_aviz-juridic:http://ec.europa.eu/geninfo/legal_notices_en.htm.
  $menu_links['menu-service-tools_aviz-juridic:http://ec.europa.eu/geninfo/legal_notices_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/geninfo/legal_notices_en.htm',
    'router_path' => '',
    'link_title' => 'Aviz juridic',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_aviz-juridic:http://ec.europa.eu/geninfo/legal_notices_en.htm',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'ro',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_cautare-in-europa:http://ec.europa.eu/geninfo/query/search_en.html.
  $menu_links['menu-service-tools_cautare-in-europa:http://ec.europa.eu/geninfo/query/search_en.html'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/geninfo/query/search_en.html',
    'router_path' => '',
    'link_title' => 'Cautare in Europa',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_cautare-in-europa:http://ec.europa.eu/geninfo/query/search_en.html',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'ro',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_contact-in-europa:http://ec.europa.eu/contact/index_en.htm.
  $menu_links['menu-service-tools_contact-in-europa:http://ec.europa.eu/contact/index_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/contact/index_en.htm',
    'router_path' => '',
    'link_title' => 'Contact in Europa',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_contact-in-europa:http://ec.europa.eu/contact/index_en.htm',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'ro',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_contact-on-europa:http://ec.europa.eu/contact/index_en.htm.
  $menu_links['menu-service-tools_contact-on-europa:http://ec.europa.eu/contact/index_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/contact/index_en.htm',
    'router_path' => '',
    'link_title' => 'Contact on Europa',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_contact-on-europa:http://ec.europa.eu/contact/index_en.htm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_cookie-urile-:http://ec.europa.eu/cookies/index_en.htm.
  $menu_links['menu-service-tools_cookie-urile-:http://ec.europa.eu/cookies/index_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/cookies/index_en.htm',
    'router_path' => '',
    'link_title' => 'Cookie-urile ',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_cookie-urile-:http://ec.europa.eu/cookies/index_en.htm',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'ro',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_cookies:http://ec.europa.eu/cookies/index_en.htm.
  $menu_links['menu-service-tools_cookies:http://ec.europa.eu/cookies/index_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/cookies/index_en.htm',
    'router_path' => '',
    'link_title' => 'Cookies',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_cookies:http://ec.europa.eu/cookies/index_en.htm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_jogi-nyilatkozat:http://ec.europa.eu/geninfo/legal_notices_en.htm.
  $menu_links['menu-service-tools_jogi-nyilatkozat:http://ec.europa.eu/geninfo/legal_notices_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/geninfo/legal_notices_en.htm',
    'router_path' => '',
    'link_title' => 'Jogi nyilatkozat',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_jogi-nyilatkozat:http://ec.europa.eu/geninfo/legal_notices_en.htm',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_kapcsolat-az-europa:http://ec.europa.eu/contact/index_en.htm.
  $menu_links['menu-service-tools_kapcsolat-az-europa:http://ec.europa.eu/contact/index_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/contact/index_en.htm',
    'router_path' => '',
    'link_title' => 'Kapcsolat az Europa',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_kapcsolat-az-europa:http://ec.europa.eu/contact/index_en.htm',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_keress-az-europa:http://ec.europa.eu/geninfo/query/search_en.html.
  $menu_links['menu-service-tools_keress-az-europa:http://ec.europa.eu/geninfo/query/search_en.html'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/geninfo/query/search_en.html',
    'router_path' => '',
    'link_title' => 'Keresés az Europa',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_keress-az-europa:http://ec.europa.eu/geninfo/query/search_en.html',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_kontakt-auf-europa:http://ec.europa.eu/contact/index_en.htm.
  $menu_links['menu-service-tools_kontakt-auf-europa:http://ec.europa.eu/contact/index_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/contact/index_en.htm',
    'router_path' => '',
    'link_title' => 'Kontakt auf Europa',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_kontakt-auf-europa:http://ec.europa.eu/contact/index_en.htm',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_legal-notice:http://ec.europa.eu/geninfo/legal_notices_en.htm.
  $menu_links['menu-service-tools_legal-notice:http://ec.europa.eu/geninfo/legal_notices_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/geninfo/legal_notices_en.htm',
    'router_path' => '',
    'link_title' => 'Legal notice',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_legal-notice:http://ec.europa.eu/geninfo/legal_notices_en.htm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_rechtlicher-hinweis:http://ec.europa.eu/geninfo/legal_notices_en.htm.
  $menu_links['menu-service-tools_rechtlicher-hinweis:http://ec.europa.eu/geninfo/legal_notices_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/geninfo/legal_notices_en.htm',
    'router_path' => '',
    'link_title' => 'Rechtlicher Hinweis',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_rechtlicher-hinweis:http://ec.europa.eu/geninfo/legal_notices_en.htm',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_search-on-europa:http://ec.europa.eu/geninfo/query/search_en.html.
  $menu_links['menu-service-tools_search-on-europa:http://ec.europa.eu/geninfo/query/search_en.html'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/geninfo/query/search_en.html',
    'router_path' => '',
    'link_title' => 'Search on Europa',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_search-on-europa:http://ec.europa.eu/geninfo/query/search_en.html',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_stik:http://ec.europa.eu/cookies/index_en.htm.
  $menu_links['menu-service-tools_stik:http://ec.europa.eu/cookies/index_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/cookies/index_en.htm',
    'router_path' => '',
    'link_title' => 'Sütik',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_stik:http://ec.europa.eu/cookies/index_en.htm',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_suche-nach-europa:http://ec.europa.eu/geninfo/query/search_en.html.
  $menu_links['menu-service-tools_suche-nach-europa:http://ec.europa.eu/geninfo/query/search_en.html'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/geninfo/query/search_en.html',
    'router_path' => '',
    'link_title' => 'Suche nach Europa',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_suche-nach-europa:http://ec.europa.eu/geninfo/query/search_en.html',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_compose-tips:filter/tips.
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_contact:contact.
  $menu_links['navigation_contact:contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'navigation_contact:contact',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_forums:forum.
  $menu_links['navigation_forums:forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(
      'identifier' => 'navigation_forums:forum',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_log-in:user/login.
  $menu_links['navigation_log-in:user/login'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'log in',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'fa fa-sign-in  icon-red',
        'style' => '',
      ),
      'identifier' => 'navigation_log-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_search:search.
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_tags:tagclouds.
  $menu_links['navigation_tags:tagclouds'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'tagclouds',
    'router_path' => 'tagclouds',
    'link_title' => 'Tags',
    'options' => array(
      'identifier' => 'navigation_tags:tagclouds',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: user-menu_:translate/%/item/%.
  $menu_links['user-menu_:translate/%/item/%'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'translate/%/item/%',
    'router_path' => 'translate/%/item/%',
    'link_title' => '',
    'options' => array(
      'identifier' => 'user-menu_:translate/%/item/%',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'user-menu_:translate/%',
  );
  // Exported menu link: user-menu_create-an-ecas-account:account_request.
  $menu_links['user-menu_create-an-ecas-account:account_request'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'account_request',
    'router_path' => 'account_request',
    'link_title' => 'Create an ECAS account',
    'options' => array(
      'identifier' => 'user-menu_create-an-ecas-account:account_request',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: user-menu_ecas-login:ecas.
  $menu_links['user-menu_ecas-login:ecas'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'ecas',
    'router_path' => 'ecas',
    'link_title' => 'ECAS Login',
    'options' => array(
      'identifier' => 'user-menu_ecas-login:ecas',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'attributes' => array(
        'title' => 'My account',
        'class' => array(
          0 => 'btn',
          1 => 'btn-default',
        ),
        'data-image' => 'user',
        'data-display-title' => 0,
        'data-toggle' => 'tooltip',
        'data-placement' => 'bottom',
        'data-container' => 'body',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Acasă');
  t('Aviz juridic');
  t('Blogs');
  t('Cautare in Europa');
  t('Compose tips');
  t('Contact');
  t('Contact in Europa');
  t('Contact on Europa');
  t('Cookie-urile ');
  t('Cookies');
  t('Create an ECAS account');
  t('ECAS Login');
  t('European Commission');
  t('Forums');
  t('Hi, [current-user:field-firstname]!');
  t('Home');
  t('Jogi nyilatkozat');
  t('Kapcsolat az Europa');
  t('Keresés az Europa');
  t('Kezdőlap');
  t('Kontakt auf Europa');
  t('Legal notice');
  t('Lehrer-Ecke');
  t('My profile');
  t('Newsletters');
  t('Rechtlicher Hinweis');
  t('Register');
  t('Rubrica profesorilor');
  t('Search');
  t('Search on Europa');
  t('Suche nach Europa');
  t('Sütik');
  t('Tags');
  t('Tanársarok');
  t('User account');
  t('Wikis');
  t('forum');
  t('log in');
  t('login');
  t('resources');
  t('teachers corner');

  return $menu_links;
}
