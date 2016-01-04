// $Id: $ mods for bootstrap for salive 2014
(function ($) {
  Drupal.behaviors.salivebootstrap = {
    attach: function (context, settings) {      
      // colorbox
      $('img.imgbody').click(function() {
        $(this).colorbox({href: $(this).attr('src')});
      });
      $('img.imgbody').colorbox({maxWidth: '90%'});
      $('#nodeSlide img').colorbox({maxWidth: '90%'});
      $('#openhouseSlide img').colorbox({maxWidth: '90%'});
      $('#nodeSlide').each(function(){
        if ( $('#nodeSlide').find("div").length > 1 ) {
          $('#nodeSlide').owlCarousel({
            items:1,
            nav:false,
            loop:true,
            center:true,
            margin:10,
            lazyLoad:true,
            autoHeight:true,
          });
        }
      });
      $("#nodeSlide").owlCarousel({
        items:1,
        nav:false,
        //loop:true,
        center:true,
        margin:10,
        lazyLoad:true,
        autoHeight:true,
        //autoplay:true,
        //autoplayTimeout:3000,
        //autoplayHoverPause:true
        navText: [
                "<span class='owl-prev glyphicons circle_arrow_left'></span>",
                "<span class='owl-next glyphicons circle_arrow_right'></span>"
            ],
      });
      $("#homeSlide").owlCarousel({
        items:1,
      });
      $("#editorPick").owlCarousel({
        loop:true,
        margin:10,
        nav:true,
        //autoplay:true,
        //autoplayTimeout:2000,
        //autoplayHoverPause:true,
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
        },
        navText: [
                "<i class='owl-prev fa fa-arrow-left'></i>",
                "<i class='owl-next fa fa-arrow-right'></i>"
            ],
      });
      $("#nodeClass").owlCarousel({
        loop:true,
        margin:10,
        nav:false,
        items:3,
      });
      $("#newsHot").owlCarousel({
        loop:false,
        margin:10,
        nav:true,
        //autoplay:true,
        //autoplayTimeout:2000,
        //autoplayHoverPause:true,
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
        },
        navText: [
                "<i class='owl-prev fa fa-arrow-left'></i>",
                "<i class='owl-next fa fa-arrow-right'></i>"
            ],
      });
      $("#newsRant").owlCarousel({
        loop:false,
        margin:10,
        nav:true,
        //autoplay:true,
        //autoplayTimeout:2000,
        //autoplayHoverPause:true,
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
        },
        navText: [
                "<i class='owl-prev fa fa-arrow-left'></i>",
                "<i class='owl-next fa fa-arrow-right'></i>"
            ],
      });
      $("#newsEdit").owlCarousel({
        loop:false,
        margin:10,
        nav:true,
        //autoplay:true,
        //autoplayTimeout:2000,
        //autoplayHoverPause:true,
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
        },
        navText: [
                "<i class='owl-prev fa fa-arrow-left'></i>",
                "<i class='owl-next fa fa-arrow-right'></i>"
            ],
      });
      $("#newsPaid").owlCarousel({
        loop:false,
        margin:10,
        nav:true,
        //autoplay:true,
        //autoplayTimeout:2000,
        //autoplayHoverPause:true,
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
        },
        navText: [
                "<i class='owl-prev fa fa-arrow-left'></i>",
                "<i class='owl-next fa fa-arrow-right'></i>"
            ],
      });

    }
  };
})(jQuery);
