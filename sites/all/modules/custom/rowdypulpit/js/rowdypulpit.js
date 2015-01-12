jQuery(document).ready(function($) {
  $('input#edit-field-contrib-url-und-0-value').val('');
  var button = '<a name="rowdy-button" id="rowdy-button" class="red button">Fetch</a>';
  $('input#edit-field-contrib-url-und-0-value').after(button);
  $("#edit-field-contrib-url-und-0-value.text-full").focusout(function() {
    var regex = /(http|https):\/\/(\w+:{0,1}\w*@)?(\S+)(:[0-9]+)?(\/|\/([\w#!:.?+=&%@!\-\/]))?/;
    var url = $(this).attr("value");
    if (url.match(regex)) {
      $(this).removeClass('rowdy-error');
      $('.form-item-field-contrib-url-und-0-value div.description').text('URL passes test. Standby. Processing...');
      $('#edit-field-contrib-url').showLoading();
      if ($(this).attr("value") != "") {
        if ($('#rowdy-image-wrap')) {
          $('#rowdy-image-wrap').remove();
        }
        $('.form-item-field-contrib-url-und-0-value div.description').text('Processing...');
        $.getJSON('/rowdy/getformelements?u=' + url, function(data) {
          $('.form-item-field-contrib-url-und-0-value div.description').text('Retrieving data...');
          var dowhat = data['dowhat'];
          switch (dowhat) {
            case 'expand':
              // Just in case there was a 301, correct the user-entered url
              $('#contrib-ajax div.form-item-field-contrib-url-und-0-value input:text').val(data['url']);
              $('#contrib-ajax div.form-item-title input:text').val(data['title']);
              // Enter the body text:
              $('#edit-field-contrib-teaser-und-0-value').val(data['summary']);
              // Enter the first image url
              //$('#node_contrib_form_group_contribpanel').css('display', 'block').slideDown('slow');
              var fieldset = $('fieldset#node_contrib_form_group_contribpanel');
              $('.form-item-field-contrib-url-und-0-value div.description').html('<strong>Success!</strong>').show(1200);
              fieldset.removeClass('collapsed').addClass('collapsible').slideDown({
                duration: '4500',
                easing: 'linear',
                complete: function () {
                  Drupal.collapseScrollIntoView(fieldset);
                  fieldset.animating = false;
                },
                step: function () {
                // Scroll the fieldset into view.
                  Drupal.collapseScrollIntoView(fieldset);
                }
              });
              $('#edit-actions').show();
              $('#contrib-ajax .form-actions').show();
              $('#contrib-ajax .form-item-title label').hide();
              $('.form-item-field-contrib-url-und-0-value div.description').text('Please edit the following below to your liking and submit your article.');
              if (data['img'] && data['img'] != 'none') {
                var pointer;
                if (data['cursor'] > 0) {
                  pointer = 'rowdy-cursor-on';
                }
                prepend = '<div id="rowdy-image-wrap">' + data['img'] + '<div id="rowdy-image-pager" class="clearfix">';
                if (data['cursor'] > 0) {
                  prepend += '<ul id="rowdy-pager-list"><li id="rowdy-pager-1"><span id="rowdy-left" class="' + pointer + '">&lt;</span></li><li id="rowdy-pager-2"><span id="rowdy-right" class="' + pointer + '">&gt;</span></li><div id="rowdy-img-info">Select thumb</div>';                      
                }
                prepend += '</div></div>';
                $('#contrib-ajax .fieldset-wrapper').prepend(prepend);
                if (data['initial']) {
                  $('input#edit-field-contrib-img-url-und-0-value').val(data['initial']);
                }
                if (data['cursor'] > 0) {
                  $('ul#rowdy-images').cycle({ 
                    fx:     'fade', 
                    speed:  'fast', 
                    timeout: 0, 
                    next:   '#rowdy-left', 
                    prev:   '#rowdy-right' 
                  });
                  $('#rowdy-image-pager span').mouseover(function (){
                    $(this).addClass('rowdy-red').show(1000);
                  });
                  $('#rowdy-image-pager span').mouseout(function(){
                    $(this).removeClass('rowdy-red').show(2000);
                    var imgsrc = $('#rowdy-image-wrap li:visible img').attr('src');
                    $('input#edit-field-contrib-img-url-und-0-value').val(imgsrc);
                  });
                  $('#rowdy-image-pager span').mousedown(function() {
                    $(this).css('background-color', '#cccccc');
                  }).mouseup(function(){
                    $(this).css('background-color', '#efefef');
                  });
                }
              }
              $('#edit-field-contrib-url').hideLoading();
            break;
            case 'dupes':
              $('#edit-field-contrib-url').hideLoading();
              $('.form-item-field-contrib-url-und-0-value div.description').html(data['dupes']);
              $('input#edit-field-contrib-url-und-0-value').addClass("rowdy-error").focus();               
            break;
            default:
              $('#edit-field-contrib-url').hideLoading();
              $('.form-item-field-contrib-url-und-0-value div.description').text('The url above returned invalid data. Check what you entered above and try again.');
              $('input#edit-field-contrib-url-und-0-value').addClass("rowdy-error").focus();
            break;
          }
        });
      }      
    }
    else {
      $('#edit-field-contrib-url').hideLoading();
      $('.form-item-field-contrib-url-und-0-value div.description').text('Invalid URL. Please start the URL above with http:// or https://');
      $(this).addClass("rowdy-error").focus();      
    }
  });
  $('#contrib-ajax .form-actions input.form-submit').click(function(){
    if ($('select#edit-field-section-und').attr("value") == '_none') {
      var html = '<div id="selectcat" class="element-hidden" title="Select a Category"><p><span class="ui-icon ui-icon-alert" style="float:left; margin:0 7px 50px 0;"></span>';
      html = html + 'Please select a category before submitting this article.</div>';
      jQuery(html).dialog({
        modal: true,
        buttons: {
                  "Okay": function() {
                    $( this ).dialog( "close" );
                  },
                },
        height: 180,
        width: 340,
        show: "fade",
        hide: "puff",
      });
      $('select#edit-field-section-und').addClass('error').focus();
      return false;
    }
  });
  $('div#contrib-instructions-title').toggle(
    function(){
      $('#rowdy-instructions-body').show('slow');
      $('div#contrib-instructions-title').text('- How to Submit Articles Here');
    },
    function(){
      $('#rowdy-instructions-body').hide('slow');
      $('div#contrib-instructions-title').text('+ How to Submit Articles Here');
    }
  );
  $("div.contrib-admin-links-wrapper").mouseover(function() {
    $(this).css( 'opacity', '1.0' );
  }).mouseout(function(){
    $(this).css('opacity', '0.4');
  });
});


