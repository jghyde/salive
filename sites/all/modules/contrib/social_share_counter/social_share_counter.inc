<?php

/**
 * @file
 * File contains functions for individual share count from all Social service.
 */

/**
 * Function to get share count from facebook.
 * @param string $url
 */
function get_count_facebook($url) {
  $count = 0;
  $token = '163144447177|_UNDQYS5ucUGg9Vz_ipqc7Tv-WY';
  $response = _social_share_counter_parse("https://graph.facebook.com/v2.7/?id=" . $url . '&access_token=' . $token);
  $result = json_decode($response);
  if (isset($result->share)) {
    $tt = (int) $result->share->share_count + (int) $result->share->comment_count;
    $count = formatNumberAbbreviation($tt);
  }

  return $count;
}

/**
 * Function to get share count from Twitter.
 * @param string $url
 */
function get_count_twitter($url) {
  /* Twitter stopped allowing its API for share counts to be accessed in Nov. 2015.
   * The service newsharecounts.com is the best I've found, but you need to register
   * your domain there first in order for this feature to work.
   */
  $count = 0;
  $response = _social_share_counter_parse("http://public.newsharecounts.com/count.json?url=" . $url);
  $result = json_decode($response);
  if (isset($result->count)) {
    $result->count = formatNumberAbbreviation($result->count);
    $count = $result->count;
  }
  return $count;
}

/**
 * Function to get share count from LinkedIn.
 * @param string $url
 */
function get_count_linkedin($url) {
  $count = 0;
  $response = _social_share_counter_parse("http://www.linkedin.com/countserv/count/share?url=" . $url);
  $response_body_clean = preg_replace("/(^IN\.Tags\.Share\.handleCount\(|\);$)/", "", $response);
  $result = json_decode($response_body_clean);
  if (isset($result->count)) {
    $result->count = formatNumberAbbreviation($result->count);
    $count = $result->count;
  }
  return $count;
}

/**
 * Function to get share count from GooglePlus.
 * @param string $url
 */
function get_count_googleplus($url) {
  $count = 0;
  $response = _social_share_counter_parse("https://plusone.google.com/u/0/_/+1/fastbutton?url=" . $url . "&count=true");

  $dom = new DOMDocument();
  $dom->preserveWhiteSpace = FALSE;
  @$dom->loadHTML($response);
  $domxpath = new DOMXPath($dom);

  $filtered = $domxpath->query("//div[@id='aggregateCount']");
  if (isset($filtered->item(0)->nodeValue)) {
    $count = str_replace('>', '', $filtered->item(0)->nodeValue);
  }
  $count = formatNumberAbbreviation($count);
  return $count;
}

/**
 * Function to get share count from StumbleUpon.
 * @param string $url
 */
function get_count_stumbleupon($url) {
  $count = 0;
  $response = _social_share_counter_parse("http://www.stumbleupon.com/services/1.01/badge.getinfo?url=" . $url);

  $result = json_decode($response);
  if (isset($result->result->views)) {
    $count = formatNumberAbbreviation($result->result->views);
  }
  return $count;
}

/**
 * Funtion to get share count from Pinterest.
 * @param string $url
 */
function get_count_pinterest($url) {
  $count = 0;
  $response = _social_share_counter_parse("http://api.pinterest.com/v1/urls/count.json?callback=count&url=" . $url);
  $response = preg_replace('/^.*count\(/', '', $response);
  $response = preg_replace('/\)$/', '', $response);
  $result = json_decode($response);

  if (isset($result->count)) {
    $result->count = formatNumberAbbreviation($result->count);
    $count = (int) $result->count;
  }
  return $count;
}
/**
 * Function to format abbreviated number to numeric form.
 * @param int|string $number
 * @return int
 */
function formatNumberAbbreviation($number) {
  if ($number != 0 && preg_match('/B|M|K/i', $number)) {
    switch (strtolower(substr($number, -1))) {
      case 'k':
        $number*=1000;
        break;
      case 'm':
        $number*=1000000;
        break;
      case 'b':
        $number*=1000000000;
        break;
    }
  }
  return $number;
}
