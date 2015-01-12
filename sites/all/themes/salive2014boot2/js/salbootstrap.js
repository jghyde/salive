// $Id: $ mods for bootstrap for salive 2014
(function ($) {
  Drupal.behaviors.salivebootstrap = {
    attach: function (context, settings) {
      // Make the main navbar dropdown:
      $('.dropdown-toggle').dropdown();
      // Collapses the navbar
      $('.nav-collapse').collapse({
        toggle: true
      });
      //$('.views-field.views-field-body').hide();
      $(".view-events img.event-feed-image").mouseover(function() {
        $(this).closest('.views-row').children('.views-field-body').slideDown(300);
      }).mouseout(function() {
        $(this).closest('.views-row').children('.views-field-body').slideUp(300);
      });
    }
  };
  
  $(window).resize(function() {
      $('.nav-collapse').collapse({
        toggle: true
      });
  });
  $('div.accordion').collapse({
    toggle: false
  });

 

})(jQuery);
