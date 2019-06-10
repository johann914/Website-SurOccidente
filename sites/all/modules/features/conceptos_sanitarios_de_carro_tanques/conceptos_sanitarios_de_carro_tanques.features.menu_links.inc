<?php
/**
 * @file
 * conceptos_sanitarios_de_carro_tanques.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function conceptos_sanitarios_de_carro_tanques_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-conceptos-sanitarios_carro-tanques:salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques.
  $menu_links['menu-menu-conceptos-sanitarios_carro-tanques:salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques'] = array(
    'menu_name' => 'menu-menu-conceptos-sanitarios',
    'link_path' => 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques',
    'router_path' => 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques',
    'link_title' => 'Carro Tanques',
    'options' => array(
      'cami' => array(
        'pages' => 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques/*
salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques
salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques/*
salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-conceptos-sanitarios_carro-tanques:salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Carro Tanques');

  return $menu_links;
}
