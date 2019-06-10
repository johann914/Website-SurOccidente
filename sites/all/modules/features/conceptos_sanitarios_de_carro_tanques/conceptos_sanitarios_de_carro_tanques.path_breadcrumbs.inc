<?php
/**
 * @file
 * conceptos_sanitarios_de_carro_tanques.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function conceptos_sanitarios_de_carro_tanques_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'carro_tanques';
  $path_breadcrumb->name = 'Carro Tanques';
  $path_breadcrumb->path = 'node/%ncarrotanques';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Salud Urbana',
      1 => 'Vigilancia en Salud Pública',
      2 => 'Conceptos Sanitarios',
      3 => 'Carro Tanques',
      4 => '%ncarrotanques:title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => '<none>',
      3 => '<none>',
      4 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'ncarrotanques' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Nodo: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'carrotanques' => 'carrotanques',
            ),
          ),
          'context' => 'ncarrotanques',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques/*
salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanque/',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -50;
  $export['carro_tanques'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'carrotanques';
  $path_breadcrumb->name = 'Carro Tanques Home';
  $path_breadcrumb->path = 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Salud Urbana',
      1 => 'Vigilancia en Salud Pública',
      2 => 'Conceptos Sanitarios',
      3 => 'Carro Tanques',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => '<none>',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -49;
  $export['carrotanques'] = $path_breadcrumb;

  return $export;
}
