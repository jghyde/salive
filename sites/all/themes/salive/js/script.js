(function($) {
	$.fn.maxHeight = function() {
		tallest = 0;
		this.each(function() {
			if($(this).height() > tallest) {
				tallest = $(this).height();
			}
		});
		return tallest
	}
})(jQuery);