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
    if ($.cookie('welcome_page') == null) {
      window.setTimeout(function(){
        window.location.href = '/welcome?destination=<?php print $dest; ?>?b=<?php print $randomString; ?>';
      },0);
    }
})(jQuery);
  </script>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
