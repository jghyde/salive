// $Id: $ Livelogin JS
(function ($) {
  Drupal.behaviors.livebreaking = {
    attach: function (context, settings) {
      var width = $('html').outerWidth()+$(window).scrollLeft();
      $('#slides').css('max-width',width - 20 + 'px');
      $(window).on('resize', function(){
        width = $('html').outerWidth()+$(window).scrollLeft();
        $('#slides').css('max-width',width - 20 + 'px');
      });
      $('#breakingFade').cycle({ 
        fx:      'turnDown', 
        delay:   -4000 
      });
    }
  }
})(jQuery);
