// $Id: $ mods for bootstrap for salive 2014
(function ($) {
  Drupal.behaviors.salivebootstrap = {
    attach: function (context, settings) {
      $(document).ready(function(){
        $('.event-sale').equalHeights();
        $('.view-id-events .thumbnail').equalHeights();
        $('.view-obituaries .obit').equalHeights();
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
        $("img.imgbody").colorbox({maxWidth: '90%'});
      });
      var $galleries = $('.photoswipe', context);
      if ($galleries.length) {
        $galleries.each(function () {
          $(this).find('a.pswp__img--main').photoSwipe(settings.photoswipe.options);
        });
      }
    }
  };
})(jQuery);
