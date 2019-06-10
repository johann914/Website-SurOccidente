<?php
/**
 * @file
 * conceptos_sanitarios_de_carro_tanques.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function conceptos_sanitarios_de_carro_tanques_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'conceptos-sanitarios';
  $context->description = '';
  $context->tag = 'Conceptos Sanitarios';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'carrotanques' => 'carrotanques',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios' => 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios',
        'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/*' => 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/*',
        'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques' => 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques',
        'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques/*' => 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-conceptos-sanitarios' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-conceptos-sanitarios',
          'region' => 'posicion_e_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Conceptos Sanitarios');
  $export['conceptos-sanitarios'] = $context;

  return $export;
}
