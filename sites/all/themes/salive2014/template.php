<?php

/**
 * @file template.php
 */
/**
 * Implements hook_preprocess_node($vars)
 */
function salive2014_preprocess_node(&$vars) {
  if (isset($vars['display_submitted'])) {
    $account = profile2_load($vars['uid']);
    $name = ($account->field_first_name[LANGUAGE_NONE][0]['safe_value'] ? $account->field_first_name[LANGUAGE_NONE][0]['safe_value'] . ' ': '');
    $name .= ($account->field_last_name[LANGUAGE_NONE][0]['safe_value'] ? $account->field_last_name[LANGUAGE_NONE][0]['safe_value'] : '');
    $bio = $account->field_short_bio[LANGUAGE_NONE][0]['safe_value'];
    $items = array();
    (!empty($account->field_facebook_url[LANGUAGE_NONE][0]['value']) ? $items[] = l('Facebook', $account->field_facebook_url[LANGUAGE_NONE][0]['value'], array('attributes' => array('class' => array('facebook-small')))) : '');
    (!empty($account->field_twitter_url[LANGUAGE_NONE][0]['value']) ? $items[] = l('Twitter', $account->field_twitter_url[LANGUAGE_NONE][0]['value'], array('attributes' => array('class' => array('twitter-small')))) : '');
    (!empty($account->field_linkedin_url[LANGUAGE_NONE][0]['value']) ? $items[] = l('Twitter', $account->field_twitter_url[LANGUAGE_NONE][0]['value'], array('attributes' => array('class' => array('twitter-small')))) : '');
    $social = theme('item_list', array('items' => $items));
  }
}