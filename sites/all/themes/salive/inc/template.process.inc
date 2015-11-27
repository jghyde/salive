<?php
/**
 * Add body classes if certain regions have content.
 */
function salive_preprocess_html(&$vars) {
	$css = "";
	if (!empty($vars['page']['headlines'])) {
		drupal_add_js(drupal_get_path('theme', 'salive') . '/js/jPages.min.js');
		$headline_pager = theme_get_setting('headlines_pager')? theme_get_setting('headlines_pager') : 5;
		$headlines_js = '(function ($) {	$(function(){
		$("#headlines .holder").jPages({
      containerID : "hlitemContainer",
      perPage     : ' . $headline_pager . ',
      first       : false,
      previous    : false,
      next        : false,
      last        : false
    });;
	}); })(jQuery);';
		drupal_add_js($headlines_js, "inline");
		$css .= '#hlitemContainer li:nth-child(' . $headline_pager . 'n+' . $headline_pager . ') {border: none;}';
	}
  drupal_add_css(libraries_get_path('rrssb') . '/css/rrssb.css');
  drupal_add_js(libraries_get_path('rrssb') . '/js/rrssb.min.js');
  
  //drupal_add_js(libraries_get_path('sharrre') . '/jquery.sharrre.js');
	
  drupal_add_css(libraries_get_path('owlcarousel') . '/assets/owl.carousel.css');
	drupal_add_css(libraries_get_path('owlcarousel') . '/assets/animate.css');
	drupal_add_css(libraries_get_path('owlcarousel') . '/assets/owl.theme.default.min.css');
  drupal_add_js(libraries_get_path('owlcarousel') . '/owl.carousel.min.js');
	drupal_add_js(libraries_get_path('owlcarousel') . '/jquery.mousewheel.min.js');

  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/salbootstrap.js',
	  array('weight' => -20)
	);
	$node_type = NULL;
	if (arg(0) == 'node' && is_numeric(arg(1))) {
	  $node_ck = node_load(arg(1));
	  $node_type = $node_ck->type;
	}
	// Google DFP hacks
	// find out if it's an article
	$node_type = NULL;
	if (arg(0) == 'node' && is_numeric(arg(1))) {
	  $node_ck = node_load(arg(1));
	  $node_type = $node_ck->type;
	}
	if ($vars['is_front'] == 1) {
	  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-front.js');
	}
	elseif (isset($node_type) && $node_type == 'article') {
	  // Find the $defined_slots. Must have livenewsads module enabled.
		$slots = livenewsads_slots();
		if (count($slots > 0) ) {
		  //create js for the <head> to display ads
			$js = <<<EOT
var googletag = googletag || {};
googletag.cmd = googletag.cmd || [];
(function() {
var gads = document.createElement('script');
gads.async = true;
gads.type = 'text/javascript';
var useSSL = 'https:' == document.location.protocol;
gads.src = (useSSL ? 'https:' : 'http:') + 
'//www.googletagservices.com/tag/js/gpt.js';
var node = document.getElementsByTagName('script')[0];
node.parentNode.insertBefore(gads, node);
})();
 
googletag.cmd.push(function() {
  var width = document.documentElement.clientWidth;
  var box;
  	if (width >= 320 && width < 991) 
		box = [300, 250]; 
		else if (width > 991  && width <1199) 
	  box = [180, 150];
	else
		box = [300, 250];
	var ban;
  	if (width >= 320 && width < 991) 
		ban = [300, 250]; 
		else if (width > 992 && width < 1199) 
	  ban = [485, 60];
		else if (width > 1200 && width < 1585)
		ban = [647, 80];
	else
		ban = [728, 90];
	var banwl;
  	if (width >= 320 && width < 991) 
		banwl = [300, 250]; 
		else if (width > 992 && width < 1199) 
	  banwl = [580, 112];
		else if (width > 1200 && width < 1585)
		banwl = [710, 137];
	else
		banwl = [930, 180];
	var banwlb;
  	if (width >= 320 && width < 991) 
		banwlb = [300, 250]; 
		else if (width > 992 && width < 1199) 
	  banwlb = [620, 120];
		else if (width > 1200 && width < 1585)
		banwlb = [775, 150];
	else
		banwlb = [930, 180];
	var banst;
  	if (width >= 320 && width < 991) 
		banst = [300, 100]; 
		else if (width > 992 && width < 1199) 
	  banst = [190, 63];
		else if (width > 1200 && width < 1585)
		banst = [240, 80];
	else
		banst = [300, 100];
	var slot1=googletag.defineSlot('/116956976/SALive_Breaking_News', [320, 50], 'div-gpt-ad-1425500431462-1').addService(googletag.pubads());
	var slot3=googletag.defineSlot('/116956976/SALive_B_Rail_1', box, 'div-gpt-ad-1425500431462-2').addService(googletag.pubads());
	var slot4=googletag.defineSlot('/116956976/SALive_B_Rail_2', box, 'div-gpt-ad-1425500431462-3').addService(googletag.pubads());
	var slot5=googletag.defineSlot('/116956976/SALive_B_Rail_3', box, 'div-gpt-ad-1425500431462-4').addService(googletag.pubads());
	var slot6=googletag.defineSlot('/116956976/SALive_B_Rail_4', box, 'div-gpt-ad-1425500431462-5').addService(googletag.pubads());
	var slot12=googletag.defineSlot('/116956976/SALive_BLW_Story', banwl, 'div-gpt-ad-1425500431462-12').addService(googletag.pubads());
	var slot18=googletag.defineSlot('/116956976/SALive_BW_Bottom', ban, 'div-gpt-ad-1425500431462-17').addService(googletag.pubads());
	var slot19=googletag.defineSlot('/116956976/SALive_BW_Top', ban, 'div-gpt-ad-1425500431462-18').addService(googletag.pubads());
	
EOT;
    // Find the crash slot, story bottom, SALive_BLW_Story
		if (in_array('div-gpt-ad-1444925118780-0', $slots)) {
		  $js .= <<<EOT
    googletag.defineSlot('/116956976/SALive_BLW_Crash', banwl , 'div-gpt-ad-1444925118780-0').addService(googletag.pubads());
EOT;
      $slots = array_diff($slots, array('div-gpt-ad-1444925118780-0'));
		}
    $i = 101;
		$n = 1;
    foreach($slots as $slot) {
		  $js .= 'var slot' . $i . '=googletag.defineSlot(\'/116956976/newsbody_' . $n . '\', box, ' . "'" . $slot . '\').addService(googletag.pubads());' . "\n";
			$i++;
			$n++;
		}
    $js .= <<<EOT
  googletag.pubads().enableSingleRequest();
  googletag.enableServices();
});
EOT;
    // add the js
		drupal_add_js($js, array('type' => 'inline', 'scope' => 'header', 'weight' => 1));
		}
	}
	else {
	  $path = menu_get_item();
		switch ($path['path']) {
		  case 'news':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news.js');
			break;
			case 'news/business':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
						case 'news/crime':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/business':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/county':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/san-angelo':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/crashes':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/business':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/health':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/international':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/national':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/entertainment':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/politics':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/sports':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'news/texas':
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp-news-inside.js');
			break;
			case 'scores':
			  drupal_add_js(drupal_get_path('theme', 'salive') .  '/js/googledfp-scores.js');
			default:
			  drupal_add_js(drupal_get_path('theme', 'salive') . '/js/googledfp.js');
			break;
		}  
	}
	drupal_add_js(drupal_get_path('theme', 'salive') . '/js/jquery.cycle2.min.js');
	drupal_add_js(drupal_get_path('theme', 'salive') . '/js/jquery.cycle2.carousel.js');
	
	// remove no-sidebars class
	if ($index = array_search('no-sidebars', $vars['classes_array'])) {
    unset($vars['classes_array'][$index]);
  }

	if (theme_get_setting('extra_page_classes')) {
    if (function_exists('locale')) {
      $vars['classes_array'][] = 'lang-'. $vars['language']->language;
    }
  }
  if (theme_get_setting('extra_page_classes') == 0) {
    foreach($vars['classes_array'] as $i =>$class) {
      if(preg_match('/page*/', $class)) {
        unset($vars['classes_array'][$i]);
      }
    }
  }

	//drupal_add_css(path_to_theme() . '/css/ie7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
}

