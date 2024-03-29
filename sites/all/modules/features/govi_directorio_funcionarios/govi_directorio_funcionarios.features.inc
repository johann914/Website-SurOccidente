<?php
/**
 * @file
 * govi_directorio_funcionarios.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_directorio_funcionarios_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function govi_directorio_funcionarios_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_directorio_funcionarios_node_info() {
  $items = array(
    'directorio_funcionarios' => array(
      'name' => t('Directorio Funcionarios'),
      'base' => 'node_content',
      'description' => t('Este tipo de contenido permitirá gestionar los datos básicos de contacto de los funcionarios '),
      'has_title' => '1',
      'title_label' => t('Nombre completo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
