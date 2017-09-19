# Requiring 2.69 or higher autotools
AC_PREREQ([2.69])

# initialization
AC_INIT([music-manual], [0.1], [harleylorenzo512@gmail.com], [music-manual], [https://github.com/HarleyLorenzo/music-manual])

# setting C++ and checking compiler
AC_LANG(C++)
AC_PROG_CXX

# setup build-aux as the auxiliary build directory
AC_CONFIG_AUX_DIR([build-aux])

# setup the config.h header
AC_CONFIG_HEADERS([config.h])

# main.cc is the unique file to check
AC_CONFIG_SRCDIR([src/main.cc])

# Makefiles we need
AC_CONFIG_FILES([Makefile src/Makefile])

# initiate automake
AM_INIT_AUTOMAKE

# outputting to the makefiles
AC_OUTPUT
