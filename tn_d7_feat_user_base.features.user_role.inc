<?php
/**
 * @file
 * tn_d7_feat_user_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tn_d7_feat_user_base_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 4,
  );

  // Exported role: Contributor.
  $roles['Contributor'] = array(
    'name' => 'Contributor',
    'weight' => 2,
  );

  // Exported role: Developer.
  $roles['Developer'] = array(
    'name' => 'Developer',
    'weight' => 5,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 3,
  );

  return $roles;
}