function salive_query_alter(&$query) {

  // This is a search result query and we want to change the
  // number of search results per page to 16.
  if ($query instanceof PagerDefault
    && ($tables = $query->getTables())
    && isset($tables['i']['table'])
    && $tables['i']['table'] === 'search_index') {
    $query->limit(25);
  }
}


/**
 * Override or insert vars into the page template for HTML output.
 */
function salive_process_html(&$vars) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($vars);
  }
	
	$classes = explode(' ', $vars['classes']);
  if ($node = menu_get_object()) {
    $node_type_class = drupal_html_class('node-type-' . $node->type);
    if (in_array($node_type_class, $classes)) {
      theme_get_setting('extra_page_classes') == 0 ? '' : $classes = str_replace($node_type_class, '', $classes);
      $classes = str_replace('node-type-', 'page-type-', $classes);
    }
  }
  $vars['classes'] = trim(implode(' ', $classes));
}



/**
 * Override or insert vars into the page template.
 */
function salive_process_page(&$vars, $hook) {
	if($vars['page']['sidebar']) {
		$vars['sidebar_grid_class'] = 'col-md-4';
		$vars['main_grid_class'] = 'col-md-8';		
	} else {
		$vars['main_grid_class'] = 'col-md-12';			
	}
}

/**
 * Implements hook_preprocess_page().
 */
