<?php
/**
 * @file template.php
 */
/**
 * Returns the correct span class for a region
 */
function _hyde2014_content_span($columns = 1) {
  $class = FALSE;
  
  switch($columns) {
    case 1:
      $class = 'span12';
      break;
    case 2:
      $class = 'span8';
      break;
    case 3:
      $class = 'span5';
      break;
  }
  return $class;
}

 /**
  * Implements theme_field()
  */
function hyde2014_field__field_image($vars) {
  if (!in_array('field__field_image__insert', $vars['theme_hook_suggestions']) &&
  !in_array('field__field_image__venue', $vars['theme_hook_suggestions']) &&
  $vars['element']['#bundle'] != 'video') {
    $out = '';
    $rendered_pager = '';
    $pager = array();
    $count = 1;
    foreach($vars['items'] as $k => $v) {
      $out .= '<div class="slide img-polaroid">';
      // Create Image Style Array:
      // First, fix the alt and titles
      if (empty($v['#item']['alt'])) {
        //try
        if (!empty($v['#item']['field_file_image_alt_text']['und'][0]['safe_value'])) {
          $v['#item']['alt'] = $v['#item']['field_file_image_alt_text']['und'][0]['safe_value'];
        }
      }
      if (empty($v['#item']['title'])) {
        //try
        if (!empty($v['#item']['field_file_image_title_text']['und'][0]['safe_value'])) {
          $v['#item']['title'] = $v['#item']['field_file_image_title_text']['und'][0]['safe_value'];
        }
      }
      $items = array(
        'style_name' => (isset($vars['items'][$k]['#image_style']) ? $vars['items'][$k]['#image_style'] : 'iosslider_node'),
        'path' => (isset($vars['items'][$k]['#item']['uri']) ? $v['#item']['uri'] : $v['#file']->uri),
        'width' => (isset($vars['items'][$k]['#item']['width']) ? $vars['items'][$k]['#item']['width'] : $v['#file']->metadata['width']),
        'height' => (isset($v['#item']['height']) ? $v['#item']['height'] : $v['#file']->metadata['width']),
        'alt' => (isset($v['#item']['alt']) ? $v['#item']['alt'] : $v['file']['#alt']),
        'title' => (isset($v['#item']['title']) ? $v['#item']['title'] : $v['file']['#title']),
      );
      $out .= theme('image_style', $items);
      $out .= '<div class="ios-caption">' . $v['#item']['title'] . '</div>';
      $out .= '</div>';
      $pager[] = $count;
      $count++;
      unset($items);
    }
    if (count($pager) < 2) {
      unset($pager);
    }
    else {
      $rendered_pager = theme('item_list', array('items' => $pager, 'attributes' => array('class' => array('pager'))));
    }
    $unique_class = end($vars['theme_hook_suggestions']);
    return '<div class="iosSlider clearfix field-image-node ' . str_replace('_', '-', $unique_class) . '"><div class="slider">' . $out . '</div>' . $rendered_pager . '</div>';
  }
}

/**
 * Override theme_breadrumb().
 *
 * Print breadcrumbs as a list, with separators.
 */
