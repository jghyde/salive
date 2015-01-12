// $Id: $
(function ($) {
  Drupal.behaviors.brisocecontentflow = {
    attach: function (context, settings) {
			// $('ul.pager li.first').addClass('selected');
      /* some custom settings */
			iosSlideIt('.region-home-slider .iosslider');
		}
  }
	function iosSlideIt(selector) {
		$(selector).iosSlider({
			snapToChildren: true,
			desktopClickDrag: true,
			tabToAdvance: true,
			keyboardControls: true,
			snapSlideCenter: true,
			infiniteSlider: true,
			autoSlide: true,
			autoSlideTimer: 3000,
			autoSlideHoverPause: true,
			responsiveSlides: true,
			//navSlideSelector: '.iosSlider ul.pager li',
			onSlideChange: slideChange,
		});
		function slideChange(args) {
			$('.words').hide();
			$(selector + ' .words').fadeIn(500);
		}
	}
})(jQuery);
