(function ($) {

  Drupal.behaviors.carbricks = {
    attach: function (context, settings) {
      updateContainer();
      $(window).resize(function() {
        updateContainer();
      })
      function updateContainer() {
        var w = $('.node-content').width();
        console.log(w);
        var column = w / 3;
        $('.field-name-field-vehicle-image .field-items').masonry({
          // options...
          itemSelector: '.field-item',
          columnWidth: column,
          percentPosition: true,
          originLeft: true,
          resize: true
        });
      }
    }
  };
})(jQuery);
