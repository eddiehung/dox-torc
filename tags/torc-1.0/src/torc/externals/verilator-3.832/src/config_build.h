/* src/config_build.h.  Generated from config_build.h.in by configure.  */
// -*- C++ -*-
//*************************************************************************
// DESCRIPTION: Verilator: Configure source; system configuration
//
// This file is part of Verilator.
//
// Author: Wilson Snyder <wsnyder@wsnyder.org>
//
// Code available from: http://www.veripool.org/verilator
//
//*************************************************************************
//
// Copyright 2003-2012 by Wilson Snyder.  This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.
//
// Verilator is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
//*************************************************************************

//**********************************************************************
//**** Version and host name

// Autoconf substitutes this with the strings from AC_INIT.
#define PACKAGE_STRING "Verilator 3.832 2012-03-07"

#define DTVERSION	PACKAGE_STRING

//**********************************************************************
//**** Functions

//**********************************************************************
//**** Headers

//**********************************************************************
//**** Default environment

// Set defines to defaults for environment variables
// If set to "", this default is ignored and the user is expected
// to set them at Verilator runtime.

#ifndef DEFENV_SYSTEMC
# define DEFENV_SYSTEMC ""
#endif
#ifndef DEFENV_SYSTEMC_ARCH
# define DEFENV_SYSTEMC_ARCH ""
#endif
#ifndef DEFENV_SYSTEMC_INCLUDE
# define DEFENV_SYSTEMC_INCLUDE ""
#endif
#ifndef DEFENV_SYSTEMC_LIBDIR
# define DEFENV_SYSTEMC_LIBDIR ""
#endif
#ifndef DEFENV_SYSTEMPERL
# define DEFENV_SYSTEMPERL ""
#endif
#ifndef DEFENV_SYSTEMPERL_INCLUDE
# define DEFENV_SYSTEMPERL_INCLUDE ""
#endif
#ifndef DEFENV_VERILATOR_ROOT
# define DEFENV_VERILATOR_ROOT ""
#endif

//**********************************************************************
//**** Compile options

#include <sys/types.h>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

//**********************************************************************
//**** OS and compiler specifics

#include "verilatedos.h"

