<?php
/**
 * @file
 * rowdypulpit.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rowdypulpit_taxonomy_default_vocabularies() {
  return array(
    'issue' => array(
      'name' => 'Issue',
      'machine_name' => 'issue',
      'description' => 'The date of the issue, to allow Contrib nodes to be organized by issue on a particular date.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'microdata' => array(
        '#attributes' => array(
          'itemscope' => '',
        ),
      ),
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'section' => array(
      'name' => 'section',
      'machine_name' => 'section',
      'description' => 'site section',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'microdata' => array(
        '#attributes' => array(
          'itemscope' => '',
        ),
      ),
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
