<?php
/**
 * @file
 * liveadcontext.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function liveadcontext_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about-all';
  $context->description = '';
  $context->tag = 'about';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-administration_profiles-block' => array(
          'module' => 'views',
          'delta' => 'administration_profiles-block',
          'region' => 'content',
          'weight' => '10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'quicktabs-accordion_block' => array(
          'module' => 'quicktabs',
          'delta' => 'accordion_block',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar',
          'weight' => '-6',
        ),
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'sidebar',
          'weight' => '-5',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-3',
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-2',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-1',
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '0',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('about');
  $export['about-all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ads';
  $context->description = '';
  $context->tag = 'all-pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        '*' => '*',
        '/*' => '/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dfp-salive_bw_top' => array(
          'module' => 'dfp',
          'delta' => 'salive_bw_top',
          'region' => 'header_ads',
          'weight' => '-10',
        ),
        'dfp-salive_bw_bottom' => array(
          'module' => 'dfp',
          'delta' => 'salive_bw_bottom',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('all-pages');
  $export['ads'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all-blocks';
  $context->description = '';
  $context->tag = 'all-pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        '*' => '*',
        '/*' => '/*',
        '~lunch-special' => '~lunch-special',
        '~email/*' => '~email/*',
        '~email' => '~email',
        '~user' => '~user',
        '~user/*' => '~user/*',
        '~members/*' => '~members/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-34' => array(
          'module' => 'block',
          'delta' => '34',
          'region' => 'header_ads',
          'weight' => '10',
        ),
        'liveinterstitual-interstitualtag' => array(
          'module' => 'liveinterstitual',
          'delta' => 'interstitualtag',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('all-pages');
  $export['all-blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blocks';
  $context->description = '';
  $context->tag = 'front';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured-block' => array(
          'module' => 'views',
          'delta' => 'featured-block',
          'region' => 'slider',
          'weight' => '-10',
        ),
        'views-headlines-block' => array(
          'module' => 'views',
          'delta' => 'headlines-block',
          'region' => 'headlines',
          'weight' => '-49',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'headlines_ad',
          'weight' => '-51',
        ),
        'dfp-salive_bst_weather' => array(
          'module' => 'dfp',
          'delta' => 'salive_bst_weather',
          'region' => 'headlines_ad',
          'weight' => '-17',
        ),
        'block-12' => array(
          'module' => 'block',
          'delta' => '12',
          'region' => 'headlines_ad',
          'weight' => '10',
        ),
        'dfp-salive_blw_most_recent_' => array(
          'module' => 'dfp',
          'delta' => 'salive_blw_most_recent_',
          'region' => 'editorspick',
          'weight' => '-10',
        ),
        'views-editorspick-block' => array(
          'module' => 'views',
          'delta' => 'editorspick-block',
          'region' => 'editorspick',
          'weight' => '-9',
        ),
        'dfp-salive_blw_hot_rants' => array(
          'module' => 'dfp',
          'delta' => 'salive_blw_hot_rants',
          'region' => 'content',
          'weight' => '-10',
        ),
        'quicktabs-san_angelo_news' => array(
          'module' => 'quicktabs',
          'delta' => 'san_angelo_news',
          'region' => 'content',
          'weight' => '-9',
        ),
        'dfp-clone_of_salive_blw_hot_rants' => array(
          'module' => 'dfp',
          'delta' => 'clone_of_salive_blw_hot_rants',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-newsthumbs-block_1' => array(
          'module' => 'views',
          'delta' => 'newsthumbs-block_1',
          'region' => 'content',
          'weight' => '-7',
        ),
        'dfp-f1d449404b430148380556f34dcd2461' => array(
          'module' => 'dfp',
          'delta' => 'f1d449404b430148380556f34dcd2461',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-category_news-block' => array(
          'module' => 'views',
          'delta' => 'category_news-block',
          'region' => 'content',
          'weight' => '-5',
        ),
        'dfp-c7aecbea6a4b443dbfe9250bf6288681' => array(
          'module' => 'dfp',
          'delta' => 'c7aecbea6a4b443dbfe9250bf6288681',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-category_news-block_1' => array(
          'module' => 'views',
          'delta' => 'category_news-block_1',
          'region' => 'content',
          'weight' => '-3',
        ),
        'dfp-a6042b64f6d512cdbdcb9367eb6ea274' => array(
          'module' => 'dfp',
          'delta' => 'a6042b64f6d512cdbdcb9367eb6ea274',
          'region' => 'content',
          'weight' => '-2',
        ),
        'views-category_news-block_3' => array(
          'module' => 'views',
          'delta' => 'category_news-block_3',
          'region' => 'content',
          'weight' => '-1',
        ),
        'dfp-436e1582b4574adc480c05612f012e44' => array(
          'module' => 'dfp',
          'delta' => '436e1582b4574adc480c05612f012e44',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-category_news-block_4' => array(
          'module' => 'views',
          'delta' => 'category_news-block_4',
          'region' => 'content',
          'weight' => '1',
        ),
        'dfp-6a4fde4b1ac7e89eda7e28ec4e2dd740' => array(
          'module' => 'dfp',
          'delta' => '6a4fde4b1ac7e89eda7e28ec4e2dd740',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-category_news-block_2' => array(
          'module' => 'views',
          'delta' => 'category_news-block_2',
          'region' => 'content',
          'weight' => '3',
        ),
        'dfp-5f1d2eeea31753f4f07b7cb3142f2ed8' => array(
          'module' => 'dfp',
          'delta' => '5f1d2eeea31753f4f07b7cb3142f2ed8',
          'region' => 'content',
          'weight' => '4',
        ),
        'views-job_network-block' => array(
          'module' => 'views',
          'delta' => 'job_network-block',
          'region' => 'content',
          'weight' => '5',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'dfp-300x600_rail' => array(
          'module' => 'dfp',
          'delta' => '300x600_rail',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'views-openhouse-block' => array(
          'module' => 'views',
          'delta' => 'openhouse-block',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'dfp-clone_of_salive_b_rail_1' => array(
          'module' => 'dfp',
          'delta' => 'clone_of_salive_b_rail_1',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-6',
        ),
        'dfp-salive_b_rail_1' => array(
          'module' => 'dfp',
          'delta' => 'salive_b_rail_1',
          'region' => 'sidebar',
          'weight' => '-5',
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '-4',
        ),
        'dfp-5085c2a7551d7a7ff1883601028caeca' => array(
          'module' => 'dfp',
          'delta' => '5085c2a7551d7a7ff1883601028caeca',
          'region' => 'sidebar',
          'weight' => '-3',
        ),
        'dfp-98100fe8550f827eeb01b01f36586338' => array(
          'module' => 'dfp',
          'delta' => '98100fe8550f827eeb01b01f36586338',
          'region' => 'sidebar',
          'weight' => '-2',
        ),
        'dfp-d331334cffe7f3deb1ff454a8d12130f' => array(
          'module' => 'dfp',
          'delta' => 'd331334cffe7f3deb1ff454a8d12130f',
          'region' => 'sidebar',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('front');
  $export['blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'classified-all';
  $context->description = '';
  $context->tag = 'classifieds';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'classified' => 'classified',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'classifieds' => 'classifieds',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-48' => array(
          'module' => 'block',
          'delta' => '48',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('classifieds');
  $export['classified-all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'classifieds-rail';
  $context->description = '';
  $context->tag = 'classifieds';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community/classifieds' => 'community/classifieds',
        'community/classifieds/*' => 'community/classifieds/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'quicktabs-accordion_block' => array(
          'module' => 'quicktabs',
          'delta' => 'accordion_block',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar',
          'weight' => '-6',
        ),
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'sidebar',
          'weight' => '-5',
        ),
        'waterblock-water' => array(
          'module' => 'waterblock',
          'delta' => 'water',
          'region' => 'sidebar',
          'weight' => '-4',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-3',
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-2',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-1',
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '0',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('classifieds');
  $export['classifieds-rail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'community-all';
  $context->description = '';
  $context->tag = 'community';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community' => 'community',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-community-block_1' => array(
          'module' => 'views',
          'delta' => 'community-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-community-block_2' => array(
          'module' => 'views',
          'delta' => 'community-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'quicktabs-accordion_block' => array(
          'module' => 'quicktabs',
          'delta' => 'accordion_block',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar',
          'weight' => '-6',
        ),
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'sidebar',
          'weight' => '-5',
        ),
        'waterblock-water' => array(
          'module' => 'waterblock',
          'delta' => 'water',
          'region' => 'sidebar',
          'weight' => '-4',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-3',
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-2',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-1',
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '0',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('community');
  $export['community-all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crash-sponsor';
  $context->description = '';
  $context->tag = 'news';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news/crashes' => 'news/crashes',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-35' => array(
          'module' => 'block',
          'delta' => '35',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('news');
  $export['crash-sponsor'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'deal-rail';
  $context->description = '';
  $context->tag = 'deal';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'deals' => 'deals',
        'deals/*' => 'deals/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => NULL,
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => NULL,
        ),
        'quicktabs-accordion_block' => array(
          'module' => 'quicktabs',
          'delta' => 'accordion_block',
          'region' => 'sidebar',
          'weight' => '-57',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-56',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar',
          'weight' => '-55',
        ),
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'sidebar',
          'weight' => '-54',
        ),
        'waterblock-water' => array(
          'module' => 'waterblock',
          'delta' => 'water',
          'region' => 'sidebar',
          'weight' => '-53',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-52',
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-51',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-50',
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '-49',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '-48',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('deal');
  $export['deal-rail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'email';
  $context->description = '';
  $context->tag = 'email';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'email' => 'email',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-45' => array(
          'module' => 'block',
          'delta' => '45',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-daily_email-block_2' => array(
          'module' => 'views',
          'delta' => 'daily_email-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-openhouse-block_2' => array(
          'module' => 'views',
          'delta' => 'openhouse-block_2',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-daily_email-block_3' => array(
          'module' => 'views',
          'delta' => 'daily_email-block_3',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-daily_email-block_1' => array(
          'module' => 'views',
          'delta' => 'daily_email-block_1',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-daily_email-block_4' => array(
          'module' => 'views',
          'delta' => 'daily_email-block_4',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-rants-block_2' => array(
          'module' => 'views',
          'delta' => 'rants-block_2',
          'region' => 'content',
          'weight' => '-4',
        ),
        'block-47' => array(
          'module' => 'block',
          'delta' => '47',
          'region' => 'content',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('email');
  $export['email'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event-rail';
  $context->description = '';
  $context->tag = 'events';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community/events' => 'community/events',
        'community/events/*' => 'community/events/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-74',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => '-73',
        ),
        'dfp-300x600_rail' => array(
          'module' => 'dfp',
          'delta' => '300x600_rail',
          'region' => 'sidebar',
          'weight' => NULL,
        ),
        'views-openhouse-block' => array(
          'module' => 'views',
          'delta' => 'openhouse-block',
          'region' => 'sidebar',
          'weight' => '-71',
        ),
        'dfp-clone_of_salive_b_rail_1' => array(
          'module' => 'dfp',
          'delta' => 'clone_of_salive_b_rail_1',
          'region' => 'sidebar',
          'weight' => NULL,
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar',
          'weight' => '-69',
        ),
        'dfp-salive_b_rail_1' => array(
          'module' => 'dfp',
          'delta' => 'salive_b_rail_1',
          'region' => 'sidebar',
          'weight' => NULL,
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-67',
        ),
        'dfp-5085c2a7551d7a7ff1883601028caeca' => array(
          'module' => 'dfp',
          'delta' => '5085c2a7551d7a7ff1883601028caeca',
          'region' => 'sidebar',
          'weight' => NULL,
        ),
        'quicktabs-news' => array(
          'module' => 'quicktabs',
          'delta' => 'news',
          'region' => 'sidebar',
          'weight' => '-65',
        ),
        'dfp-98100fe8550f827eeb01b01f36586338' => array(
          'module' => 'dfp',
          'delta' => '98100fe8550f827eeb01b01f36586338',
          'region' => 'sidebar',
          'weight' => NULL,
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '-63',
        ),
        'dfp-d331334cffe7f3deb1ff454a8d12130f' => array(
          'module' => 'dfp',
          'delta' => 'd331334cffe7f3deb1ff454a8d12130f',
          'region' => 'sidebar',
          'weight' => NULL,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('events');
  $export['event-rail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lunch-rail';
  $context->description = '';
  $context->tag = 'lunch';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'lunch-special' => 'lunch-special',
        'venue/*' => 'venue/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-lunch_specials-block_2' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block_2',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => '-61',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-61',
        ),
        'quicktabs-accordion_block' => array(
          'module' => 'quicktabs',
          'delta' => 'accordion_block',
          'region' => 'sidebar',
          'weight' => '-57',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-56',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar',
          'weight' => '-55',
        ),
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'sidebar',
          'weight' => '-54',
        ),
        'waterblock-water' => array(
          'module' => 'waterblock',
          'delta' => 'water',
          'region' => 'sidebar',
          'weight' => '-53',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-52',
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-51',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-50',
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '-49',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '-48',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('lunch');
  $export['lunch-rail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        '*' => '*',
        '/*' => '/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'superfish',
          'weight' => '-10',
        ),
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => '2',
          'region' => 'superfish',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news-blocks';
  $context->description = '';
  $context->tag = 'news';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
        'news/*' => 'news/*',
        'comment/*' => 'comment/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-74',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => '-73',
        ),
        'dfp-300x600_rail' => array(
          'module' => 'dfp',
          'delta' => '300x600_rail',
          'region' => 'sidebar',
          'weight' => '-72',
        ),
        'quicktabs-news' => array(
          'module' => 'quicktabs',
          'delta' => 'news',
          'region' => 'sidebar',
          'weight' => '-71',
        ),
        'dfp-clone_of_salive_b_rail_1' => array(
          'module' => 'dfp',
          'delta' => 'clone_of_salive_b_rail_1',
          'region' => 'sidebar',
          'weight' => '-70',
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '-69',
        ),
        'dfp-salive_b_rail_1' => array(
          'module' => 'dfp',
          'delta' => 'salive_b_rail_1',
          'region' => 'sidebar',
          'weight' => '-68',
        ),
        'views-openhouse-block' => array(
          'module' => 'views',
          'delta' => 'openhouse-block',
          'region' => 'sidebar',
          'weight' => '-67',
        ),
        'dfp-d331334cffe7f3deb1ff454a8d12130f' => array(
          'module' => 'dfp',
          'delta' => 'd331334cffe7f3deb1ff454a8d12130f',
          'region' => 'sidebar',
          'weight' => '-66',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar',
          'weight' => '-65',
        ),
        'dfp-98100fe8550f827eeb01b01f36586338' => array(
          'module' => 'dfp',
          'delta' => '98100fe8550f827eeb01b01f36586338',
          'region' => 'sidebar',
          'weight' => '-64',
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-63',
        ),
        'dfp-5085c2a7551d7a7ff1883601028caeca' => array(
          'module' => 'dfp',
          'delta' => '5085c2a7551d7a7ff1883601028caeca',
          'region' => 'sidebar',
          'weight' => '-62',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('news');
  $export['news-blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-logged-in';
  $context->description = '';
  $context->tag = 'all-pages';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'sidebar',
          'weight' => '-58',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('all-pages');
  $export['not-logged-in'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-loggeed-in-front';
  $context->description = '';
  $context->tag = 'front';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'content',
          'weight' => '-55',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('front');
  $export['not-loggeed-in-front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'obit-rail';
  $context->description = '';
  $context->tag = 'obituaries';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community/obituaries' => 'community/obituaries',
        'community/obituaries/*' => 'community/obituaries/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'block-38' => array(
          'module' => 'block',
          'delta' => '38',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'views-obituaries-block_1' => array(
          'module' => 'views',
          'delta' => 'obituaries-block_1',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-6',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar',
          'weight' => '-5',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-4',
        ),
        'waterblock-water' => array(
          'module' => 'waterblock',
          'delta' => 'water',
          'region' => 'sidebar',
          'weight' => '-3',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-2',
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '-1',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('obituaries');
  $export['obit-rail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openhouse';
  $context->description = 'Open house pages';
  $context->tag = 'classifieds';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community/classifieds/openhouse' => 'community/classifieds/openhouse',
        'community/classifieds/openhouse/*' => 'community/classifieds/openhouse/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'views-openhouse-block' => array(
          'module' => 'views',
          'delta' => 'openhouse-block',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-6',
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-5',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Open house pages');
  t('classifieds');
  $export['openhouse'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openhouse_main';
  $context->description = 'main page of openhouse section';
  $context->tag = 'classifieds';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community/classifieds/openhouse' => 'community/classifieds/openhouse',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-openhouse-block_1' => array(
          'module' => 'views',
          'delta' => 'openhouse-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('classifieds');
  t('main page of openhouse section');
  $export['openhouse_main'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'poll_rail_all';
  $context->description = '';
  $context->tag = 'poll';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'poll' => 'poll',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'quicktabs-accordion_block' => array(
          'module' => 'quicktabs',
          'delta' => 'accordion_block',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar',
          'weight' => '-6',
        ),
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'sidebar',
          'weight' => '-5',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-3',
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-2',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-1',
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '0',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('poll');
  $export['poll_rail_all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'post-an-event';
  $context->description = '';
  $context->tag = 'events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
        'event_free' => 'event_free',
        'event_paid' => 'event_paid',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'events' => 'events',
        'events:page_1' => 'events:page_1',
        'events:page_2' => 'events:page_2',
        'events:page_3' => 'events:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-33' => array(
          'module' => 'block',
          'delta' => '33',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('events');
  $export['post-an-event'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scores_game_nodes';
  $context->description = '';
  $context->tag = 'scores';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'scores' => 'scores',
        'scores/*' => 'scores/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('scores');
  $export['scores_game_nodes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search-rail';
  $context->description = '';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-63',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => '-62',
        ),
        'quicktabs-accordion_block' => array(
          'module' => 'quicktabs',
          'delta' => 'accordion_block',
          'region' => 'sidebar',
          'weight' => '-61',
        ),
        'block-46' => array(
          'module' => 'block',
          'delta' => '46',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar',
          'weight' => '-59',
        ),
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'sidebar',
          'weight' => '-58',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-57',
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-56',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-55',
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '-54',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '-53',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-52',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  $export['search-rail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'true-all';
  $context->description = '';
  $context->tag = 'all-pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        '*' => '*',
        '/*' => '/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'livebreaking-breaking' => array(
          'module' => 'livebreaking',
          'delta' => 'breaking',
          'region' => 'breaking',
          'weight' => '-10',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'footer',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('all-pages');
  $export['true-all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user-rail';
  $context->description = '';
  $context->tag = 'user';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'members/*' => 'members/*',
        'user' => 'user',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-49' => array(
          'module' => 'block',
          'delta' => '49',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('user');
  $export['user-rail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'weather-all';
  $context->description = '';
  $context->tag = 'weather';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'weather' => 'weather',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-39' => array(
          'module' => 'block',
          'delta' => '39',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar',
          'weight' => '-63',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar',
          'weight' => '-62',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar',
          'weight' => '-61',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-59',
        ),
        'quicktabs-accordion_block' => array(
          'module' => 'quicktabs',
          'delta' => 'accordion_block',
          'region' => 'sidebar',
          'weight' => '-58',
        ),
        'aggregator-feed-1' => array(
          'module' => 'aggregator',
          'delta' => 'feed-1',
          'region' => 'sidebar',
          'weight' => '-57',
        ),
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'sidebar',
          'weight' => '-56',
        ),
        'views-lunch_specials-block' => array(
          'module' => 'views',
          'delta' => 'lunch_specials-block',
          'region' => 'sidebar',
          'weight' => '-55',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-54',
        ),
        'views-rants-block_1' => array(
          'module' => 'views',
          'delta' => 'rants-block_1',
          'region' => 'sidebar',
          'weight' => '-53',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '-52',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('weather');
  $export['weather-all'] = $context;

  return $export;
}
