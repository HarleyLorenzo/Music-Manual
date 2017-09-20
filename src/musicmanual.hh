/* 
 * Header file defining all the functions within main.cpp
 */

namespace global_Vars
{
    int* argc;
    char*** argv;
    void initialize_Global_Vars (int* temp_argc, char*** temp_argv)
    {       
        /* Set the arguments into global memory */
        argc = temp_argc;
        argv = temp_argv;
    }
}