function salive_preprocess_page(&$vars) {
  // fix the title on obit nodes
  if (isset($vars['node'])) {
    if ($vars['node']->type == 'obituary') {
      // date_format_date($date, $type = 'medium', $format = '', $langcode = NULL)
      //date_format(date_create($time), $format);
      $death = date_format(date_create($vars['node']->field_date_of_death[LANGUAGE_NONE][0]['value']), 'M j, Y');
      $birth = date_format(date_create($vars['node']->field_date_of_birth[LANGUAGE_NONE][0]['value']), 'M j, Y');
      $vars['title'] = drupal_get_title();
      $vars['title_suffix']['obit_dates']['#markup'] = '<span class="obit-dates">' . $birth . ' - ' . $death . '</span>';
    }
		if ($vars['node']->type == 'obit_paid') {
      // date_format_date($date, $type = 'medium', $format = '', $langcode = NULL)
      //date_format(date_create($time), $format);
      $death = date_format(date_create($vars['node']->field_date_of_death[LANGUAGE_NONE][0]['value']), 'M j, Y');
      $birth = date_format(date_create($vars['node']->field_date_of_birth[LANGUAGE_NONE][0]['value']), 'M j, Y');
      $vars['title'] = drupal_get_title();
      $vars['title_suffix']['obit_dates']['#markup'] = '<span class="obit-dates">' . $birth . ' - ' . $death . '</span>';
    }
    if ($vars['node']->type == 'article') {
      drupal_add_js(libraries_get_path('addtocopy') . '/addtocopy.js');
      if ($vars['node']->field_category['und'][0]['tid'] == 22) {
        $vars['title_suffix']['category']['#markup'] = '<span class="obit-dates">Opinion</span>';
      }
      if ($vars['node']->pressrelease == 1) {
        $vars['title_suffix']['category']['#markup'] = '<span class="obit-dates">Press Release</span>';
      }
			if ($vars['node']->sponsored == 1) {
        $vars['title_suffix']['category']['#markup'] = '<span class="obit-dates">Sponsored Story</span>';
      }
    }
    if ($vars['node']->type == 'insert') {
      $vars['theme_hook_suggestions'][] = 'page__insert';
    }
    if ($vars['node']->type == 'birth') {
      // date_format_date($date, $type = 'medium', $format = '', $langcode = NULL)
      //date_format(date_create($time), $format);
      $birth = date_format(date_create($vars['node']->field_date_of_birth[LANGUAGE_NONE][0]['value']), 'M j, Y');
      $vars['title'] = drupal_get_title();
      $vars['title_suffix']['obit_dates']['#markup'] = '<span class="birth-dates">' . $birth . '</span>';
    }
  }
}

/**
 * Implements template_preprocess_field()
 */
