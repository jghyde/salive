// $Id: $
(function ($) {
  Drupal.behaviors.liveiossliderhome = {
    attach: function (context, settings) {
      /* some custom settings */
			iosSlideHome('#homeslider .slider');
		}
  }
	function iosSlideHome(selector) {
		$(selector).iosSlider({
			snapToChildren: true,
			desktopClickDrag: true,
			tabToAdvance: true,
			keyboardControls: true,
			snapSlideCenter: true,
			infiniteSlider: true,
			navSlideSelector: '.iosSlider ul.pager li',
			//onSlideChange: slideChange,
		});
		function slideChange(args) {
			$(selector + ' ul.pager li').removeClass('selected');
			$(selector + ' ul.pager li').removeClass('first');
			$(selector + ' li:eq(' + (args.currentSlideNumber - 1) + ')').addClass('selected');
		}
	}
})(jQuery);