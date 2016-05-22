<?php

$databases = array (
  'default' => 
  array (
    'default' => 
    array (
      'database' => 'salive_dev',
      'username' => 'salive_dev',
      'password' => 'Warbird*5387',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);

// Add Varnish as the page cache handler.
$conf['cache_backends'][] = 'sites/all/modules/contrib/varnish/varnish.cache.inc';
$conf['cache_class_cache_page'] = 'VarnishCache';
// Drupal 7 does not cache pages when we invoke hooks during bootstrap.
// This needs to be disabled.
$conf['page_cache_without_database'] = TRUE;
$conf['page_cache_invoke_hooks'] = FALSE;
$conf['cache_class_external_varnish_page'] = 'VarnishCache';
$conf['reverse_proxy'] = True;
$conf['cache'] = 1;
$conf['reverse_proxy_header'] = 'HTTP_X_FORWARDED_FOR';
$conf['reverse_proxy_addresses'] = array('127.0.0.1');
$conf['omit_vary_cookie'] = True;

$conf['cache_backends'][] = 'sites/all/modules/contrib/apc/drupal_apc_cache.inc';
$conf['cache_class_cache'] = 'DrupalAPCCache';
$conf['cache_class_cache_bootstrap'] = 'DrupalAPCCache';
//$conf['apc_show_debug'] = TRUE;  // Remove the slashes to use debug mode.

$conf['cache_backends'][] = 'sites/all/modules/contrib/memcache/memcache.inc';
$conf['lock_inc'] = 'sites/all/modules/contrib/memcache/memcache-lock.inc';
$conf['memcache_stampede_protection'] = TRUE;
$conf['cache_default_class'] = 'MemCacheDrupal';
// The 'cache_form' bin must be assigned to non-volatile storage.
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
// Don't bootstrap the database when serving pages from the cache.
$conf['page_cache_without_database'] = TRUE;
$conf['memcache_servers'] = array('localhost:11211' => 'default');
$conf['memcache_key_prefix'] = 'dev.sanangelolive.com';

// Cookie
$cookie_domain = 'dev.sanangelolive.com';

// Base URL
$base_url = (isset($_SERVER["HTTPS"]) ? 'https://secure.' : 'http://') . 'dev.sanangelolive.com';

// Secure Pages
$conf['https'] = FALSE;
if (isset($_SERVER['HTTP_X_FORWARDED_PROTO']) && $_SERVER['HTTP_X_FORWARDED_PROTO'] == 'https') {
  $_SERVER['HTTPS']='on';
}
// Secure Pages Disable
$conf['securepages_enable'] = FALSE;

// Advagg
$conf['advagg_skip_404_check'] = TRUE;
