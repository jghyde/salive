!function($){Drupal.behaviors.salivebootstrap={attach:function(a,i){$(".quicktabs-tabs a:not(.quicktabs-loaded)",a).click(function(){$(this).hasClass("progress-disabled")&&$(this).closest(".quicktabs-wrapper").addClass("quicktabs-loading")}),$(a).hasClass("quicktabs-tabpage")&&$(a).closest(".quicktabs-wrapper").removeClass("quicktabs-loading"),$("img.imgbody").click(function(){$(this).colorbox({href:$(this).attr("src")})}),$("img.imgbody").colorbox({maxWidth:"90%"}),$("#nodeSlide img").colorbox({maxWidth:"90%"}),$("#openhouseSlide img").colorbox({maxWidth:"90%"}),$("#nodeSlide").each(function(){$("#nodeSlide").find("div").length>1&&$("#nodeSlide").owlCarousel({items:1,nav:!1,loop:!0,center:!0,margin:10,lazyLoad:!0,autoHeight:!0})}),$("#nodeSlide").owlCarousel({items:1,nav:!1,center:!0,margin:10,lazyLoad:!0,autoHeight:!0,navText:["<span class='owl-prev glyphicons circle_arrow_left'></span>","<span class='owl-next glyphicons circle_arrow_right'></span>"]}),$("#homeSlide").owlCarousel({items:1}),$("#editorPick").owlCarousel({loop:!0,margin:10,nav:!0,responsive:{0:{items:1},600:{items:3},1e3:{items:5}},navText:["<i class='owl-prev fa fa-arrow-left'></i>","<i class='owl-next fa fa-arrow-right'></i>"]}),$("#nodeClass").owlCarousel({loop:!0,margin:10,nav:!1,items:3}),$("#newsHot").owlCarousel({loop:!1,margin:10,nav:!0,responsive:{0:{items:1},600:{items:3},1e3:{items:5}},navText:["<i class='owl-prev fa fa-arrow-left'></i>","<i class='owl-next fa fa-arrow-right'></i>"]}),$("#newsRant").owlCarousel({loop:!1,margin:10,nav:!0,responsive:{0:{items:1},600:{items:3},1e3:{items:5}},navText:["<i class='owl-prev fa fa-arrow-left'></i>","<i class='owl-next fa fa-arrow-right'></i>"]}),$("#newsEdit").owlCarousel({loop:!1,margin:10,nav:!0,responsive:{0:{items:1},600:{items:3},1e3:{items:5}},navText:["<i class='owl-prev fa fa-arrow-left'></i>","<i class='owl-next fa fa-arrow-right'></i>"]}),$("#newsPaid").owlCarousel({loop:!1,margin:10,nav:!0,responsive:{0:{items:1},600:{items:3},1e3:{items:5}},navText:["<i class='owl-prev fa fa-arrow-left'></i>","<i class='owl-next fa fa-arrow-right'></i>"]})}}}(jQuery);