<?php

/**
 * @file
 * The PHP page that serves all page requests on a Drupal installation.
 *
 * The routines here dispatch control to the appropriate handler, which then
 * prints the appropriate page.
 *
 * All Drupal code is released under the GNU General Public License.
 * See COPYRIGHT.txt and LICENSE.txt.
 */

/**
 * Root directory of Drupal installation.
 */
//getcwd() can get the current working directory. It is a php framework function.
define('DRUPAL_ROOT', getcwd());//It is a difination
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
//Basical functions in bootstrap.inc file
//Set the basic function
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);//from bootstrap.inc
//Menu is more important for dynamic content web
menu_execute_active_handler();//from menu.inc
//phpinfo();
