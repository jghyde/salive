// $Id: $ Livelogin JS
(function ($) {
  Drupal.behaviors.livecomments = {
    attach: function (context, settings) {
      var currentNid = Drupal.settings.livecomments.currentNid;
      var loadURL = '/livecomment/js/' + currentNid;
      $('#livecomments').load(loadURL);
      $('#livecomments').addClass('ajax-tmz');
      $('#comments div.url-textfield').hide();
    }
  }
})(jQuery);
