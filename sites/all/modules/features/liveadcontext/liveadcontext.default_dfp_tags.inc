<?php
/**
 * @file
 * liveadcontext.default_dfp_tags.inc
 */

/**
 * Implements hook_default_dfp_tag().
 */
function liveadcontext_default_dfp_tag() {
  $export = array();

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = '300x600_rail';
  $tag->slot = '300x600 Rail';
  $tag->adunit = '300x600Rail';
  $tag->size = '300x600';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x600',
      ),
    ),
  );
  $export['300x600_rail'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_all';
  $tag->slot = 'article_bottom_all';
  $tag->adunit = 'article_bottom_all';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_all'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_business';
  $tag->slot = 'article_bottom_business';
  $tag->adunit = 'article_bottom_business';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_business'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_county';
  $tag->slot = 'article_bottom_county';
  $tag->adunit = 'article_bottom_county';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_county'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_crashes';
  $tag->slot = 'article_bottom_crashes';
  $tag->adunit = 'article_bottom_crashes';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_crashes'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_crime';
  $tag->slot = 'article_bottom_crime';
  $tag->adunit = 'article_bottom_crime';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_crime'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_education';
  $tag->slot = 'article_bottom_education';
  $tag->adunit = 'article_bottom_education';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_education'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_event';
  $tag->slot = 'article_bottom_event';
  $tag->adunit = 'article_bottom_event';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_event'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_health';
  $tag->slot = 'article_bottom_health';
  $tag->adunit = 'article_bottom_health';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_health'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_international';
  $tag->slot = 'article_bottom_international';
  $tag->adunit = 'article_bottom_international';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_international'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_livethought';
  $tag->slot = 'article_bottom_livethought';
  $tag->adunit = 'article_bottom_livethought';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_livethought'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_national';
  $tag->slot = 'article_bottom_national';
  $tag->adunit = 'article_bottom_national';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_national'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_politics';
  $tag->slot = 'article_bottom_politics';
  $tag->adunit = 'article_bottom_politics';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_politics'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_rodeo';
  $tag->slot = 'article_bottom_rodeo';
  $tag->adunit = 'article_bottom_rodeo';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_rodeo'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_sanangelo';
  $tag->slot = 'article_bottom_sanangelo';
  $tag->adunit = 'article_bottom_sanangelo';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_sanangelo'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_sports';
  $tag->slot = 'article_bottom_sports';
  $tag->adunit = 'article_bottom_sports';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_sports'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'article_bottom_texas';
  $tag->slot = 'article_bottom_texas';
  $tag->adunit = 'article_bottom_texas';
  $tag->size = '930x180,580x112,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x100',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '992x100',
        'ad_sizes' => '580x112',
      ),
      2 => array(
        'browser_size' => '674x100',
        'ad_sizes' => '300x250',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['article_bottom_texas'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'clone_of_clone_of_clone_of_clone_of_clone_of_clone_of_clone_of_salive_blw_hot_rants';
  $tag->slot = 'SALive_BLW_Jobs';
  $tag->adunit = 'SALive_BLW_Jobs';
  $tag->size = '930x180,300x250,710x137,580x112';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x200',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '1200x200',
        'ad_sizes' => '710x137',
      ),
      2 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '580x112',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['clone_of_clone_of_clone_of_clone_of_clone_of_clone_of_clone_of_salive_blw_hot_rants'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'clone_of_clone_of_clone_of_clone_of_clone_of_clone_of_salive_blw_hot_rants';
  $tag->slot = 'SALive_BLW_Thought';
  $tag->adunit = 'SALive_BLW_Thought';
  $tag->size = '930x180,300x250,710x137,580x112';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x200',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '1200x200',
        'ad_sizes' => '710x137',
      ),
      2 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '580x112',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['clone_of_clone_of_clone_of_clone_of_clone_of_clone_of_salive_blw_hot_rants'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'clone_of_clone_of_clone_of_clone_of_clone_of_salive_blw_hot_rants';
  $tag->slot = 'SALive_BLW_Health';
  $tag->adunit = 'SALive_BLW_Health';
  $tag->size = '930x180,300x250,710x137,580x112';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x200',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '1200x200',
        'ad_sizes' => '710x137',
      ),
      2 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '580x112',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['clone_of_clone_of_clone_of_clone_of_clone_of_salive_blw_hot_rants'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'clone_of_clone_of_clone_of_clone_of_salive_b_rail_1';
  $tag->slot = 'SALive_B_Rail_4';
  $tag->adunit = 'SALive_B_Rail_4';
  $tag->size = '300x250,180x150';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['clone_of_clone_of_clone_of_clone_of_salive_b_rail_1'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'clone_of_clone_of_clone_of_clone_of_salive_blw_hot_rants';
  $tag->slot = 'SALive_BLW_Business';
  $tag->adunit = 'SALive_BLW_Business';
  $tag->size = '930x180,300x250,710x137,580x112';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x200',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '1200x200',
        'ad_sizes' => '710x137',
      ),
      2 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '580x112',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['clone_of_clone_of_clone_of_clone_of_salive_blw_hot_rants'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'clone_of_clone_of_clone_of_salive_b_rail_1';
  $tag->slot = 'SALive_B_Rail_3';
  $tag->adunit = 'SALive_B_Rail_3';
  $tag->size = '300x250,180x150';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['clone_of_clone_of_clone_of_salive_b_rail_1'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'clone_of_clone_of_clone_of_salive_blw_hot_rants';
  $tag->slot = 'SALive_BLW_Crash';
  $tag->adunit = 'SALive_BLW_Crash';
  $tag->size = '930x180,300x250,710x137,580x112';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x200',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '1200x200',
        'ad_sizes' => '710x137',
      ),
      2 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '580x112',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['clone_of_clone_of_clone_of_salive_blw_hot_rants'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'clone_of_clone_of_salive_b_rail_1';
  $tag->slot = 'SALive_B_Rail_2';
  $tag->adunit = 'SALive_B_Rail_2';
  $tag->size = '300x250,180x150';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
      1 => array(
        'browser_size' => '1200x200',
        'ad_sizes' => '300x250',
      ),
      2 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '180x150',
      ),
    ),
  );
  $export['clone_of_clone_of_salive_b_rail_1'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'clone_of_clone_of_salive_blw_hot_rants';
  $tag->slot = 'SALive_BLW_Crime';
  $tag->adunit = 'SALive_BLW_Crime';
  $tag->size = '930x180,300x250,710x137,580x112';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x200',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '1200x200',
        'ad_sizes' => '710x137',
      ),
      2 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '580x112',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['clone_of_clone_of_salive_blw_hot_rants'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'clone_of_salive_b_rail_1';
  $tag->slot = 'SALive_B_Rail_S';
  $tag->adunit = 'SALive_B_Rail_S';
  $tag->size = '300x250,180x150';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['clone_of_salive_b_rail_1'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'clone_of_salive_blw_hot_rants';
  $tag->slot = 'SALive_BLW_Editors_Pick';
  $tag->adunit = 'SALive_BLW_Editors_Pick';
  $tag->size = '930x180,300x250,710x137,580x112';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x200',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '1200x200',
        'ad_sizes' => '710x137',
      ),
      2 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '580x112',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['clone_of_salive_blw_hot_rants'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_1';
  $tag->slot = 'newsbody_1';
  $tag->adunit = 'newsbody_1';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_1'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_10';
  $tag->slot = 'newsbody_10';
  $tag->adunit = 'newsbody_10';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_10'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_11';
  $tag->slot = 'newsbody_11';
  $tag->adunit = 'newsbody_11';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_11'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_12';
  $tag->slot = 'newsbody_12';
  $tag->adunit = 'newsbody_12';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_12'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_13';
  $tag->slot = 'newsbody_13';
  $tag->adunit = 'newsbody_13';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_13'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_14';
  $tag->slot = 'newsbody_14';
  $tag->adunit = 'newsbody_14';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_14'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_15';
  $tag->slot = 'newsbody_15';
  $tag->adunit = 'newsbody_15';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_15'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_16';
  $tag->slot = 'newsbody_16';
  $tag->adunit = 'newsbody_16';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_16'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_17';
  $tag->slot = 'newsbody_17';
  $tag->adunit = 'newsbody_17';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_17'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_18';
  $tag->slot = 'newsbody_18';
  $tag->adunit = 'newsbody_18';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_18'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_19';
  $tag->slot = 'newsbody_19';
  $tag->adunit = 'newsbody_19';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_19'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_2';
  $tag->slot = 'newsbody_2';
  $tag->adunit = 'newsbody_2';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_2'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_20';
  $tag->slot = 'newsbody_20';
  $tag->adunit = 'newsbody_20';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_20'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_21';
  $tag->slot = 'newsbody_21';
  $tag->adunit = 'newsbody_21';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_21'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_22';
  $tag->slot = 'newsbody_22';
  $tag->adunit = 'newsbody_22';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_22'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_23';
  $tag->slot = 'newsbody_23';
  $tag->adunit = 'newsbody_23';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_23'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_24';
  $tag->slot = 'newsbody_24';
  $tag->adunit = 'newsbody_24';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_24'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_3';
  $tag->slot = 'newsbody_3';
  $tag->adunit = 'newsbody_3';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_3'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_4';
  $tag->slot = 'newsbody_4';
  $tag->adunit = 'newsbody_4';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_4'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_5';
  $tag->slot = 'newsbody_5';
  $tag->adunit = 'newsbody_5';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_5'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_6';
  $tag->slot = 'newsbody_6';
  $tag->adunit = 'newsbody_6';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_6'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_7';
  $tag->slot = 'newsbody_7';
  $tag->adunit = 'newsbody_7';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_7'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_8';
  $tag->slot = 'newsbody_8';
  $tag->adunit = 'newsbody_8';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_8'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'newsbody_9';
  $tag->slot = 'newsbody_9';
  $tag->adunit = 'newsbody_9';
  $tag->size = '300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['newsbody_9'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'salive_b_rail_1';
  $tag->slot = 'SALive_B_Rail_1';
  $tag->adunit = 'SALive_B_Rail_1';
  $tag->size = '300x250,180x150';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['salive_b_rail_1'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'salive_blw_hot_rants';
  $tag->slot = 'SALive_BLW_Hot_Rants';
  $tag->adunit = 'SALive_BLW_Hot_Rants';
  $tag->size = '930x180,300x250,710x137,580x112';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x200',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '1200x200',
        'ad_sizes' => '710x137',
      ),
      2 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '580x112',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['salive_blw_hot_rants'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'salive_blw_most_recent_';
  $tag->slot = 'SALive_BLW_Most_Recent ';
  $tag->adunit = 'SALive_BLW_Most_Recent';
  $tag->size = '970x250,970x90,930x180,300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1199x200',
        'ad_sizes' => '970x250,930x180',
      ),
      1 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '930x180',
      ),
      2 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['salive_blw_most_recent_'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'salive_blw_venue';
  $tag->slot = 'SALive_BLW_Venue';
  $tag->adunit = 'SALive_BLW_Venue';
  $tag->size = '930x180,300x250,710x137,580x112';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x200',
        'ad_sizes' => '930x180',
      ),
      1 => array(
        'browser_size' => '1200x200',
        'ad_sizes' => '710x137',
      ),
      2 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '580x112',
      ),
      3 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['salive_blw_venue'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'salive_bst_weather';
  $tag->slot = 'SALive_BST_Weather';
  $tag->adunit = 'SALive_BST_Weather';
  $tag->size = '190x63, 240x80, 300x100';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '1585x200',
        'ad_sizes' => '300x100',
      ),
      1 => array(
        'browser_size' => '1199x200',
        'ad_sizes' => '190x63',
      ),
      2 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x100',
      ),
    ),
  );
  $export['salive_bst_weather'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'salive_bw_bottom';
  $tag->slot = 'SALive_BW_Bottom';
  $tag->adunit = 'SALive_BW_Bottom';
  $tag->size = '728x90, 300x250';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '758x200',
        'ad_sizes' => '728x90',
      ),
      1 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
    ),
  );
  $export['salive_bw_bottom'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'salive_bw_top';
  $tag->slot = 'SALive_BW_Top';
  $tag->adunit = 'SALive_BW_Top';
  $tag->size = '300x250,728x90';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => 'text_image',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(
      0 => array(
        'browser_size' => '0x0',
        'ad_sizes' => '300x250',
      ),
      1 => array(
        'browser_size' => '758x200',
        'ad_sizes' => '728x90',
      ),
      2 => array(
        'browser_size' => '1200x200',
        'ad_sizes' => '970x250',
      ),
      3 => array(
        'browser_size' => '992x200',
        'ad_sizes' => '930x180',
      ),
    ),
  );
  $export['salive_bw_top'] = $tag;

  return $export;
}
