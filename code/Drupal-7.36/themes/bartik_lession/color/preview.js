(function($){
	Drupal.color = {
		logoChanged: false,
		callback: function(context,settiing,form,farb,height,width){
			if(!this.logoChanged){
				$('#preview #preview-logo img').attr('src',Drupal.setting.color.logo);
				this.logoChanged = true;
			}
			if(Drupal.settings.color.logo == null){
				$('div').remove('#preview-logo');
			}

			$('#preview',form).css('backgroundColor',$('#palette input[name="palette[bg]"]',form).val());
			$('#preview #previw-main h2, #preview .preview-content', form).css(
				'color',$('#palette input[name="palette[text]"]',form).val());

		}
	}
})(jQuery)