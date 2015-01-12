// $Id: $ mods for bootstrap for salive 2014
(function ($) {
  Drupal.behaviors.salivemasonry = {
    attach: function (context, settings) {
      var $container = $('.view-events .view-content');
      $container.imagesLoaded( function(){
        $('.view-events .views-row').width(($container.width() / 4) - 20);
        equalHeight($('.view-events .views-row'));
      });
    }
  }
  function equalHeight(group) {
     tallest = 0;
     group.each(function() {
        thisHeight = $(this).height();
        if(thisHeight > tallest) {
           tallest = thisHeight;
        }
     });
     group.height(tallest);
  }
})(jQuery);