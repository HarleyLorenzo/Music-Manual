/*
 *  The main source file of music-manual
 *  For license information, see COPYING
 */

/* include our header file that includes all the libraries we need */

/* c++ standard libraries */
#include <iostream>

/* other libraries */

/* local headers files we need */
#include "../config.h"
#include "musicmanual.hh"

int globalVars::initializeGlobalVars(int *p_argc, char***p_argv)
{
  /* To initialize global varriables */
  globalVars::argc = *p_argc;  // set our global argc
  globalVars::argv = new std::string[argc]; /* TODO: Finish this */
  for (int loopCounter = 0; loopCounter < )
  return 0;
}

/* Main function where our code begins */
int main (int argc, char* argv[])
{
  /* Call the function to initialize our global varriables */
  if (int temp_return = globalVars::initializeGlobalVars(&argc, &argv) != 0)
  {
    /* We need to check if initialize_Global_Vars succeeded
       This is a switch because more return values will be implemented */
    switch (temp_return)
    {
      case -1:
          std::cout << "An error has occured initiilizing global varriables!\n";
          return -1;
      default:
          std::cout << "Unknown return value initiilizing global varriables!\n";
          return -1;
    }
  }
  if (globalVars::argc > 1)
  {

    for (int argumentCounter = 1; argumentCounter < globalVars::argc--;
      argumentCounter++)
    {
      /* TODO: Convert argv to std::string type then use .compare()
         See: https://stackoverflow.com/questions/24957965/comparing-strings-c */
      if (globalVars::argv[argumentCounter] == "-V" ||
        argv[argumentCounter] == "--version")
      {
        std::cout << PACKAGE_STRING << "\nBug report address: <" <<
          PACKAGE_BUGREPORT << ">\n" << "Github page: <" << PACKAGE_URL << ">\n"
          << "This is free software licensed under GNU GPLv3 "
          << "<https://www.gnu.org/licenses/gpl.html>\n";
      }
      else
      {
        std::cout << "Unknown argument: " << globalVars::argv[argumentCounter]
          << std::endl;
      }
    }
  }
  else
  {
    std::cout << PACKAGE_STRING << "\nBug report address: <" <<
      PACKAGE_BUGREPORT << ">\n" << "Github page: <" << PACKAGE_URL << ">\n"
      << "This is free software licensed under GNU GPLv3 "
      << "<https://www.gnu.org/licenses/gpl.html>\n";
  }

  /* Terminate the program */
  return 0;
}
