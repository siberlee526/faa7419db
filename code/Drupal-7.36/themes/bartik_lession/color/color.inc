<?php

drupal_add_js(array('color'=>array('logo'=>theme_get_setting('logo', 'bartik'))), 'setting');

$info = array(
	'fields' => array(
		'top'=>t('Header top'),
		'bottom'=>t('Header bottom'),
		'bg'=>t('Main backgroud'),
		'sidebar'=>t('sidebar backgroud'),
		'sidebarborders'=>t('Sidebar borders'),
		'footer'=>t('Footer backgroud'),
		'titleslogan'=>t('titel and slogan'),
		'text'=>t('Text color'),
		'link'=>t('Link color'),
		),
	'schemes'=>array(
		'default'=> array(
			'title'=> t('Blue Lagoon (default)'),
			'colors'=> array(
				'top'=> '#0779bf',
				'bottom'=> '#48a9e4',
				'bg'=> '#ffffff',
				'sidebar'=> '#f6f6f2',
				'sidebarborders'=> '#292929',
				'footer'=> '#292929',
				'titleslogan'=>'#fffeff',
				'text'=>'#3b3b3b',
				'link'=>'#007183',
				),
			),
		'firehouse' => array(
			'title'=> t('Firehouse'),
			'colors'=> array(
				'top'=> '#cd2d2d',
				'bottom'=> '#cf3535',
				'bg'=>'#ffffff',
				'sidebar'=> '#ffffff',
				'sidebarborders'=>'#ffffff',
				'footer'=> '#afafaf',
				'titleslogan'=> '#000000',
				'text'=>'#4a4a4a',
				'link'=>'#019dbf',
				),
			),
		'ice' => array(
			'title'=> t('Firehouse'),
			'colors'=> array(
				'top'=> '#cd2d2d',
				'bottom'=> '#cf3535',
				'bg'=>'#ffffff',
				'sidebar'=> '#ffffff',
				'sidebarborders'=>'#ffffff',
				'footer'=> '#afafaf',
				'titleslogan'=> '#000000',
				'text'=>'#4a4a4a',
				'link'=>'#019dbf',
			),
		),
		'plum' => array(
			'title'=> t('Firehouse'),
			'colors'=> array(
				'top'=> '#cd2d2d',
				'bottom'=> '#cf3535',
				'bg'=>'#ffffff',
				'sidebar'=> '#ffffff',
				'sidebarborders'=>'#ffffff',
				'footer'=> '#afafaf',
				'titleslogan'=> '#000000',
				'text'=>'#4a4a4a',
				'link'=>'#019dbf',
			),
			),
		'slate' => array(
			'title'=> t('Firehouse'),
			'colors'=> array(
				'top'=> '#cd2d2d',
				'bottom'=> '#cf3535',
				'bg'=>'#ffffff',
				'sidebar'=> '#ffffff',
				'sidebarborders'=>'#ffffff',
				'footer'=> '#afafaf',
				'titleslogan'=> '#000000',
				'text'=>'#4a4a4a',
				'link'=>'#019dbf',
			),
		),
		'css'=>array(
			'css/colors.css'
			),
		'copy'=>array(
			'logo.png'
			),
		'gradients'=>array(
			array(
				'dimension'=> array(0,0,0,0),
				'direction'=>'vertical',
				'colors'=>array('top','bottom'),
				),
			),
		'fill'=> array(),
		'slices'=> array(),
		'blend_target'=> '#ffffff',
		'preview_css' => 'color/preview.css',
		'preview_js'=> 'color/preview.js',
		'preview_html'=> 'color/preview.html',
		'base_image'=> 'color/base.png',
	),
);
























