// $Id: $
(function(e){function t(t){function n(n){e(".words").hide();e(t+" .words").fadeIn(500)}e(t).iosSlider({snapToChildren:!0,desktopClickDrag:!0,tabToAdvance:!0,keyboardControls:!0,snapSlideCenter:!0,infiniteSlider:!0,autoSlide:!0,autoSlideTimer:3e3,autoSlideHoverPause:!0,responsiveSlides:!0,onSlideChange:n})}Drupal.behaviors.brisocecontentflow={attach:function(e,n){t(".region-home-slider .iosslider")}}})(jQuery);