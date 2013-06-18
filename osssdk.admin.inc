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

  return system_settings_form($form);
}

