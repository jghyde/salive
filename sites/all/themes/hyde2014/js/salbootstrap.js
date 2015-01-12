// $Id: $ mods for bootstrap for salive 2014
(function ($) {
  Drupal.behaviors.salivebootstrap = {
    attach: function (context, settings) {
      $('.death-notice-controls').hide();
      $('.death-notice').click(function() {
        $(this).children('.death-notice-controls').toggle();
      });
      
      $('.event-sale').equalHeights();
      $('.events-wrapper .thumbnail').equalHeights();
      $('.view-obituaries .obit').equalHeights();
      $('.view-newsthumbs li.col-md-2').equalHeights();
      
    }
  };
})(jQuery);
