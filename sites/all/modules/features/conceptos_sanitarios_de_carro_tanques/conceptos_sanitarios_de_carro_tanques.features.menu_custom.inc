<?php
/**
 * @file
 * conceptos_sanitarios_de_carro_tanques.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function conceptos_sanitarios_de_carro_tanques_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-conceptos-sanitarios.
  $menus['menu-menu-conceptos-sanitarios'] = array(
    'menu_name' => 'menu-menu-conceptos-sanitarios',
    'title' => 'Menú Conceptos Sanitarios',
    'description' => 'Menú para característica funcional de conceptos sanitarios',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menú Conceptos Sanitarios');
  t('Menú para característica funcional de conceptos sanitarios');

  return $menus;
}
