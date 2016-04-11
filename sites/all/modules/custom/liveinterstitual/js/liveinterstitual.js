// LIVE! Custom Video Player by Joe Hyde, @realJoeHyde 4/10/2016
(function($){
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
      if (/(sanangelolive)/.test(document.referrer)) {
        live = 1;
      }

        if (google == 0 && live == 0) {
          $(document).ready(function(){
            $('#counter').hide();
            $('#block-liveinterstitual-interstitualtag').hide();
            $('#block-liveinterstitual-interstitualtag').empty();
            screenw = $(window).width();
            var pct = 0.8;
            if (screenw < 779) {
              pct = 1;
            }
            $('#block-liveinterstitual-interstitualtag').css('width', screenw * pct + 'px');
            w = $('#block-liveinterstitual-interstitualtag').width();
            $('#block-liveinterstitual-interstitualtag').height((w * 9/16) + 60);
            $('#block-liveinterstitual-interstitualtag').css('background', '#ffffff url("/sites/all/modules/custom/liveinterstitual/assets/ajax-loader.gif") 50% 50% no-repeat');
             $('#block-liveinterstitual-interstitualtag').popup({
              autoopen: true,
              blur: false,
              detach: true,
              opacity: 0.85,
              autozindex: true,
              onopen: function() {
                $('#block-liveinterstitual-interstitualtag').show();
                $('#block-liveinterstitual-interstitualtag').load("/get/ajax/wistia");
                $('#block-liveinterstitual-interstitualtag').css('background', '#ffffff');
              }
            });
            window._wq = window._wq || [];
            _wq.push({ "_all": function(video) {

            var counter = 8;
            $('#counter').show(500);
            span = document.getElementById("counter");
            video.ready(function() {
              setInterval(function() {
                counter--;
                if (counter >= 0) {
                  span.innerHTML = 'Skip this ad in ' + counter + ' seconds';
                }
 
                if (counter === 0) {
                  clearInterval(counter);
                  //Set the cookie. They earned it
                  if( $.cookie('welcome_page') == null ) {
                    $.cookie('welcome_page', 1, {
                      expires: 1,
                      path: '/',
                      domain: document.domain,
                    });
                  }
                  span.innerHTML = 'Click Here to close.  X';
                  /*$('#block-liveinterstitual-interstitualtag_wrapper').click(function() {
                    video.remove();
                    $('#block-liveinterstitual-interstitualtag').popup('hide');
                    $('#block-liveinterstitual-interstitualtag').remove();
                    $('#block-liveinterstitual-interstitualtag_wrapper').remove();
                  });*/
                  $('#counter').click(function() {
                    video.remove();
                    $('#block-liveinterstitual-interstitualtag').popup('hide');
                    $('#block-liveinterstitual-interstitualtag').remove();
                    $('#block-liveinterstitual-interstitualtag_wrapper').remove();
                  });
                  video.bind("end", function() {
                    setTimeout(function() {
                      video.remove();
                      $('#block-liveinterstitual-interstitualtag').popup('hide');
                      $('#block-liveinterstitual-interstitualtag').remove();
                      $('#block-liveinterstitual-interstitualtag_wrapper').remove();
                    }, 10000);
                  });
                } 
              }, 1000);
            });
          }});
        });
      }
    }
  }
})(jQuery);
