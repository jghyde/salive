// $Id: $ mods for bootstrap for salive 2014
(function ($) {
  Drupal.behaviors.salivebootstrap = {
    attach: function (context, settings) {
	    $(window).resize(function() {
				equalHeights();
			});
      $('.death-notice-controls').hide();
      $('.death-notice').click(function() {
        $(this).children('.death-notice-controls').toggle();
      });
      
      $('.event-sale').equalHeights();
      $('.view-id-events .thumbnail').equalHeights();
      $('.view-obituaries .obit').equalHeights();
      $('.view-newsthumbs li.col-md-2').equalHeights();
      $('#block-views-news-thumbs-block li.views-row').equalHeights();
      $('.view-id-News .views-row').equalHeights();
      $('#editorspick .view-content, #editorspick .views-row').equalHeights();
    }
  };
})(jQuery);