function salive_preprocess_field(&$vars, $hook) {
  if ($vars['field_name_css'] == 'field-portrait-image') {
    $vars['classes_array'] = array_merge($vars['classes_array'], array('pull-left','clearfix'));
    $vars['classes_array'][] = 'thumbnail';
  }
  if ($vars['field_name_css'] == 'field-write-your-tribute') {
    $vars['items'][0]['#title'] = 'Sign Your Tribute';
    $vars['classes_array'] = array_merge($vars['classes_array'], array('pull-right','btn-lg', 'btn', 'btn-success'));
  }
  if ($vars['field_name_css'] == 'field-funeral-home') {
    $vars['classes_array'] = array_merge($vars['classes_array'], array('clearfix'));
  }
  if ($vars['field_name_css'] == 'field-name-field-article-bullets') {
    $vars['classes_array'][] = 'well';
  }
}

/**
 * Implements theme_field()
 */
function salive_field__field_write_your_tribute($vars) {
  $out = '<a href="' . $vars['element']['#items'][0]['value'] . '" class="' . $vars['classes'] . '" title="' . $vars['element']['#items'][0]['title'] . '" target="_blank"><i class="white glyphicons pen" style="margin-top:-25px;padding-left:35px;margin-left:-5px;"></i>Write Your Tribute</a>';
  return $out;
}

/**
 * Implements hook_preprocess_maintenance_page().
 */
function salive_preprocess_maintenance_page(&$vars) {
  if (!$vars['db_is_active']) {
    unset($vars['site_name']);
  }
  drupal_add_css(drupal_get_path('theme', 'salive') . '/css/maintenance-page.css');
}

/**
 * Override or insert vars into the maintenance page template.
 */