function hyde2014_breadcrumb($variables) {
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
    $breadcrumb[] = l('Home', '<front>', array('attributes' => array('title' => 'San Angelo LIVE! Home')));
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
        $breadcrumb[] = l('News', 'news', array('attributes' => array('title' => 'San Angelo News')));
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
        $breadcrumb[] = l('Events', 'events', array('attributes' => array('title' => 'All San Angelo Upcoming Events')));
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
        $breadcrumb[] = l('Events', 'events', array('attributes' => array('title' => 'All San Angelo Upcoming Events')));
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
        $breadcrumb[] = l('Events', 'events', array('attributes' => array('title' => 'All San Angelo Upcoming Events')));
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
            $add_to_path .= $piece . '/';
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
       $breadcrumbs .= '<li>' . $value . '<span class="divider">/</span></li>';
    }
    $breadcrumbs .= '<li>' . drupal_get_title() . '</li>';
    $breadcrumbs .= '</ul>';  
    return $breadcrumbs;
  }
}
/**
 * Overrides theme_breadcrumb().
 *
 * Print breadcrumbs as an ordered list.
 *
function coyote_breadcrumb($variables) {
  $output = '';
  $breadcrumb = $variables['breadcrumb'];
  // If it's a node, add some stuff to the array
  $last = end($variables['crumbs_breadcrumb_items']);
  if ($last['page_callback'] == 'node_page_view' ) {
    // Find out if it's a product
    $explosion = explode('/', $last['href']);
    $nid = $explosion[1];
    $node = node_load($nid);
    if ($node->type == 'product') {
       // Reset $breadcrumb to get rid of the CRUD
       $breadcrumb = array();
       // First is HOME
       $breadcrumb[] = l('Home', '<front>', array('attributes' => array('title' => 'Home page')));
       // Next is ALL PRODUCTS
       $breadcrumb[] = l('All products', 'products');
       // Next is the Collection taxonomy tree
       $tids = taxonomy_get_parents_all($node->field_collection[LANGUAGE_NONE][0]['tid']);
       // The parents appear after the main term, so we need to reverse the array
       $tids = array_reverse($tids);
       $path = 'products';
       foreach($tids as $tid) {
         $tid->name = trim($tid->name);
         $testpath = $path . '/' . strtolower(str_replace(' ', '-', $tid->name));
         if (drupal_valid_path('products/' . $path)) {
          $path = $testpath;
          $breadcrumb[] = l($tid->name, $path);
         }
         else {
          drupal_set_message(t('Breadcrumbs cannot verify path for %d. Please call (325) 340-1238 and have the views path checked for %d',
            array('%d' => $testpath)));
         }
        //$breadcrumb[] = l()
       }
       // Finally the TITLE set to class active
       $breadcrumb[] = $node->title;
     }

    // Next, find out what kind of node it is.
  }
  // Determine if we are to display the breadcrumb.
  $bootstrap_breadcrumb = theme_get_setting('bootstrap_breadcrumb');
  if (($bootstrap_breadcrumb == 1 || ($bootstrap_breadcrumb == 2 && arg(0) == 'admin')) && !empty($breadcrumb)) {
    $output = theme('item_list', array(
      'attributes' => array(
        'class' => array('breadcrumb'),
      ),
      'items' => $breadcrumb,
      'type' => 'ol',
    ));
  }
  return $output;
}
// */
function hyde2014_preprocess_page(&$vars) {
  // Add add-to-homescreen bookmark web app thing
  drupal_add_js(drupal_get_path('theme', 'hyde2014') . '/add-to-homescreen/src/addtohomescreen.min.js');
  drupal_add_css(drupal_get_path('theme', 'hyde2014') . '/add-to-homescreen/style/addtohomescreen.css');
  // Add imagesloaded.js
  drupal_add_js(libraries_get_path('eventEmitter') . '/EventEmitter.min.js');
  drupal_add_js(libraries_get_path('eventie') . '/eventie.js');
  drupal_add_js(libraries_get_path('imagesloaded') . '/imagesloaded.js');
  // Add equalheights.js
  drupal_add_js(libraries_get_path('equalheights') . '/jquery.equalheights.min.js');
  // Add infield labels
  drupal_add_js(libraries_get_path('infieldlabels') . '/src/jquery.infieldlabel.js');
  // Add the masonry library:
  //drupal_add_js(drupal_get_path('theme', 'hyde2014') . '/js/masonry.pkgd.min.js');
  // Replacing masonry with Isotope
  //drupal_add_js(libraries_get_path('isotope') . '/jquery.isotope.min.js');
  drupal_add_js(drupal_get_path('theme', 'hyde2014') . '/js/livemasonry-ck.js');
  drupal_add_js(drupal_get_path('theme', 'hyde2014') . '/js/min/salbootstrap-min.js');
  drupal_add_js(libraries_get_path('iosslider') . '/_src/jquery.iosslider.min.js', array('cache' => FALSE,'weight' => 1000, 'preprocess' => FALSE));   
  // Add the IOS Swiper Libraries and custom scripts  
  if ($vars['is_front']) {
    drupal_add_js(drupal_get_path('theme', 'hyde2014') . '/js/liveiosslider-home-ck.js', array('cache' => FALSE,'weight' => 1001, 'preprocess' => FALSE));
  }
  else {
    drupal_add_js(drupal_get_path('theme', 'hyde2014') . '/js/liveiosslider-min.js', array('cache' => FALSE,'weight' => 1001, 'preprocess' => FALSE));
  }
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
    if ($vars['node']->type == 'article') {
      if ($vars['node']->field_category['und'][0]['tid'] == 22) {
        $vars['title_suffix']['category']['#markup'] = '<span class="obit-dates">Opinion</span>';
      }
    }
    if ($vars['node']->type == 'insert') {
      $vars['theme_hook_suggestions'][] = 'page__insert';
    }
    if ($vars['node']->type == 'obit_paid') {
      // date_format_date($date, $type = 'medium', $format = '', $langcode = NULL)
      //date_format(date_create($time), $format);
      $death = date_format(date_create($vars['node']->field_date_of_death[LANGUAGE_NONE][0]['value']), 'M j, Y');
      $birth = date_format(date_create($vars['node']->field_date_of_birth[LANGUAGE_NONE][0]['value']), 'M j, Y');
      $vars['title'] = drupal_get_title();
      $vars['title_suffix']['obit_dates']['#markup'] = '<span class="obit-dates">' . $birth . ' - ' . $death . '</span>';
    }  
  }
}

