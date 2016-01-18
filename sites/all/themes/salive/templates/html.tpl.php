<!DOCTYPE html>
<html lang="<?php print $language->language; ?>">
<!-- Theme developed by Dylan Underwood - http://www.DylanUnderwood.me/ -->
<head>
  <meta charset="utf-8">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <!--[if lt IE 8]>
    <meta http-equiv="refresh" content="0;URL=http://sanangelolive.com/ie.php">
  <![endif]-->
  <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <?php print $scripts; ?>
  <?php
  if ($_GET['q'] == 'node') {
    $dest = '/';
  }
  elseif ($_GET['q'] == 'welcome') {
    $dest = '/';
  }
  else {
    $dest = $_GET['q'];
  }
  $length = 10;
  $randomString = substr(str_shuffle("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"), 0, $length);
  ?>
  <script>
(function($){
    function hasCookies() {
      return (navigator.cookieEnabled);
    }
    if ($.cookie('welcome_page') == null) {
      if (hasCookies() == true) {
        //code
        window.setTimeout(function(){
          window.location.href = '/welcome?destination=<?php print $dest; ?>?b=<?php print $randomString; ?>';
        },0);
      }
      else {
        if (document.referrer.indexOf('sanangelolive.com') >= 0) {
        }
        else {
          window.setTimeout(function(){
            window.location.href = '/welcome?destination=<?php print $dest; ?>?b=<?php print $randomString; ?>';
          },0);          
        }
      }
    }
})(jQuery);
  </script>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
<!-- Facebook Pixel Code -->
<script>
!function(f,b,e,v,n,t,s){if(f.fbq)return;n=f.fbq=function(){n.callMethod?
n.callMethod.apply(n,arguments):n.queue.push(arguments)};if(!f._fbq)f._fbq=n;
n.push=n;n.loaded=!0;n.version='2.0';n.queue=[];t=b.createElement(e);t.async=!0;
t.src=v;s=b.getElementsByTagName(e)[0];s.parentNode.insertBefore(t,s)}(window,
document,'script','//connect.facebook.net/en_US/fbevents.js');

fbq('init', '1092781257421142');
fbq('track', "PageView");</script>
<noscript><img height="1" width="1" style="display:none"
src="https://www.facebook.com/tr?id=1092781257421142&ev=PageView&noscript=1"
/></noscript>
<!-- End Facebook Pixel Code -->

</body>
</html>
