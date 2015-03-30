// $Id: $ mods for bootstrap for salive 2014
(function ($) {
  Drupal.behaviors.salivebootstrap = {
    attach: function (context, settings) {
	      $('.event-sale').equalHeights();
	      $('.view-id-events .thumbnail').equalHeights();
	      $('#block-views-community-block_1 .thumbnail').equalHeights();
	      $('.view-obituaries .obit').equalHeights();
	      $('.view-births .births').equalHeights();
	      $('#block-views-newsthumbs-block_1 li.col-md-2').equalHeights();
	      $('#block-views-news-thumbs-block li.views-row').equalHeights();
	      $('.view-id-News .views-row').equalHeights();
	      $('#block-views-community-block_2 .obit').equalHeights();
      // colorbox
      $('img.imgbody').click(function() {
        $(this).colorbox({href: $(this).attr('src')});
      });
      $('img.imgbody').colorbox({maxWidth: '90%'});
      $('#nodeSlide img').colorbox({maxWidth: '90%'});
        $('#nodeSlide').each(function(){
          if( $('#nodeSlide').find("div").length > 1 ) $('#nodeSlide').owlCarousel({
            items:1,
            nav:false,
            loop:true,
            center:true,
            margin:10,
            lazyLoad:true,
            autoHeight:true,
            })
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
        $("#newsHot, #newsRant, #newsEdit, #newsPaid").owlCarousel({
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
        $('#shareme').sharrre({
				  share: {
				    googlePlus: true,
				    facebook: true,
				    twitter: true,
				  },
				  enableTracking: true,
				   hover: function(api, options){
				    $(api.element).find('.buttons').show();
				  },
				  hide: function(api, options){
				    $(api.element).find('.buttons').hide();
				  }
				});
    }
  };
})(jQuery);