/**
 * Implements template_preprocess_field()
 */
function hyde2014_preprocess_field(&$vars, $hook) {
  if ($vars['field_name_css'] == 'field-portrait-image') {
    $vars['classes_array'] = array_merge($vars['classes_array'], array('pull-left','clearfix'));
    $vars['classes_array'][] = 'img-polaroid';
  }
  if ($vars['field_name_css'] == 'field-write-your-tribute') {
    $vars['items'][0]['#title'] = 'Sign Your Tribute';
    $vars['classes_array'] = array_merge($vars['classes_array'], array('pull-right','btn-large', 'btn', 'btn-success'));
  }
  if ($vars['field_name_css'] == 'field-funeral-home') {
    $vars['classes_array'] = array_merge($vars['classes_array'], array('clearfix'));
  }
}


/**
 * Implements theme_field()
 */
function hyde2014_field__field_write_your_tribute($vars) {
  $out = '<a href="' . $vars['element']['#items'][0]['value'] . '" class="' . $vars['classes'] . '" title="' . $vars['element']['#items'][0]['title'] . '" target="_blank"><i class="white glyphicons pen" style="margin-top:-25px;padding-left:35px;margin-left:-5px;"></i>Write Your Tribute</a>';
  return $out;
}

 /**
 * Implements hook_preprocess_node($vars)
 */
