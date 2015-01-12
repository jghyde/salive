<?php
/**
 * @file
 * liveevent.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function liveevent_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function liveevent_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function liveevent_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An event'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event_free' => array(
      'name' => t('Free Event Listing'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('We provide free event listings as a service to the community. In general, a Free Event Listing is valid for events that charge no fee to access, regardless of commercial or non-profit status of the entity holding the event.</p>
<p>Free listings are displayed on all of our website lists of events and in the LIVE! Daily Email on a non-priority basis. Free events are also syndicated to media partners in the region via our RSS and XML feeds. Thank you for submitting an event into our event calendar. If you require assistance with submitting your event, please upgrade to a <a href="/node/add/event-paid">Paid Event Listing</a>. There your event will be syndicated further and given higher visibility opportunities. And we can offer technical assistance.</p><p>
Please note that all Free Event Listings are subject to editorial staff moderation. When your event is published, we will notify you via email. Please allow at least one business day for review.</p>'),
    ),
    'event_paid' => array(
      'name' => t('Premium Event'),
      'base' => 'node_content',
      'description' => t('An event that is a paid event listing.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Please enter your paid event listing here. Some fields are intentionally set to "not required." We will review and edit as necessary paid events before publishing them. Some items are missing, we will fill them in for you and also optimize the listing for easy sharing across other media, search, and social media.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
