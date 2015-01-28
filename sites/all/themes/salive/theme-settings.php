<?php
/**
 * @file
 * Theme setting callbacks for the MD thenews theme.
 */

drupal_add_css(drupal_get_path('theme', 'salive') . '/css/theme-settings.css', array('group' => CSS_THEME));
drupal_add_css(drupal_get_path('theme', 'salive') . '/js/colorpicker/css/colorpicker.css');

drupal_add_js(drupal_get_path('theme', 'salive') . '/js/jquery.cookie.js');

drupal_add_library('system', 'ui.widget');
drupal_add_library('system', 'ui.mouse');
drupal_add_library('system', 'ui.slider');
drupal_add_library('system', 'ui.tabs');

drupal_add_js(drupal_get_path('theme', 'salive') . '/js/colorpicker/js/colorpicker.js');
drupal_add_js(drupal_get_path('theme', 'salive') . '/js/jquery.dropkick-1.0.0.js');
drupal_add_js(drupal_get_path('theme', 'salive') . '/js/jquery.mousewheel.min.js');
drupal_add_js(drupal_get_path('theme', 'salive') . '/js/jquery.jstepper.min.js');
drupal_add_js(drupal_get_path('theme', 'salive') . '/js/jquery.choosefont.js');
drupal_add_js(drupal_get_path('theme', 'salive') . '/js/theme-settings.js');

	require_once DRUPAL_ROOT . '/' . drupal_get_path('theme', 'salive') . '/inc/theme-settings-sliders.inc';

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function salive_form_system_theme_settings_alter(&$form, &$form_state) {

	
	$form['salive_settings']['html_header'] = array(
  	'#markup' => '
<div class="md-wrap">
  <div id="md-tabs">
		<div class="md-tabs-head"><div class="md-tabs-headcontent">
      <ul class="clearfix">
				<li class="tab-item clearfix" id="tab-sliders"> <a class="tab-link" href="#md-sliders">
          <span class="tab-text">Sliders</span>
          </a> </li>
      </ul>
    </div></div><!-- /.md-tabs-head -->',
		'#weight' => -99,
	);
	
	
	
	
	
	drupal_add_js(array('font_array' => $fontarray), 'setting');
	drupal_add_js(array('font_vars' => $fontvars), 'setting');

	salive_theme_settings_sliders($form, $form_state);

	
	$form['salive_settings']['html_footer'] = array(
  	'#markup' => '
	</div><!-- /#md-tabs -->
</div><!-- /.md-wrap -->',
		'#weight' => 99,
	);
	
	$form['#submit'][]   = 'salive_settings_submit';
}

function salive_settings_submit($form, &$form_state) {
  $settings = array();
 
  // Check for a new uploaded file, and use that if available.
  if ($file = file_save_upload('bg_upload')) {
    $parts = pathinfo($file->filename);
    $destination = 'public://' . $parts['basename'];
    $file->status = FILE_STATUS_PERMANENT;
		if (file_copy($file, $destination, FILE_EXISTS_REPLACE)) {
			$_POST['bg_path'] = $form_state['values']['bg_path'] = $destination;
		}
  }

} 
