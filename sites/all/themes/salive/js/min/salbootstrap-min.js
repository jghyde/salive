!function($){Drupal.behaviors.salivebootstrap={attach:function(e,i){$(".event-sale").equalHeights(),$(".view-id-events .thumbnail").equalHeights(),$(".view-obituaries .obit").equalHeights(),$(".view-births .births").equalHeights(),$("#block-views-newsthumbs-block_1 li.col-md-2").equalHeights(),$("#block-views-news-thumbs-block li.views-row").equalHeights(),$(".view-id-News .views-row").equalHeights(),$("img.imgbody").click(function(){$(this).colorbox({href:$(this).attr("src")})}),$("img.imgbody").colorbox({maxWidth:"90%"}),$("#nodeSlide img").colorbox({maxWidth:"90%"}),$("#nodeSlide").each(function(){$("#nodeSlide").find("div").length>1&&$("#nodeSlide").owlCarousel({items:1,nav:!1,loop:!0,center:!0,margin:10,lazyLoad:!0,autoHeight:!0})}),$("#nodeSlide").owlCarousel({items:1,nav:!1,center:!0,margin:10,lazyLoad:!0,autoHeight:!0,navText:["<span class='owl-prev glyphicons circle_arrow_left'></span>","<span class='owl-next glyphicons circle_arrow_right'></span>"]}),$("#homeSlide").owlCarousel({items:1,loop:!0,nav:!0,animateOut:"fadeOut",animateIn:"fadeIn",margin:10,autoplay:!0,autoplayTimeout:7e3,autoplayHoverPause:!0}),$("#editorPick").owlCarousel({loop:!0,margin:10,nav:!0,responsive:{0:{items:1},600:{items:3},1e3:{items:5}},navText:["<i class='owl-prev fa fa-arrow-left'></i>","<i class='owl-next fa fa-arrow-right'></i>"]}),$("#newsHot, #newsRant, #newsEdit, #newsPaid").owlCarousel({loop:!0,margin:10,nav:!0,responsive:{0:{items:1},600:{items:3},1e3:{items:5}},navText:["<i class='owl-prev fa fa-arrow-left'></i>","<i class='owl-next fa fa-arrow-right'></i>"]})}}}(jQuery);