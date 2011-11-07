<?php
/**
 * @file
 * lullablogas.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lullablogas_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lullablogas_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function lullablogas_node_info() {
  $items = array(
    'blogis' => array(
      'name' => t('Blogis'),
      'base' => 'node_content',
      'description' => t('Just some random content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
