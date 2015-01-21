(function ($) {

Drupal.behaviors.commentNotify = {
  attach: function (context) {
    $('#edit-notify', context)
      .bind('change', function() {
        $('#edit-notify-type', context)
          [this.checked ? 'show' : 'hide']()
          .find('input[type=checkbox]:checked').attr('checked', 'checked');
      })
      .trigger('change');
	    $('.form-item-notify').on('switch-change', function (e, data) {
	        var $el = $(data.el)
	          , value = data.value;
	        if(value){//this is true if the switch is on
	           $('#edit-notify-type').show();
	        }else{
	           $('#edit-notify-type').hide();
	        }
	    });

  }
}

})(jQuery);
