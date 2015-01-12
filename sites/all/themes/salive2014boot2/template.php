<?php

/**
 * @file template.php
 */

 /**
  * Implements theme_field()
  */
function salive2014boot2_field__field_image($vars) {
  if (!in_array('field__field_image__venue', $vars['theme_hook_suggestions'])) {
    // Add the IOS Swiper Libraries and custom scripts
    drupal_add_js(libraries_get_path('iosslider') . '/_src/jquery.iosslider.min.js', array('cache' => FALSE,'weight' => 1000, 'preprocess' => FALSE));
    drupal_add_js(drupal_get_path('theme', 'salive2014boot2') . '/js/liveiosslider.js', array('cache' => FALSE,'weight' => 1000, 'preprocess' => FALSE));
    $out = '';
    $pager = array();
    $count = 1;
    foreach($vars['items'] as $k => $v) {
      $out .= '<div class="slide">';
      // Create Image Style Array:
      $items = array(
        'style_name' => (isset($vars['items'][$k]['#image_style']) ? $vars['items'][$k]['#image_style'] : 'iosslider_node'),
        'path' => (isset($vars['items'][$k]['#item']['uri']) ? $v['#item']['uri'] : $v['#file']->uri),
        'width' => (isset($vars['items'][$k]['#item']['width']) ? $vars['items'][$k]['#item']['width'] : $v['#file']->metadata['width']),
        'height' => (isset($v['#item']['height']) ? $v['#item']['height'] : $v['#file']->metadata['width']),
        'alt' => (isset($v['#item']['alt']) ? $v['#item']['alt'] : $v['file']['#alt']),
        'title' => (isset($v['#item']['title']) ? $v['#item']['title'] : $v['file']['#title']),
      );
      $out .= theme('image_style', $items);
      $out .= '<div class="ios-caption">' . (isset($vars['items'][$k]['#item']['title']) ?  $vars['items'][$k]['#item']['title'] : $v['file']['#title']) . '</div>';
      $out .= '</div>';
      $pager[] = $count;
      $count++;
      unset($items);
    }
    $unique_class = end($vars['theme_hook_suggestions']);
    return '<div class="iosSlider ' . str_replace('_', '-', $unique_class) . '"><div class="slider">' . $out . '</div>' . theme('item_list', array('items' => $pager, 'attributes' => array('class' => array('pager')))) . '</div>';
  }
}
 /**
 * Implements hook_preprocess_node($vars)
 */
function salive2014boot2_preprocess_node(&$vars) {
  // Add the IOS Swiper Libraries and custom scripts
  drupal_add_js(libraries_get_path('iosslider') . '/_src/jquery.iosslider.min.js', array('cache' => FALSE,'weight' => 1000, 'preprocess' => FALSE));
  drupal_add_js(drupal_get_path('theme', 'salive2014boot2') . '/js/liveiosslider.js', array('cache' => FALSE,'weight' => 1000, 'preprocess' => FALSE));
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
  if (isset($vars['display_submitted'])) {
    $account = profile2_load($vars['uid']);
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
      $pic = l($pic, $link, array('html' => TRUE));
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
    $out = '<div class="profile2-image">' . $pic . '</div>';
    (!empty($account->field_google_plus_url[LANGUAGE_NONE][0]['safe_value']) ? $linked_name = l($name, $account->field_google_plus_url[LANGUAGE_NONE][0]['safe_value']) : $linked_name = l($name, 'user/' . $account->uid));
    $out .= '<h4>About the Author</h4><div class="profile2-words"><h3>' . $linked_name . '</h3>' . '<p>' . $bio . '</p>' . $social . '</div>';
    $vars['submitted'] = $out;
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

function salive2014boot2_menu_link($vars) {
  $element = $vars['element'];
  $sub_menu = '';
  if ($element['#title'] == 'Home') {
    $element['#title'] = '<i class="halflings home"></i>' . $element['#title'];
    $element['#localized_options'] = array('html' => TRUE);
  }
  if ($element['#title'] == 'News') {
    $element['#title'] = '<i class="halflings globe"></i>' . $element['#title'];
    $element['#localized_options'] = array('html' => TRUE);    
  }
  if ($element['#title'] == 'Deals') {
    $element['#title'] = '<i class="halflings usd"></i>' . $element['#title'];
    $element['#localized_options'] = array('html' => TRUE);    
  }
  if ($element['#title'] == 'Events') {
    $element['#title'] = '<i class="halflings calendar"></i>' . $element['#title'];
    $element['#localized_options']['html'] = TRUE;
    $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
    $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    $element['#below']['#attributes']['class'] = array('dropdown-menu');
    $element['#below']['#attributes']['role'] = 'menu';
  }
  if ($element['#title'] == 'About') {
    $element['#title'] = '<i class="halflings info-sign"></i>' . $element['#title'];
    $element['#localized_options'] = array('html' => TRUE);    
  }
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);    if (isset($element['#below']['#attributes']) && count($element['#below']['#attributes']) > 0) { 
      $sub_menu = str_replace('ul class="', 'ul role="menu" class="dropdown-menu ', $sub_menu);
    }
  }


  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

function salive2014boot2_preprocess_page(&$vars) {
  if ($vars['is_front']) {
    drupal_add_js(drupal_get_path('theme', 'salive2014boot2') . '/js/liveiossliderhome.js');
  }
  // Add imagesloaded.js
  drupal_add_js(libraries_get_path('eventEmitter') . '/EventEmitter.min.js');
  drupal_add_js(libraries_get_path('eventie') . '/eventie.js');
  drupal_add_js(libraries_get_path('imagesloaded') . '/imagesloaded.js');
  // Add the masonry library:
  //drupal_add_js(drupal_get_path('theme', 'salive2014boot2') . '/js/masonry.pkgd.min.js');
  // Replacing masonry with Isotope
  //drupal_add_js(libraries_get_path('isotope') . '/jquery.isotope.min.js');
  drupal_add_js(drupal_get_path('theme', 'salive2014boot2') . '/js/livemasonry.js');
}

