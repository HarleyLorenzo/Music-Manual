/*
 * The main source file of music-manual
 */

/* Include our header file that includes all the libraries we need */

/* C++ standard libraries */
#include <iostream>
#include <vector>

/* Other libraries */
#include <pulse/pulseaudio.h>

/* Header files we need */
#include "main.hpp"

namespace global_Vars
{
    int* argc;
    char* argv[];
    initialize_Global_Vars (unsigned int* temp_argc, char* temp_argv[])
    {       
        /* Set the arguments into global memory */
        argc = temp_argc;
        argv = temp_argv;
    }
}

int main (unsigned int argc, char* argv[]) 
{
    
    global_Vars::initialize_Global_Vars(argc, argv);
    
    return 0;
}