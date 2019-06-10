<?php
/**
 * @file
 * conceptos_sanitarios_de_carro_tanques.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function conceptos_sanitarios_de_carro_tanques_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function conceptos_sanitarios_de_carro_tanques_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function conceptos_sanitarios_de_carro_tanques_node_info() {
  $items = array(
    'carrotanques' => array(
      'name' => t('Carro Tanques'),
      'base' => 'node_content',
      'description' => t('Gestiona los conceptos sanitarios de carro tanques de la entidad o relacionadas, hace parte de la Información de Interés'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
