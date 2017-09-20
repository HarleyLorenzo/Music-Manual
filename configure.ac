# Requiring 2.69 or higher autotools
AC_PREREQ([2.69])

# initialization
AC_INIT([music-manual], [0.1], [harleylorenzo512@gmail.com], [music-manual], [https://github.com/HarleyLorenzo/music-manual])

# setting C++ and checking compiler
AC_LANG(C++)
AC_PROG_CXX

# require c++14 support
ax_cxx_compile_stdcxx_14

# setup build-aux as the auxiliary build directory
AC_CONFIG_AUX_DIR([build-aux])

# setup the config.h header
AC_CONFIG_HEADERS([config.h])

# main.cc is the unique file to check
AC_CONFIG_SRCDIR([src/musicmanual.cc])

# set only Makefile
AC_CONFIG_FILES([Makefile])

# initiate automake, subdir objects for forward-compatability
AM_INIT_AUTOMAKE([subdir-objects])

# outputting to the makefiles
AC_OUTPUT
