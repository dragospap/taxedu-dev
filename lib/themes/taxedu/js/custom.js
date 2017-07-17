jQuery(document).ready(function () {
    jQuery('.what-is-tax-menu').click(function(){
        var parent = jQuery(this).children().last();
        jQuery('.what-is-tax-menu').removeClass("active");
        var isActive = (parent.find('#img_up').hasClass('active')) ? true : false; // checks if it is already active
        //console.log(isActive);
        jQuery('.what-is-tax-menu').find('#img_up').removeClass('active')
        jQuery(this).addClass("active");
        if (!isActive) parent.find('#img_up').addClass('active');
    });

    jQuery('[rel="tooltip"]').tooltip();

    jQuery('.tip').each(function () {
        console.log(jQuery('#'+jQuery(this).data('tip')).html());
        jQuery(this).popover(
            {
                html: true,
                content: jQuery('#' + jQuery(this).data('tip')).html(),
                placement: 'bottom'
            });
    });

    jQuery('.flexslider').flexslider({
        animation: "slide",
    });

    jQuery("[id^='message-who-pay_']").hover(function () {
        var id=jQuery(this).attr('id').split('_')[1];
        jQuery(this).popover({
            content: function () {
                return jQuery('.message-who-pay'+id).html();
            },
            placement: 'bottom'
        });
    });


    jQuery("#map-europe").CSSMap({
        "size": 750,
        "mapStyle": "blue",
        "cities": true,
        "tooltips": "floating-top-right",
        "responsive": "auto",
        "onClick": function (e) {
            var rLink = e.children("A").eq(0).attr('href');
            var rName = e.children("A").eq(0).html();
            rLink = rLink.replace('#','');

            //console.log(jQuery('#'+rLink+' .col2').html());
            if(jQuery('#'+rLink+' .col2').html()==='&nbsp;' || jQuery('#'+rLink+' .col2').html()=== ''){
                jQuery('#'+rLink+' .col2').css({
                    'display':'none',
                    'max-height':0,
                    'min-height':0
                });
                jQuery('#'+rLink+' .col1').css({
                    'width':'60%',
                    'max-width':'455px',
                });
            }
            jQuery('#content_map').empty();
            jQuery('#content_map').html('' +
                '<div class="title">' + rName + '</div>' +
                '<div class="redbar"></div>' +
                '<div class="description_map">' +
                '<p>' +jQuery('#'+rLink).html() +
                '</p>' +
                '</div> ');
        }
    });


    jQuery('#how-tax-impact').on('show.bs.collapse', function () {
        jQuery('p.short-text').css('display','none');
        jQuery('.page-child .what-is-tax-text').css('padding-top','10px');
    });

    jQuery('#how-tax-impact').on('hide.bs.collapse', function () {
        jQuery('p.short-text').css('display','table');
        jQuery('.page-child .what-is-tax-text').css('padding-top','40px');
    });

    jQuery('#teachersLaunchModal2').on('hidden.bs.modal', function (e) {
        var vid = document.getElementsByTagName("video")[0];
        vid.pause();
    });


    jQuery('#closegame').click(function(e){
        var vid = document.getElementsByTagName("video")[0]; //alert ("vi" + vid);
        vid.pause();
        //alert("ccc");
    });

    window.openimg = function() {
        var file = jQuery("input[name='files[field_resource_image_und_0]']");
        file.click();
        file.on('change', function () {
            jQuery("input[name='field_upload_image[und][0][url]']").val(file.val());
        })
    }

    jQuery("input[name='field_upload_image[und][0][url]']").on('click', function (e) {
        var target=e.target;
        var file = jQuery("input[name='files[field_resource_image_und_0]']");
        file.click();
        file.on('change', function () {
            var reader =  new FileReader();
            var fisier=jQuery(this);
            jQuery("input[name='field_upload_image[und][0][url]']").val(file.val());
        })
    });

    jQuery("input[name='title']").prop('placeholder', Drupal.t('Title'));
    jQuery("input[name='field_upload_image[und][0][url]']").prop('placeholder', Drupal.t('Choose image to upload'));
    jQuery("input[name='field_minidescription[und][0][value]']").prop('placeholder', Drupal.t('Mini description'));

    jQuery("select[name='field_target_group[und]'] option").each(function () {
        if( jQuery(this).val()=='_none'){
            jQuery("select[name='field_target_group[und]']").css({
                'color': '#01b6b8',
                'font-weight':'bold'
            });
            jQuery(this).html(Drupal.t('target group'))
        }
    });

    jQuery("select[name='field_resource_type[und]'] option").each(function () {
        if( jQuery(this).val()=='_none'){
            jQuery("select[name='field_resource_type[und]']").css({
                'color': '#01b6b8',
                'font-weight':'bold'
            });
            jQuery(this).html(Drupal.t('resource type'))
        }
    });


    jQuery("[id^='edit-field-links-und-add-more']").click(function () {
        jQuery("[id^='edit-field-links-und']").prop('placeholder', Drupal.t('Add a link'));
    });

    jQuery("[id^='edit-field-links-und']").each(function () {
        jQuery(this).prop('placeholder', Drupal.t('Add a link'));
    });

    jQuery('input[name="field_resource_file_markup[und][0][value]"]').on('click' ,function () {
       jQuery("input[name='files[field_resource_my_file_und_0]']").click();
    });


    jQuery('textarea[name="body[und][0][value]"]').prop('placeholder', Drupal.t('DECRIPTION'));

    jQuery('input[name="field_firstname[und][0][value]"]').prop('placeholder', Drupal.t('first name*'));
    jQuery('input[name="field_lastname[und][0][value]"]').prop('placeholder', Drupal.t('last name*'));
    jQuery('input[name="name"]').prop('placeholder', Drupal.t('user name*'));
    jQuery('input[name="mail"]').prop('placeholder', Drupal.t('e-mail*'));
    jQuery('input[name="pass[pass1]"]').prop('placeholder', Drupal.t('password*'));
    jQuery('input[name="pass[pass2]"]').prop('placeholder', Drupal.t('confirm password*'));

    jQuery('#banner-flag').prop('src', 'https://europa.eu/european-union/sites/europaeu/themes/europaeu_theme/images/europa-flag.gif');

    jQuery('#messages').toggleClass('modalmsg');
    jQuery('#messages').css({
        'display': 'block',
        'overflow': 'hidden'
    });
    if(jQuery('#messages').length > 0){
        jQuery('body').css({
            'overflow': 'hidden'
        })
    }

    jQuery('#messages .messages').toggleClass('modalmsg-content');

    jQuery('#messages .messages').append('<br/><br/><button id="closebutton" class="button btn closebtn">Close</button>');

    jQuery('#closebutton').click(function () {
        jQuery('#messages').css({
            display: 'none'
        });
        jQuery('body').css({
            'overflow': 'visible'
        })
    });

    jQuery('.node-type-blog .statistics_counter.last').append('<div class="arrow_down"></div>');

    jQuery('.node-type-blog #comments #edit-name').attr({
        'placeholder': Drupal.t('Username')
    });

    jQuery('.node-type-blog #comments #edit-subject').attr({
        'placeholder': Drupal.t('Subject')
    });

    jQuery('.node-type-blog #comments #edit-captcha-response').attr({
        'placeholder': Drupal.t('Catcha code')
    });

    jQuery('.node-type-blog #comments #edit-comment-body-und-0-value').attr({
        'placeholder': Drupal.t('Have you say...')
    });

})

