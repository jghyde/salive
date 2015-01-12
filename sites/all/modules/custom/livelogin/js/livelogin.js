// $Id: $ Livelogin JS
(function ($) {
  Drupal.behaviors.livelogin = {
    attach: function (context, settings) {
      // Facebook share
      $('.fb-share').click(function(e){
        e.preventDefault();
        FB.ui(
          {
            method: 'feed',
            name: $( ".fb-share" ).data( "name" ),
            link: $( ".fb-share" ).data( "url" ),
            picture:  $( ".fb-share" ).data( "img" ),
            caption:  $( ".fb-share" ).data( "caption" ),
            description:  $( ".fb-share" ).data( "desc" ),
            message: ''
          }
        );
        return false;
      });
      // Twitter Share

      $('.twitter-popup').click(function(e) {
        e.preventDefault();
        var width  = 575,
        height = 400,
        left   = ($(window).width()  - width)  / 2,
        top    = ($(window).height() - height) / 2,
        url    = this.href,
        opts   = 'status=1' +
                 ',width='  + width  +
                 ',height=' + height +
                 ',top='    + top    +
                 ',left='   + left;
    
        window.open(url, 'twitter', opts);
 
        return false;
      });

      if ($.cookie("register_comment_words")) {
        var translated = $.cookie("register_comment_words").replace(/\+/g, ' ');
        $('form.comment-form textarea').append(translated);
        var divPosition = $('.comment-wrapper .comment-form').offset();
        $('html, body').animate({scrollTop: divPosition.top}, "slow");
        $.cookie("register_comment_words", null, { path: '/' });
        //$.removeCookie('register_comment_words', { path: '/' });
      }
    }
  }
})(jQuery);