function hyde2014_preprocess_node(&$vars) {
  // Add the IOS Swiper Libraries and custom scripts
  //drupal_add_js(libraries_get_path('iosslider') . '/_src/jquery.iosslider.min.js', array('cache' => FALSE,'weight' => 1000, 'preprocess' => FALSE));
  //drupal_add_js(drupal_get_path('theme', 'hyde2014') . '/js/liveiosslider-ck.js', array('cache' => FALSE,'weight' => 1000, 'preprocess' => FALSE));
  /*
    *   - style_name: The name of the style to be used to alter the original image.
    *   - path: The path of the image file relative to the Drupal files directory.
    *     This function does not work with images outside the files directory nor
    *     with remotely hosted images. This should be in a format such as
    *     'images/image.jpg', or using a stream wrapper such as
    *     'public://images/image.jpg'.
    *   - width: The width of the source image (if known).
    *   - height: The height of the source image (if known).
    *   - alt: The alternative text for text-based browsers.
    *   - title: The title text is displayed when the image is hovered in some
    *     popular browsers.
    *   - attributes: Associative array of attributes to be placed in the img tag.
   */
  if (isset($vars['display_submitted']) && $vars['display_submitted'] == 1) {
    // Place the "Sell the comments and login" below the author, where the comments WOULD be
    $sell = '';
    if (user_is_anonymous()) {
      if ($vars['type'] == 'article' || $vars['type'] == 'event') {
        $sell = hyde2014_sellthelogin();
      }
    }
    $vars['sell'] = $sell;
    if ($vars['display_submitted']) {
      $account = profile2_load_by_user($vars['uid'], 'main');
      $imgvars = $account->field_profile_picture[LANGUAGE_NONE][0];
      if ($vars['is_admin'] == TRUE && empty($account->field_first_name[LANGUAGE_NONE][0]['safe_value']) || empty($account->field_last_name[LANGUAGE_NONE][0]['safe_value'])) {
        drupal_set_message(t('The author bio sheet is incomplete. Specificall a first or last name is not set. !fix', array('!fix' => l('Please fix it here.', 'user/' . $accout->uid . '/edit'))));
      }
      $name = ($account->field_first_name[LANGUAGE_NONE][0]['safe_value'] ? $account->field_first_name[LANGUAGE_NONE][0]['safe_value'] . ' ': '');
      $name .= ($account->field_last_name[LANGUAGE_NONE][0]['safe_value'] ? $account->field_last_name[LANGUAGE_NONE][0]['safe_value'] : '');
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
        $pic = l($pic, $link, array('attributes' => array('class' => array('thumbnail')), 'html' => TRUE));
      }
      $bio = $account->field_short_bio[LANGUAGE_NONE][0]['safe_value'];
      $items = array();
      (!empty($account->field_facebook_url[LANGUAGE_NONE][0]['value']) ? $items[] = l($name . ' on Facebook', $account->field_facebook_url[LANGUAGE_NONE][0]['value'], array('attributes' => array('title' => 'Facebook', 'class' => array('social', 'facebook')))) : '');
      (!empty($account->field_twitter_url[LANGUAGE_NONE][0]['value']) ? $items[] = l($name . ' on Twitter', $account->field_twitter_url[LANGUAGE_NONE][0]['value'], array('attributes' => array('title' => 'Twitter', 'class' => array('social', 'twitter')))) : '');
      (!empty($account->field_linkedin_url[LANGUAGE_NONE][0]['value']) ? $items[] = l($name . ' on LinkedIn', $account->field_linkedin_url[LANGUAGE_NONE][0]['value'], array('attributes' => array('title' => 'LinkedIn', 'class' => array('social', 'linked_in')))) : '');
      (!empty($account->field_google_plus_url[LANGUAGE_NONE][0]['value']) ? $items[] = l($name . ' on Google +', $account->field_google_plus_url[LANGUAGE_NONE][0]['value'], array('attributes' => array('title' => 'Google Plus', 'class' => array('social', 'google_plus')))) : '');
      // If the Author allows Contact Form:
      $account_drupal = user_load($vars['uid']);
      if (isset($account_drupal->data['contact']) && $account_drupal->data['contact'] == 1) {
        $items[] = l('Email', 'user/' . $account_drupal->uid . '/contact', array('attributes' => array('title' => 'e-mail', 'class' => array('social', 'e-mail'))));
      }
      $social = theme('item_list', array('items' => $items));
      $out = '<h4>About the Author</h4><div class="profile2-image img-polaroid">' . $pic . '</div>';
      (!empty($account->field_google_plus_url[LANGUAGE_NONE][0]['safe_value']) ? $linked_name = l($name, $account->field_google_plus_url[LANGUAGE_NONE][0]['safe_value']) : $linked_name = l($name, 'user/' . $account->uid));
      $out .= '<div class="profile2-words"><h3>' . $linked_name . '</h3>' . '<p>' . $bio . '</p>' . $social;
      $vars['submitted'] =  $out;
      if (isset($account->field_google_plus_url[LANGUAGE_NONE][0]['safe_value'])) {
        $byline = 'by ' . l($name, $account->field_google_plus_url[LANGUAGE_NONE][0]['safe_value']);
      }
      else {
        $byline = 'by ' . l($name, 'user/' . $account->uid);
      }
      $date = date('M j, Y', $vars['created']);
      $vars['byline'] = '<p class="author">' . $byline . '</p><p class="published-date">' . $date . '</p>';
    }
  }

}

/**
 * Helper func to create anonymous login for comments
 */
