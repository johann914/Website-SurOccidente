<?php
/**
 * @file
 * conceptos_sanitarios_de_carro_tanques.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function conceptos_sanitarios_de_carro_tanques_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques
  $menu_links['main-menu:salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques',
    'router_path' => 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques',
    'link_title' => 'Carrotanques',
    'options' => array(
      'cami' => array(
        'pages' => 'transparencia/informacion-interes/convocatoria/*
transparencia/informacion-interes/convocatoria
transparencia/informacion-interes/convocatorias/*
transparencia/informacion-interes/convocatoria
',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu_conceptos-sanitarios:<front>
  $menu_links['main-menu_conceptos-sanitarios:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Conceptos Sanitarios',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_path' => '<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Carrotanques');
  t('Conceptos Sanitarios');


  return $menu_links;
}
