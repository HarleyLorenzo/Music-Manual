/*
 *  Header file containing musicmanual.cc definitions to be included in
 *  other source files
 *  For license information, see COPYING
 */

/* includes */
#include <iostream>

/* namespaces */
namespace globalVars
{
  /* Namespace including all global varriables and their related functions */
  int argc; /* global argc because musicmanual will need to access
               these later */
  std::string* argv; /* global argc because musicmanual will need to
                        access these later */
  int initializeGlobalVars (int*, char***);
}
