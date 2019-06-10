<?php
/**
 * @file
 * conceptos_sanitarios_de_carro_tanques.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function conceptos_sanitarios_de_carro_tanques_conditional_fields_default_fields() {
  $items = array();

  $items["node:carrotanques:0"] = array(
    'entity' => 'node',
    'bundle' => 'carrotanques',
    'dependent' => 'field_carrotanques_adjunto',
    'dependee' => 'field_carrotanques_recurso',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
        4 => array(
          1 => 1,
          3 => 0,
        ),
        5 => array(
          1 => 1,
          3 => 0,
        ),
        6 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 'adjunto',
      'value' => array(
        0 => array(
          'value' => 'adjunto',
        ),
      ),
      'values' => array(),
    ),
  );

  $items["node:carrotanques:1"] = array(
    'entity' => 'node',
    'bundle' => 'carrotanques',
    'dependent' => 'field_carrotanques_enlace',
    'dependee' => 'field_carrotanques_recurso',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
        4 => array(
          1 => 1,
          3 => 0,
        ),
        5 => array(
          1 => 1,
          3 => 0,
        ),
        6 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 'enlace',
      'value' => array(
        0 => array(
          'value' => 'enlace',
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}
