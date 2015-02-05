// $Id: $ mods for bootstrap for salive 2014
(function ($) {
  Drupal.behaviors.salivebootstrap = {
    attach: function (context, settings) {
      $('.event-sale').equalHeights();
      $('.view-id-events .thumbnail').equalHeights();
      $('.view-obituaries .obit').equalHeights();
      $('.view-births .births').equalHeights();
      $('.view-newsthumbs li.col-md-2').equalHeights();
      $('#block-views-news-thumbs-block li.views-row').equalHeights();
      $('.view-id-News .views-row').equalHeights();
      $('#editorspick .view-content, #editorspick .views-row').equalHeights();
      // colorbox
      $('img.imgbody').click(function() {
        $(this).colorbox({href: $(this).attr('src')});
      });
      $('img.imgbody').each(function(){
        $(this).attr('alt', this.title?this.title:'');
      });
      $('img.imgbody').colorbox({maxWidth: '90%'});
      $('#nodeSlide img').colorbox({maxWidth: '90%'});
      $(document).ready(function(){
        // Node Images
        $("#nodeSlide").owlCarousel({
          items:1,
          //loop:true,
          center:true,
          margin:10,
          lazyLoad:true,
          autoHeight:true,
          //autoplay:true,
          //autoplayTimeout:3000,
          //autoplayHoverPause:true
        });
        $("#homeSlide").owlCarousel({
          items:1,
          loop:true,
          nav:true,
          //animateOut:'fadeOut',
          //animateIn: 'fadeIn',
          animateOut: 'slideOutDown',
    	  animateIn: 'flipInX',
	  margin:10,
          autoplay:true,
          autoplayTimeout:3000,
          autoplayHoverPause:true
        });
        $("#editorPick").owlCarousel({
          loop:true,
          margin:10,
          nav:false,
          autoplay:true,
          autoplayTimeout:2000,
          autoplayHoverPause:true,
          responsive:{
            0:{
              items:1
            },
            600:{
              items:3
            },
            1000:{
              items:5
            }
          }
        });
      });
    }
  };
})(jQuery);
