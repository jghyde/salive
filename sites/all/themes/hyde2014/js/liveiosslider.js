// $Id: $
(function ($) {
  Drupal.behaviors.brisocecontentflow = {
    attach: function (context, settings) {
			$('ul.pager li.first').addClass('selected');
      /* some custom settings */
			iosSlideIt('.iosSlider.field--field-image--event');
			iosSlideIt('.iosSlider.field--field-image--artist');
			iosSlideIt('.iosSlider.field--field-image--article');
		}
  }

	function iosSlideIt(selector) {
		function slideChange(args) {
			$(selector + ' ul.pager li').removeClass('selected');
			$(selector + ' ul.pager li').removeClass('first');
			$(selector + ' li:eq(' + (args.currentSlideNumber - 1) + ')').addClass('selected');
		}
		$(selector).iosSlider({
			snapToChildren: true,
			desktopClickDrag: true,
			tabToAdvance: true,
			keyboardControls: true,
			snapSlideCenter: true,
			infiniteSlider: true,
			navSlideSelector: '.iosSlider ul.pager li',
			onSlideChange: slideChange,
		});
	}
})(jQuery);