function hyde2014_sellthelogin() {
  if (user_is_anonymous()) {
    $out = '<div class="comment-signup well clearfix">';
    $out .= '<div class="title-wrapper">';
    $out .= '<h3>Sign-Up and Comment</h3>';
    $out .= l('Login', 'user/login', array('query' => drupal_get_destination(), 'attributes' => array('class' => array('btn', 'btn-success',))));
    $out .= '</div>';
    $out .= '<div class="comment-anonymous-image pull-left">';
    $out .= '<img class="img-polaroid" src="/sites/all/themes/hyde2014/images/glyphicon-add-user.png" alt="Sign up for San Angelo TX news and rant with us!" height="79" width="100" />';
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
 * Implements template_preprocess_region()
 */
function hyde2014_preprocess_region(&$variables) {
  if ($variables['elements']['#region'] == 'home_slider') {
    $variables['classes_array'][] = 'container';
  }
}

/**
 * Implements hook_preprocess_comment()
 */
function hyde2014_preprocess_comment(&$variables) {
  $comment = $variables['elements']['#comment'];
  //add bootstrap button classes:
  $variables['content']['links']['comment']['#links']['comment-edit']['attributes']['class'][] = 'btn';
  //$variables['content']['links']['comment']['#links']['comment-edit']['attributes']['class'][] = 'btn-primary';
  $variables['content']['links']['comment']['#links']['comment-edit']['attributes']['class'][] = 'btn-xs';

  $variables['content']['links']['comment']['#links']['comment-delete']['attributes']['class'][] = 'btn';
  $variables['content']['links']['comment']['#links']['comment-delete']['attributes']['class'][] = 'btn-primary';
  $variables['content']['links']['comment']['#links']['comment-delete']['attributes']['class'][] = 'btn-xs';

  $variables['content']['links']['comment']['#links']['comment-reply']['attributes']['class'][] = 'btn';
  //$variables['content']['links']['comment']['#links']['comment-reply']['attributes']['class'][] = 'btn-primary';
  $variables['content']['links']['comment']['#links']['comment-reply']['attributes']['class'][] = 'btn-xs';
   
  $node = $variables['elements']['#node'];
  $variables['comment'] = $comment;
  $variables['node'] = $node;
  $account = profile2_load_by_user($comment->uid, 'main');
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
  (empty($picture) ? $picture = '<img src ="/' . drupal_get_path('theme', 'hyde2014') . '/images/anonymous_pic.png" height="50" width="50" alt="No Picture" />' : '');
  $variables['author'] = l($name, 'user/' . $comment->uid . '/contact');

  $variables['created'] = date('M d, Y g:i a', $comment->created);

  // Avoid calling format_date() twice on the same timestamp.
  if ($comment->changed == $comment->created) {
    $variables['changed'] = $variables['created'];
  }
  else {
    $variables['changed'] = date('M d, Y g:i a', $comment->changed);
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
function hyde2014_form_user_register_form_alter(&$form, &$form_state, $form_id) {
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
function hyde2014_form_alter(&$form, $form_state, $form_id) {
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
 *
 */
function hyde2014_image_formatter($variables) {
  if (isset($variables['item']['#link']) && !empty($variables['item']['#link'])) {
    $link = $variables['item']['#link'];
    unset($variables['item']['#link']);
  }
  $item = $variables['item'];
  $image = array(
    'path' => $item['uri'],
  );

  if (array_key_exists('alt', $item)) {
    $image['alt'] = $item['alt'];
  }

  if (isset($item['attributes'])) {
    $image['attributes'] = $item['attributes'];
  }

  if (isset($item['width']) && isset($item['height'])) {
    $image['width'] = $item['width'];
    $image['height'] = $item['height'];
  }

  // Do not output an empty 'title' attribute.
  if (isset($item['title']) && drupal_strlen($item['title']) > 0) {
    $image['title'] = $item['title'];
  }

  if ($variables['image_style']) {
    $image['style_name'] = $variables['image_style'];
    $output = theme('image_style', $image);
  }
  else {
    $output = theme('image', $image);
  }

  // The link path and link options are both optional, but for the options to be
  // processed, the link path must at least be an empty string.
  if (isset($variables['path']['path'])) {
    $path = $variables['path']['path'];
    $options = isset($variables['path']['options']) ? $variables['path']['options'] : array();
    // When displaying an image inside a link, the html option must be TRUE.
    $options['html'] = TRUE;
    $output = l($output, $path, $options);
  }
  if (isset($link) && !empty($link)) {
    //make the pic a link
    $output = l($output, $link, array(
                                      'html' => TRUE,
                                      attributes => array ('target' => '_blank')));
  }
  return $output;
}

/**
 * Implements theme_date_repeat_display()
 */
function hyde2014_date_repeat_display($vars) {
  $usedates = array();
  $dates = $vars['entity']->field_date['und'];
  //Find out what today is.
  $today = strtotime("now");
  foreach($dates as $date) {
    $timestamp = date("U",strtotime($date['value']));
    if ($today <= $timestamp) {
      $usedates[] = $date['value'];
    }
  }
  // The date to use for display SHOULD be the first item in the array
  $format_types = system_get_date_types();
  $date_formats = system_get_date_formats();
  $output = format_date(date("U",strtotime($usedates[0])), 'small_date_time');
  $output = '<div>' . $output . '</div>';
  return $output;
}
