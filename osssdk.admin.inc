<?php
/**
 * @file
 * Provides OSS SDK configuration form.
 *
 * @author Sawyer Chen ("csunny", http://drupal.org/user/784606)
 */

/**
 * Settings form.
 */
function osssdk_settings_form($form, &$form_state) {
  $form['required'] = array(
    '#type' => 'fieldset',
    '#title' => t('Aliyun OSS Access Key Info'),
  );
  $form['required']['oss_key_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Aliyun OSS Access Key ID'),
    '#default_value' => variable_get('oss_key_id', ''),
    '#required' => TRUE,
  );
  $form['required']['oss_key_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('Aliyun OSS Access Key Secret'),
    '#default_value' => variable_get('oss_key_secret', ''),
    '#required' => TRUE,
  );
  $form['#submit'][] = 'osssdk_settings_form_submit';
  return system_settings_form($form);
}

/**
 * Clear config cache to new settings take effect.
 */
function osssdk_settings_form_submit($form, &$form_state) {
  cache_clear_all('osssdk_config_load', 'cache');
}
