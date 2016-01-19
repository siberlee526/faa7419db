<?php

function bartik_preprocess_html(&$variables){
	if(!empty($variables['page']['featured'])){
		$variables['class_array'][] = 'featured';
	}

	if(!empty($variables['page']['triptych_first'])
		|| !empty($variables['page']['triptych_middle'])
		|| !empty($variables['page']['triptych_last'])){
		$variables['class_array'][] = 'triptych';
	}

	if(!empty($variables['page']['footer_firstcolumn'])
		|| !empty($variables['page']['footer_secondcolumn'])
		|| !empty($variables['page']['footer_thirdcolumn'])
		|| !empty($variables['page']['footer_fourthcolumn'])){
		$variables['classes_array'][] = 'footer-columns';
	}

	drupal_add_css(path_to_theme().'/css/ie.css',
		array('group'=>CSS_THEME,
			'browsers'=> array('IE'=>'lte IE 7', '!IE'=> FALSE),
			'preprocess' => FALSE));
	drupal_add_css(path_to_theme() . '/css/ie6.css', 
    	array('group' => CSS_THEME,
   			'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 
   			'preprocess' => FALSE));
}


function bartik_process_html(&$variables){
	if(module_exists('color')){
		_color_html_alter($variables);
	}
}

function bartik_process_page(&$variables){
	if(module_exists('color')){
		_color_page_alter($variables);
	}
	$variables['hide_site_name'] = theme_get_setting('toggle_name') ? FALSE : TURE;
	$variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TURE;
	if($variables['hide_site_name']) {
		$variables['site_name'] = filter_xss_admin(variale_get('site_name','Drupal'));
	}
	if($variables['hide_side_slogan']){
		$variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
	}
	if(!empty($variables['title_suffix']['add_or_removw_shortout']) && $variables['title']) {
		$variables['title_prefix']['short_wrapper'] = array(
			'#markup'=> '<div class = "shortout-wrapper clearfix">',
			'#weight'=> 100,
			);
		$variables['title_suffix']['short_wrapper'] = array(
			'#markup'=> '</div>',
			'#weight'=> -99,
			);
		$variables['title_suffix']['add_or_remove_shortout']['#weight'] = -100;
	}
}

function bartik_lession_preprocess_maintenance_page(&$variables){
	if(!$variables['db_is_active']){
		$variables['site_name'] = '';
	}
	drupal_add_css(drupal_get_path('theme','bartik').'/css/maintenance-page.css');
}


function bartik_less_process_maintenance_page(&$variables){
		$variables['hide_site_name'] = theme_get_setting('toggle_name') ? FALSE : TURE;
	$variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TURE;
	if($variables['hide_site_name']) {
		$variables['site_name'] = filter_xss_admin(variale_get('site_name','Drupal'));
	}
	if($variables['hide_side_slogan']){
		$variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
	}
}


function bartik_lession_preprocessa_block(&$variables){
	if($variables['block']->region == 'header'){
		$varialbes['title_attributes_array']['class'][] = 'element-invisible';
	}
}

function bartic_menu_tree($variables){
	return '<ul class="menu clearfix">'.$variables['tree'].'</ul>';
}

function barrik_lession_field__taxonomy_term_reference($variables){
	$output = '';
	if(!$variables['label_hidden']){
		$output.= '<h3 class = "field-label">' . $variables['label'] . ': </h3>';
	}
	$output .= ($variables['element']['#label_display'] == 'inline')?'<ul class = "links inline">':'<ul class = "links">';
	foreach($variables['items'] as $delta => $item){
		$output .= '<li class = "taxonomy-term-reference-">' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
	}
	$output .= '</ul>';
	$output = '<div class = "' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array'])? ' clearfix' : '') . '"' . $variables['attributes'] . '>'. $output . '</div>';
	return $output; 
}
