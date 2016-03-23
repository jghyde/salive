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
    // by jghyde
    function hasCookies() {
      return (navigator.cookieEnabled);
    }
    if ($.cookie('welcome_page') == null) {
      if (hasCookies() == true) {
      
        // if the referrer is not SEO
        var google = 0;
        if(/www\.(google|bing|yahoo)/.test(document.referrer)){
          google = 1;
          // set the cookie
          $.cookie('welcome_page', 1, {
            expires: 1,
            path: '/',
            domain: document.domain,
          });
        }
        // if the referrer is not us
        var live = 0;
        if (/(sanangelolive)\.com/.test(document.referrer)) {
          live = 1;
        }
        // if not seo, then show the page
        if (google == 0 && live == 0) {
          window.setTimeout(function(){
            window._wq = window._wq || [];
            _wq.push({ "_all": function(video) {
              video.popover.show();
              $('.wistia_placebo_close_button').hide();
            }});
            
            //window.location.href = '/welcome?destination=<?php print $dest; ?>&b=<?php print $randomString; ?>';
            },0);
          }
        }
      }
})(jQuery);
  </script>