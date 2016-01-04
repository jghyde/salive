// $Id: $ mods for bootstrap for salive 2014
(function ($) {
  Drupal.behaviors.salivebootstrap = {
    attach: function (context, settings) {
        function sliderResize() {
            var w;
            w = $('#openhouseSlide').width();
            var height = w * 0.75;
            $('#openhouseSlide').css('height', height);
            $('.iosslider').css('height', height);
            $('.iosslider .slider .slide').css('height', height);
            var pager = height/2 - 36;
            $('#prev').css('top', pager);
            $('#next').css('top', pager);
        }
        $('.iosslider').iosSlider({
            snapToChildren: true,
            desktopClickDrag: true,
            infiniteSlider: true,
            responsiveSlideContainer: true,
            responsiveSlides: true,
            navNextSelector: '#next',
            navPrevSelector: '#prev',
            onSliderResize: sliderResize,
        });
      sliderResize();
    }
  };
})(jQuery);

  