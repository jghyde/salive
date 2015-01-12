// $Id: $ mods for bootstrap for salive 2014
(function ($) {
  Drupal.behaviors.salivebootstrap = {
    attach: function (context, settings) {
      // For the inserts
      if(document.getElementById("#block-webform-client-block-2460") !== null) {
        var p = $('article.node-insert');
        var offset = p.offset();
        $('#block-webform-client-block-2460').css('margin-top', offset.top);
      }
      // For the video ads
      
      
      $('.death-notice-controls').hide();
      $('.death-notice').click(function() {
        $(this).children('.death-notice-controls').toggle();
      });
      $('.logo.pull-left').after('<span id="beta" class="label label-info">Beta</span>');
      $('.event-sale').equalHeights();
      $('.thumbnails').imagesLoaded( function(){
        $('#coupon-header div.span6').equalHeights();
        $('#quicktabs-san_angelo_news .view-content .thumbnail').equalHeights();
        $('.view-display-id-block_1 .view-content ul li div.thumbnail').equalHeights();
        $('.events-wrapper .thumbnail').equalHeights();
        $('.view-obituaries .obit').equalHeights();
      });
      
      $('.view-events .views-field.views-field-body').hide();
      $(".view-events img.event-feed-image").mouseover(function() {
        $(this).closest('.views-row').children('.views-field-body').slideDown(300);
      }).mouseout(function() {
        $(this).closest('.views-row').children('.views-field-body').slideUp(300);
      });
      $('form .form-type-textfield label').inFieldLabels({
        fadeOpacity: 0.2,
        fadeDuration: 400,
      });
      $('form .form-type-password label').inFieldLabels({
        fadeOpacity: 0.2,
        fadeDuration: 400,
      });
      $('form .form-type-emailfield label').inFieldLabels({
        fadeOpacity: 0.2,
        fadeDuration: 400,
      });
      /*$('form .form-type-textarea label').inFieldLabels({
        fadeOpacity: 0.2,
        fadeDuration: 400,
      });*/
    }
  };
})(jQuery);
