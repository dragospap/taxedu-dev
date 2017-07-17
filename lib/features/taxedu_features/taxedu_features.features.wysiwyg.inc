<?php
/**
 * @file
 * taxedu_features.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function taxedu_features_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: basic_html.
  $profiles['basic_html'] = array(
    'format' => 'basic_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Source' => 1,
        ),
      ),
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'verify_html' => 0,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 0,
      'remove_linebreaks' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'simple_source_formatting' => 0,
      'resize_enabled' => 1,
      'toolbarLocation' => 'top',
      'forcePasteAsPlainText' => 0,
      'stylesSet' => '',
    ),
    'preferences' => array(
      'add_to_summaries' => FALSE,
      'default' => 1,
      'show_toggle' => 1,
      'user_choose' => 0,
      'version' => '4.4.8.ccd0038',
    ),
    'name' => 'formatbasic_html',
    'entity_type' => 'wysiwyg_profile',
    'rdf_mapping' => array(),
  );

  // Exported profile: clean_code.
  $profiles['clean_code'] = array(
    'format' => 'clean_code',
    'editor' => 'ckeditor',
    'settings' => array(
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Source' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'verify_html' => 0,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 0,
      'remove_linebreaks' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'simple_source_formatting' => 0,
      'resize_enabled' => 1,
      'toolbarLocation' => 'top',
      'forcePasteAsPlainText' => 0,
      'stylesSet' => '',
    ),
    'preferences' => array(
      'add_to_summaries' => FALSE,
      'default' => 1,
      'show_toggle' => 1,
      'user_choose' => 0,
      'version' => '4.4.8.ccd0038',
    ),
    'name' => 'formatclean_code',
    'entity_type' => 'wysiwyg_profile',
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html.
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'TextColor' => 1,
          'BGColor' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'PasteFromWord' => 1,
          'ShowBlocks' => 1,
          'Format' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Smiley' => 1,
          'Maximize' => 1,
        ),
        'media_crop_ckeditor' => array(
          'media_crop_edit_instance' => 1,
        ),
        'multisite_wysiwyg_link_hreflang' => array(
          'Link' => 1,
        ),
        'nexteuropa_token_ckeditor' => array(
          'NextEuropaToken' => 1,
        ),
        'drupal_path' => array(
          'Link' => 1,
        ),
        'drupal' => array(
          'media' => 1,
          'video' => 1,
        ),
      ),
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'verify_html' => 1,
      'preformatted' => 1,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'simple_source_formatting' => 1,
      'resize_enabled' => 1,
      'toolbarLocation' => 'top',
      'forcePasteAsPlainText' => 1,
      'stylesSet' => '',
    ),
    'preferences' => array(
      'add_to_summaries' => FALSE,
      'default' => 1,
      'show_toggle' => 1,
      'user_choose' => 0,
      'version' => '4.4.8.ccd0038',
    ),
    'name' => 'formatfull_html',
    'entity_type' => 'wysiwyg_profile',
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html_track.
  $profiles['full_html_track'] = array(
    'format' => 'full_html_track',
    'editor' => 'ckeditor',
    'settings' => array(
      'theme' => 'advanced',
      'language' => 'en',
      'access' => 1,
      'access_pages' => 'node/*
user/*
comment/*',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'TextColor' => 1,
          'BGColor' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'PasteFromWord' => 1,
          'ShowBlocks' => 1,
          'Format' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Smiley' => 1,
          'Maximize' => 1,
        ),
        'drupal_path' => array(
          'Link' => 1,
        ),
        'drupal' => array(
          'media' => 1,
          'break' => 1,
        ),
        'nexteuropa_token_ckeditor' => array(
          'NextEuropaToken' => 1,
        ),
        'multisite_wysiwyg_link_hreflang' => array(
          'Link' => 1,
        ),
        'lite' => array(
          'lite_AcceptAll' => 1,
          'lite_RejectAll' => 1,
          'lite_AcceptOne' => 1,
          'lite_RejectOne' => 1,
          'lite_ToggleShow' => 1,
          'lite_ToggleTracking' => 1,
        ),
        'media_crop_ckeditor' => array(
          'media_crop_edit_instance' => 1,
        ),
      ),
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'verify_html' => TRUE,
      'preformatted' => FALSE,
      'convert_fonts_to_spans' => TRUE,
      'remove_linebreaks' => TRUE,
      'css_setting' => 'theme',
      'css_path' => NULL,
      'css_classes' => NULL,
      'simple_source_formatting' => FALSE,
      'resize_enabled' => TRUE,
      'toolbarLocation' => 'top',
      'forcePasteAsPlainText' => FALSE,
    ),
    'preferences' => array(
      'add_to_summaries' => FALSE,
      'default' => TRUE,
      'show_toggle' => TRUE,
      'user_choose' => FALSE,
      'version' => '4.4.8.ccd0038',
    ),
    'name' => 'formatfull_html_track',
    'entity_type' => 'wysiwyg_profile',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