function salive_process_maintenance_page(&$vars) {
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $vars['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $vars['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($vars['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $vars['site_name'] = filter_xss_admin(variable_get('site_name', 'San Angelo LIVE!'));
  }
  if ($vars['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $vars['site_slogan'] = filter_xss_admin(variable_get('site_slogan', 'San Angelo, TX News Leader!'));
  }
}

/**
 * Override or insert vars into the node template.
 */
function salive_preprocess_node(&$vars) {
  // add an open graph tag for the image
	if ($vars['type'] == 'article' ||
	    $vars['type'] == 'event' ) {
	  if (count($vars['field_image']) > 0) {
		  // make the OG image the first one:
			$og_image = $vars['field_image'][0];
			$url = image_style_url('facebook', $og_image['uri']);
      $element = array(
        '#tag' => 'meta',
        '#attributes' => array(
          'property' => "og:image",
          'content' => $url,
        ),
      );
      drupal_add_html_head($element,'facebook_share_image');
			$element['#attributes']['property'] = 'twitter:image';
			drupal_add_html_head($element,'twitter_card_image');
		}
	}
	if (theme_get_setting('extra_article_classes')) {
    if (module_exists('translation')) {
      if ($vars['node']->language) {
        global $language;
        $vars['classes_array'][] = 'article-lang-'. $vars['node']->language;
      }
    }
  }

  $vars['classes_array'][] = $vars['zebra'];

  if ($vars['view_mode'] == 'full' && node_is_page($vars['node'])) {
    $vars['classes_array'][] = 'node-full';
  }

	if ($vars['view_mode'] == 'teaser') {
    $vars['classes_array'][] = "node-".$vars['node']->type."-teaser";
  }
  if ($vars['display_submitted']) {
		$author = user_load($vars['uid']);
		if (in_array('administrator', $author->roles)) {
			$account = profile2_load_by_user($vars['uid'], 'main_profile_admin');
		} else {
			$account = profile2_load_by_user($vars['uid'], 'main');
		}
    $imgvars = $account->field_profile_picture[LANGUAGE_NONE][0];
    $name = ($account->field_first_name[LANGUAGE_NONE][0]['safe_value'] ? $account->field_first_name[LANGUAGE_NONE][0]['safe_value'] . ' ': '');
    $name .= ($account->field_last_name[LANGUAGE_NONE][0]['safe_value'] ? $account->field_last_name[LANGUAGE_NONE][0]['safe_value'] : '');
		if (in_array('administrator', $author->roles)) {
			$title = ($account->field_job_title[LANGUAGE_NONE][0]['safe_value'] ? $account->field_job_title[LANGUAGE_NONE][0]['safe_value'] : '');
		} elseif (in_array('Past Employee', $author->roles)) {
      $title = t('Former Correspondent');
		} elseif (in_array('Intern', $author->roles)) {
      $title = t('Intern Reporter');
		} else {
			$title = t('Contributor');
		}
    (empty($imgvars['title']) ? $imgvars['title'] = $name : '');
    (empty($imgvars['alt']) ? $imgvars['alt'] = $name : '');
    $picarray = array(
      'style_name' => 'profile',
      'path' => $imgvars['uri'],
      'width' => $imgvars['width'],
      'height' => $imgvars['height'],
      'alt' => $imgvars['alt'],
      'title' => $imgvars['title'],
    );
    (!empty($account->field_google_plus_url[LANGUAGE_NONE][0]['safe_value']) ? $link = $account->field_google_plus_url[LANGUAGE_NONE][0]['safe_value']: $link = '');
    $pic = theme('image_style', $picarray);
    if (!empty($link)) {
      $pic = l($pic, $link, array('attributes' => array('class' => array('img-thumbnail')), 'html' => TRUE));
    }
    $bio = $account->field_short_bio[LANGUAGE_NONE][0]['value'];
    $items = array();
    // If the Author allows Contact Form:
    $account_drupal = user_load($vars['uid']);
    if (isset($account_drupal->data['contact']) && $account_drupal->data['contact'] == 1) {
      $items[] = l('Email', 'user/' . $account_drupal->uid . '/contact', array('attributes' => array('title' => 'e-mail', 'class' => array('social', 'e-mail'))));
    } 
    $out = '<h4>About the Author</h4><div class="profile2-image thumbnail">' . $pic . '</div>';
    $out .= '<div class="profile2-words clearfix"><h3>' . $name . '<small> - ' . $title . '</small></h3><p>' . $bio . '</p></div>';
    $vars['submitted'] =  $out;
    if (isset($account->field_google_plus_url[LANGUAGE_NONE][0]['safe_value'])) {
      $byline = 'by ' . l($name, $account->field_google_plus_url[LANGUAGE_NONE][0]['safe_value']);
    }
    else {
      $byline = 'By ' . $name;
    }
    $date = date('M. j, Y g:i a', $vars['created']);
		$changed = date('M. j, Y g:i a', $vars['changed']);
		if ($vars['updated']) {
				$updated = '<span class="updated">Last Updated: ' . $changed . '</span>';
				$vars['byline'] = '<h6>' . $byline . ' <small>| ' . $date . '</small></h6>' . $updated;
		} else {
			$vars['byline'] = '<h6>' . $byline . ' <small>| ' . $date . '</small></h6>';
		}
		$vars['sell'] = $sell;
  }
}
/**
 * Helper func to create anonymous login for comments
 */
function salive_sellthelogin() {
  if (user_is_anonymous()) {
    $out = '<div class="comment-signup well clearfix">';
    $out .= '<div class="title-wrapper">';
    $out .= '<div class="clearfix"><h3>Sign-Up and Comment</h3></div>';
    $out .= '</div><div class="clearfix">';
    $out .= l('Login', 'user/login', array('query' => drupal_get_destination(), 'attributes' => array('class' => array('btn', 'btn-success', 'pull-right', 'btn-lg',))));
    $out .= '</div>';
    $out .= '<div class="comment-anonymous-image pull-left">';
    $out .= '<img class="thumbnail" src="/sites/all/themes/salive/images/glyphicon-add-user.png" alt="Sign up for San Angelo TX news and rant with us!" height="79" width="100" />';
    $out .= '</div>';
    $out .= '<div class="comment-words-wrapper">';
    $form = drupal_get_form('livelogin_comment_form');
    $out .= drupal_render($form);
    $out .= '</div>';
    $out .= '</div> <!-- /.comment-signup well clearfix -->';
    return $out;
  }
}


/**
 * Implements hook_preprocess_comment()
 */
function salive_preprocess_comment(&$variables) {
  $comment = $variables['elements']['#comment'];
  //add bootstrap button classes:
  $variables['content']['links']['comment']['#links']['comment-edit']['attributes']['class'][] = 'btn';
  //$variables['content']['links']['comment']['#links']['comment-edit']['attributes']['class'][] = 'btn-primary';
  //$variables['content']['links']['comment']['#links']['comment-edit']['attributes']['class'][] = 'btn-xs';

  $variables['content']['links']['comment']['#links']['comment-delete']['attributes']['class'][] = 'btn';
  //$variables['content']['links']['comment']['#links']['comment-delete']['attributes']['class'][] = 'btn-primary';
  //$variables['content']['links']['comment']['#links']['comment-delete']['attributes']['class'][] = 'btn-xs';

  $variables['content']['links']['comment']['#links']['comment-reply']['attributes']['class'][] = 'btn';
  //$variables['content']['links']['comment']['#links']['comment-reply']['attributes']['class'][] = 'btn-primary';
  //$variables['content']['links']['comment']['#links']['comment-reply']['attributes']['class'][] = 'btn-xs';
   
  $node = $variables['elements']['#node'];
  $variables['comment'] = $comment;
  $variables['node'] = $node;
  $author = user_load($comment->uid);
  if (in_array('administrator', $author->roles)) {
    $account = profile2_load_by_user($comment->uid, 'main_profile_admin');
  } else {
    $account = profile2_load_by_user($comment->uid, 'main');
  };
  if (!empty($account)) {
    if (!empty($account->field_profile_picture[LANGUAGE_NONE][0]['fid'])) {
      $imgvars = $account->field_profile_picture[LANGUAGE_NONE][0];
      $picarray = array(
        'style_name' => 'comment_thumb',
        'path' => $imgvars['uri'],
        'width' => $imgvars['width'],
        'height' => $imgvars['height'],
        'alt' => $imgvars['alt'],
        'title' => $imgvars['title'],
      );
      $picture = theme('image_style', $picarray);
    }
    (!empty($account->field_first_name) ? $name = $account->field_first_name[LANGUAGE_NONE][0]['value'] : null);
    (!empty($account->field_last_name) ? $name .= ' ' . $account->field_last_name[LANGUAGE_NONE][0]['value'] : null);    
  }
  (empty($name) ? $name = $comment->name : '');
  (empty($picture) ? $picture = '<img src ="/' . drupal_get_path('theme', 'salive') . '/images/anonymous_pic.png" height="85" width="85" alt="No Picture" />' : '');
  $variables['author'] = l($name, 'user/' . $comment->uid . '/contact');

  $variables['created'] = date('M d, Y g:i a T', $comment->created);

  // Avoid calling format_date() twice on the same timestamp.
  if ($comment->changed == $comment->created) {
    $variables['changed'] = $variables['created'];
  }
  else {
    $variables['changed'] = date('M d, Y g:i a T', $comment->changed);
  }

  $variables['new'] = !empty($comment->new) ? t('new') : '';
  $variables['picture'] = $picture;
  $variables['signature'] = $comment->signature;


  $variables['title'] = l($comment->subject,  drupal_get_path_alias('node/' . $node->nid), array('fragment' => 'comment-' . $variables['comment']->cid));
  $variables['permalink'] = l(t('Permalink'), drupal_get_path_alias('node/' . $node->nid), array('fragment' => 'comment-' . $variables['comment']->cid, 'attributes' => array(
    'class' => array('permalink'),
    'rel' => 'bookmark',
  )));
  $variables['submitted'] = 'by ' . $name . '<br />' . $variables['created'];

  // Fix the links on comment views
  if (isset($variables['view']->name) && isset($variables['content']['links'])) {
    if (isset($variables['content']['links']['comment']['#links']['comment-delete'])) {
      unset($variables['content']['links']['comment']['#links']['comment-delete']);
    }
    if (isset($variables['content']['links']['comment']['#links']['comment-edit'])) {
      unset($variables['content']['links']['comment']['#links']['comment-edit']);
    }
    // Add the node's title as a subheading
    $variables['title_suffix'] = '<p class="subhead"><em>in ' .  l($variables['node']->title, 'node/' . $variables['content']['comment_body']['#object']->nid) . '</em></p>';
    $variables['content']['links']['comment']['#links']['comment-reply']['title'] = 'Rant Back';
    $variables['content']['links']['comment']['#links']['comment-reply']['fragment'] = 'comment-' . $variables['content']['comment_body']['#object']->cid;
    $variables['content']['links']['comment']['#links']['comment-reply']['href'] = drupal_get_path_alias('node/' . $variables['content']['comment_body']['#object']->nid);
  }
}

/**
 * implements hook_form_alter()
 */
function salive_form_user_register_form_alter(&$form, &$form_state, $form_id) {
  $form['profile_main']['field_admin']['#access'] = 0;
  $form['profile_main']['field_facebook_url']['#access'] = 0;
  $form['profile_main']['field_short_bio']['#access'] = 0;
  $form['profile_main']['field_linkedin_url']['#access'] = 0;
  $form['profile_main']['field_twitter_url']['#access'] = 0;
  $form['profile_main']['field_profile_picture']['#access'] = 0;
  $form['profile_main']['field_google_plus_url']['#access'] = 0;
  $form['profile_main']['#title'] = '';
  $form['mailchimp_lists']['#title'] = 'You Are Subscribing to San Angelo LIVE! Daily';
  $form['mailchimp_lists']['mailchimp_san_angelo_live_daily']['title']['#markup'] = '';
  $form['mailchimp_lists']['mailchimp_san_angelo_live_daily']['title']['#description'] = 'Delivered daily to thousands wanting to be the first to know what is going on in the San Angelo region. Emailed direct to your inbox daily, except Sunday.';
  $form['actions']['submit']['#value'] = 'Subscribe';
  $form['#prefix'] = '<div class="subscribe-now-words">';
  $form['#prefix'] .= '<p>Claiming our famous <a href="/deals">Daily Deals</a> and participating in the rants, or comments, requires that you join San Angelo LIVE! by subscribing.</p>';
  $form['#prefix'] .= '<p>The San Angelo LIVE! Daily is a newspaper delivered via email to thousands of residents interested in learning first what is happening in the San Angelo region.';
  $form['#prefix'] .= ' We are a local independent online news organization owned and operated by <a href="http://hydeinteractive.com/" target="_blank">local San Angeloans</a> and not affiliated with any other media company.</p>';
  $form['#prefix'] .= '<p>It is completely <strong>FREE</strong> to subscribe. Once subscribed, you may log-in this website and post comments on stories as well.</p>';
  $form['#prefix'] .= '<p>Your email address is a closely-guarded secret and not shared with anyone. We work hard to maintain a very good reputation with all subscribers. You may unsubscribe from this email any time. Just follow the unsubscribe link in the email itself. Welcome aboard!</p>';
  $form['#prefix'] .= '</div>';
  drupal_set_title('Subscribe to San Angelo LIVE!');
}
function salive_form_alter(&$form, $form_state, $form_id) {
  if ($form_id == 'user_login_block' || $form_id == 'user_login') {
		drupal_set_title('San Angelo LIVE! Login'); 
	}
	if ($form_id == 'user_pass') {
		$form['#prefix'] = '<div class="subscribe-now-words">';
	  $form['#prefix'] .= '<p>If you are having trouble resetting your password please email <a href="mailto:dylan@hydeinteractive.com?subject=San Angelo LIVE! Password Rest">Dylan Underwood</a> our web developer and he can help you.</p>';
	  $form['#prefix'] .= '</div>';
		drupal_set_title('Password Reset');
	}
}

/**
 * Override or insert vars into the block template.
 */
function salive_preprocess_block(&$vars) {
	if (theme_get_setting('extra_block_classes')) {
    $vars['classes_array'][] = 'block-' . $vars['block_zebra'];
  }
  if (theme_get_setting('extra_block_classes')) {
    $vars['classes_array'][] = 'block-count-'. $vars['id'];
  }
  if (theme_get_setting('extra_block_classes')) {
    $vars['classes_array'][] = drupal_html_class('block-region-' . $vars['block']->region);
  }
  // In the header region visually hide block titles.
  if ($vars['block']->region == 'header') {
    $vars['title_attributes_array']['class'][] = 'element-invisible';
  }
	$vars['header'] = NULL;
}

/**
 * Override theme_breadrumb().
 *
 * Print breadcrumbs as a list, with separators.
 */
function salive_breadcrumb($variables) {
  $output = '';
  if (drupal_is_front_page()) {
    return $output;
  }
  $output = '';
  $add_to_path = '';
  $breadcrumb = $variables['breadcrumb'];
  $path = current_path();
  $pieces = explode('/', $path);
  if ($pieces[0] == 'node') {
    $breadcrumb = array();
    // add the home page
    $breadcrumb[] = l('Home ', '<front>', array('attributes' => array('title' => 'San Angelo LIVE! Home')));
    $last = $path;
    $node = node_load($pieces['1']);
    switch ($node->type) {
      case 'article':
        $tids = array($node->field_category[LANGUAGE_NONE][0]['tid']);
        $termname = taxonomy_term_load_multiple($tids);
        $i = 0;
        foreach($termname as $term) {
          if ($i == 0) {
            $term_use = $term->name;
          }
          $i++;
        }
        $breadcrumb[] = l('News ', 'news', array('attributes' => array('title' => 'San Angelo News')));
        // Create dashed term name
        $termnamedash = str_replace(' ', '-', $term_use);
        $breadcrumb[] = l(ucfirst($term_use), 'news/' . strtolower($termnamedash), array('attributes' => array('title' => $term_use)));
      break;
      
      case 'event':
        $tids = array($node->field_event_category[LANGUAGE_NONE][0]['tid']);
        $termname = taxonomy_term_load_multiple($tids);
        $i = 0;
        foreach($termname as $term) {
          if ($i == 0) {
            $term_use = $term->name;
          }
          $i++;
        }
        $breadcrumb[] = l('Events ', 'events', array('attributes' => array('title' => 'All San Angelo Upcoming Events')));
        // Create dashed term name
        $termnamedash = str_replace(' ', '-', $term_use);
        $breadcrumb[] = l(ucfirst($term_use), 'events/' . strtolower($termnamedash), array('attributes' => array('title' => 'All Upcoming ' . $term_use . ' events in San Angelo')));
      break;
       case 'event_paid':
        $tids = array($node->field_event_category[LANGUAGE_NONE][0]['tid']);
        $termname = taxonomy_term_load_multiple($tids);
        $i = 0;
        foreach($termname as $term) {
          if ($i == 0) {
            $term_use = $term->name;
          }
          $i++;
        }
        $breadcrumb[] = l('Events ', 'events', array('attributes' => array('title' => 'All San Angelo Upcoming Events')));
        // Create dashed term name
        $termnamedash = str_replace(' ', '-', $term_use);
        $breadcrumb[] = l(ucfirst($term_use), 'events/' . strtolower($termnamedash), array('attributes' => array('title' => 'All Upcoming ' . $term_use . ' events in San Angelo')));
      break;
      case 'event_free':
        $tids = array($node->field_event_category[LANGUAGE_NONE][0]['tid']);
        $termname = taxonomy_term_load_multiple($tids);
        $i = 0;
        foreach($termname as $term) {
          if ($i == 0) {
            $term_use = $term->name;
          }
          $i++;
        }
        $breadcrumb[] = l('Events ', 'events', array('attributes' => array('title' => 'All San Angelo Upcoming Events')));
        // Create dashed term name
        $termnamedash = str_replace(' ', '-', $term_use);
        $breadcrumb[] = l(ucfirst($term_use), 'events/' . strtolower($termnamedash), array('attributes' => array('title' => 'All Upcoming ' . $term_use . ' events in San Angelo')));
      break;
      default:
        // just follow the $_REQUEST['path']
        $pieces = explode('/', $_SERVER['REQUEST_URI']);
        // take off the last item
        array_pop($pieces);
        foreach($pieces as $piece) {
          if (!empty($piece)) {
            if (drupal_valid_path($add_to_path . $piece, TRUE)) {
              $breadcrumb[] = l(ucfirst($piece), $add_to_path . $piece, array('attributes' => array('title' => ucfirst($piece))));
            }
            else {
              $breadcrumb[] = ucfirst($piece);
            }
            $add_to_path .= $piece . '';
          }
        }
      break;
    }
  }
  else {
    // it's a views page
  }
  if (!empty($breadcrumb)) {
    $breadcrumbs = '<ul class="breadcrumb">';
    
    foreach ($breadcrumb as $key => $value) {
       $breadcrumbs .= '<li>' . $value . '</li>';
    }
    $breadcrumbs .= '<li>' . drupal_get_title() . '</li>';
    $breadcrumbs .= '</ul>';  
    return $breadcrumbs;
  }
}

