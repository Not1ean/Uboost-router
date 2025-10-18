# generated automatically by aclocal 1.16.5 -*- Autoconf -*-

# Copyright (C) 1996-2021 Free Software Foundation, Inc.

# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.

m4_ifndef([AC_CONFIG_MACRO_DIRS], [m4_defun([_AM_CONFIG_MACRO_DIRS], [])m4_defun([AC_CONFIG_MACRO_DIRS], [_AM_CONFIG_MACRO_DIRS($@)])])
m4_ifndef([AC_AUTOCONF_VERSION],
  [m4_copy([m4_PACKAGE_VERSION], [AC_AUTOCONF_VERSION])])dnl
m4_if(m4_defn([AC_AUTOCONF_VERSION]), [2.71],,
[m4_warning([this file was generated for autoconf 2.71.
You have another version of autoconf.  It may work, but is not guaranteed to.
If you have problems, you may need to regenerate the build system entirely.
To do so, use the procedure documented by the package, typically 'autoreconf'.])])

m4_include([m4/gnulib-comp.m4])
m4_include([m4/libtool.m4])
m4_include([m4/ltargz.m4])
m4_include([m4/ltdl.m4])
m4_include([m4/ltoptions.m4])
m4_include([m4/ltsugar.m4])
m4_include([m4/ltversion.m4])
m4_include([m4/lt~obsolete.m4])
m4_include([m4/m4.m4])
# Copyright (C) 2002-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# AM_AUTOMAKE_VERSION(VERSION)
# ----------------------------
# Automake X.Y traces this macro to ensure aclocal.m4 has been
# generated from the m4 files accompanying Automake X.Y.
# (This private macro should not be called outside this file.)
AC_DEFUN([AM_AUTOMAKE_VERSION],
[am__api_version='1.16'
dnl Some users find AM_AUTOMAKE_VERSION and mistake it for a way to
dnl require some minimum version.  Point them to the right macro.
m4_if([$1], [1.16.5], [],
      [AC_FATAL([Do not call $0, use AM_INIT_AUTOMAKE([$1]).])])dnl
])

# _AM_AUTOCONF_VERSION(VERSION)
# -----------------------------
# aclocal traces this macro to find the Autoconf version.
# This is a private macro too.  Using m4_define simplifies
# the logic in aclocal, which can simply ignore this definition.
m4_define([_AM_AUTOCONF_VERSION], [])

# AM_SET_CURRENT_AUTOMAKE_VERSION
# -------------------------------
# Call AM_AUTOMAKE_VERSION and AM_AUTOMAKE_VERSION so they can be traced.
# This function is AC_REQUIREd by AM_INIT_AUTOMAKE.
AC_DEFUN([AM_SET_CURRENT_AUTOMAKE_VERSION],
[AM_AUTOMAKE_VERSION([1.16.5])dnl
m4_ifndef([AC_AUTOCONF_VERSION],
  [m4_copy([m4_PACKAGE_VERSION], [AC_AUTOCONF_VERSION])])dnl
_AM_AUTOCONF_VERSION(m4_defn([AC_AUTOCONF_VERSION]))])

# AM_AUX_DIR_EXPAND                                         -*- Autoconf -*-

# Copyright (C) 2001-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# For projects using AC_CONFIG_AUX_DIR([foo]), Autoconf sets
# $ac_aux_dir to '$srcdir/foo'.  In other projects, it is set to
# '$srcdir', '$srcdir/..', or '$srcdir/../..'.
#
# Of course, Automake must honor this variable whenever it calls a
# tool from the auxiliary directory.  The problem is that $srcdir (and
# therefore $ac_aux_dir as well) can be either absolute or relative,
# depending on how configure is run.  This is pretty annoying, since
# it makes $ac_aux_dir quite unusable in subdirectories: in the top
# source directory, any form will work fine, but in subdirectories a
# relative path needs to be adjusted first.
#
# $ac_aux_dir/missing
#    fails when called from a subdirectory if $ac_aux_dir is relative
# $top_srcdir/$ac_aux_dir/missing
#    fails if $ac_aux_dir is absolute,
#    fails when called from a subdirectory in a VPATH build with
#          a relative $ac_aux_dir
#
# The reason of the latter failure is that $top_srcdir and $ac_aux_dir
# are both prefixed by $srcdir.  In an in-source build this is usually
# harmless because $srcdir is '.', but things will broke when you
# start a VPATH build or use an absolute $srcdir.
#
# So we could use something similar to $top_srcdir/$ac_aux_dir/missing,
# iff we strip the leading $srcdir from $ac_aux_dir.  That would be:
#   am_aux_dir='\$(top_srcdir)/'`expr "$ac_aux_dir" : "$srcdir//*\(.*\)"`
# and then we would define $MISSING as
#   MISSING="\${SHELL} $am_aux_dir/missing"
# This will work as long as MISSING is not called from configure, because
# unfortunately $(top_srcdir) has no meaning in configure.
# However there are other variables, like CC, which are often used in
# configure, and could therefore not use this "fixed" $ac_aux_dir.
#
# Another solution, used here, is to always expand $ac_aux_dir to an
# absolute PATH.  The drawback is that using absolute paths prevent a
# configured tree to be moved without reconfiguration.

AC_DEFUN([AM_AUX_DIR_EXPAND],
[AC_REQUIRE([AC_CONFIG_AUX_DIR_DEFAULT])dnl
# Expand $ac_aux_dir to an absolute path.
am_aux_dir=`cd "$ac_aux_dir" && pwd`
])

# AM_CONDITIONAL                                            -*- Autoconf -*-

# Copyright (C) 1997-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# AM_CONDITIONAL(NAME, SHELL-CONDITION)
# -------------------------------------
# Define a conditional.
AC_DEFUN([AM_CONDITIONAL],
[AC_PREREQ([2.52])dnl
 m4_if([$1], [TRUE],  [AC_FATAL([$0: invalid condition: $1])],
       [$1], [FALSE], [AC_FATAL([$0: invalid condition: $1])])dnl
AC_SUBST([$1_TRUE])dnl
AC_SUBST([$1_FALSE])dnl
_AM_SUBST_NOTMAKE([$1_TRUE])dnl
_AM_SUBST_NOTMAKE([$1_FALSE])dnl
m4_define([_AM_COND_VALUE_$1], [$2])dnl
if $2; then
  $1_TRUE=
  $1_FALSE='#'
else
  $1_TRUE='#'
  $1_FALSE=
fi
AC_CONFIG_COMMANDS_PRE(
[if test -z "${$1_TRUE}" && test -z "${$1_FALSE}"; then
  AC_MSG_ERROR([[conditional "$1" was never defined.
Usually this means the macro was only invoked conditionally.]])
fi])])

# Copyright (C) 1999-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.


# There are a few dirty hacks below to avoid letting 'AC_PROG_CC' be
# written in clear, in which case automake, when reading aclocal.m4,
# will think it sees a *use*, and therefore will trigger all it's
# C support machinery.  Also note that it means that autoscan, seeing
# CC etc. in the Makefile, will ask for an AC_PROG_CC use...


# _AM_DEPENDENCIES(NAME)
# ----------------------
# See how the compiler implements dependency checking.
# NAME is "CC", "CXX", "OBJC", "OBJCXX", "UPC", or "GJC".
# We try a few techniques and use that to set a single cache variable.
#
# We don't AC_REQUIRE the corresponding AC_PROG_CC since the latter was
# modified to invoke _AM_DEPENDENCIES(CC); we would have a circular
# dependency, and given that the user is not expected to run this macro,
# just rely on AC_PROG_CC.
AC_DEFUN([_AM_DEPENDENCIES],
[AC_REQUIRE([AM_SET_DEPDIR])dnl
AC_REQUIRE([AM_OUTPUT_DEPENDENCY_COMMANDS])dnl
AC_REQUIRE([AM_MAKE_INCLUDE])dnl
AC_REQUIRE([AM_DEP_TRACK])dnl

m4_if([$1], [CC],   [depcc="$CC"   am_compiler_list=],
      [$1], [CXX],  [depcc="$CXX"  am_compiler_list=],
      [$1], [OBJC], [depcc="$OBJC" am_compiler_list='gcc3 gcc'],
      [$1], [OBJCXX], [depcc="$OBJCXX" am_compiler_list='gcc3 gcc'],
      [$1], [UPC],  [depcc="$UPC"  am_compiler_list=],
      [$1], [GCJ],  [depcc="$GCJ"  am_compiler_list='gcc3 gcc'],
                    [depcc="$$1"   am_compiler_list=])

AC_CACHE_CHECK([dependency style of $depcc],
               [am_cv_$1_dependencies_compiler_type],
[if test -z "$AMDEP_TRUE" && test -f "$am_depcomp"; then
  # We make a subdir and do the tests there.  Otherwise we can end up
  # making bogus files that we don't know about and never remove.  For
  # instance it was reported that on HP-UX the gcc test will end up
  # making a dummy file named 'D' -- because '-MD' means "put the output
  # in D".
  rm -rf conftest.dir
  mkdir conftest.dir
  # Copy depcomp to subdir because otherwise we won't find it if we're
  # using a relative directory.
  cp "$am_depcomp" conftest.dir
  cd conftest.dir
  # We will build objects and dependencies in a subdirectory because
  # it helps to detect inapplicable dependency modes.  For instance
  # both Tru64's cc and ICC support -MD to output dependencies as a
  # side effect of compilation, but ICC will put the dependencies in
  # the current directory while Tru64 will put them in the object
  # directory.
  mkdir sub

  am_cv_$1_dependencies_compiler_type=none
  if test "$am_compiler_list" = ""; then
     am_compiler_list=`sed -n ['s/^#*\([a-zA-Z0-9]*\))$/\1/p'] < ./depcomp`
  fi
  am__universal=false
  m4_case([$1], [CC],
    [case " $depcc " in #(
     *\ -arch\ *\ -arch\ *) am__universal=true ;;
     esac],
    [CXX],
    [case " $depcc " in #(
     *\ -arch\ *\ -arch\ *) am__universal=true ;;
     esac])

  for depmode in $am_compiler_list; do
    # Setup a source with many dependencies, because some compilers
    # like to wrap large dependency lists on column 80 (with \), and
    # we should not choose a depcomp mode which is confused by this.
    #
    # We need to recreate these files for each test, as the compiler may
    # overwrite some of them when testing with obscure command lines.
    # This happens at least with the AIX C compiler.
    : > sub/conftest.c
    for i in 1 2 3 4 5 6; do
      echo '#include "conftst'$i'.h"' >> sub/conftest.c
      # Using ": > sub/conftst$i.h" creates only sub/conftst1.h with
      # Solaris 10 /bin/sh.
      echo '/* dummy */' > sub/conftst$i.h
    done
    echo "${am__include} ${am__quote}sub/conftest.Po${am__quote}" > confmf

    # We check with '-c' and '-o' for the sake of the "dashmstdout"
    # mode.  It turns out that the SunPro C++ compiler does not properly
    # handle '-M -o', and we need to detect this.  Also, some Intel
    # versions had trouble with output in subdirs.
    am__obj=sub/conftest.${OBJEXT-o}
    am__minus_obj="-o $am__obj"
    case $depmode in
    gcc)
      # This depmode causes a compiler race in universal mode.
      test "$am__universal" = false || continue
      ;;
    nosideeffect)
      # After this tag, mechanisms are not by side-effect, so they'll
      # only be used when explicitly requested.
      if test "x$enable_dependency_tracking" = xyes; then
	continue
      else
	break
      fi
      ;;
    msvc7 | msvc7msys | msvisualcpp | msvcmsys)
      # This compiler won't grok '-c -o', but also, the minuso test has
      # not run yet.  These depmodes are late enough in the game, and
      # so weak that their functioning should not be impacted.
      am__obj=conftest.${OBJEXT-o}
      am__minus_obj=
      ;;
    none) break ;;
    esac
    if depmode=$depmode \
       source=sub/conftest.c object=$am__obj \
       depfile=sub/conftest.Po tmpdepfile=sub/conftest.TPo \
       $SHELL ./depcomp $depcc -c $am__minus_obj sub/conftest.c \
         >/dev/null 2>conftest.err &&
       grep sub/conftst1.h sub/conftest.Po > /dev/null 2>&1 &&
       grep sub/conftst6.h sub/conftest.Po > /dev/null 2>&1 &&
       grep $am__obj sub/conftest.Po > /dev/null 2>&1 &&
       ${MAKE-make} -s -f confmf > /dev/null 2>&1; then
      # icc doesn't choke on unknown options, it will just issue warnings
      # or remarks (even with -Werror).  So we grep stderr for any message
      # that says an option was ignored or not supported.
      # When given -MP, icc 7.0 and 7.1 complain thusly:
      #   icc: Command line warning: ignoring option '-M'; no argument required
      # The diagnosis changed in icc 8.0:
      #   icc: Command line remark: option '-MP' not supported
      if (grep 'ignoring option' conftest.err ||
          grep 'not supported' conftest.err) >/dev/null 2>&1; then :; else
        am_cv_$1_dependencies_compiler_type=$depmode
        break
      fi
    fi
  done

  cd ..
  rm -rf conftest.dir
else
  am_cv_$1_dependencies_compiler_type=none
fi
])
AC_SUBST([$1DEPMODE], [depmode=$am_cv_$1_dependencies_compiler_type])
AM_CONDITIONAL([am__fastdep$1], [
  test "x$enable_dependency_tracking" != xno \
  && test "$am_cv_$1_dependencies_compiler_type" = gcc3])
])


# AM_SET_DEPDIR
# -------------
# Choose a directory name for dependency files.
# This macro is AC_REQUIREd in _AM_DEPENDENCIES.
AC_DEFUN([AM_SET_DEPDIR],
[AC_REQUIRE([AM_SET_LEADING_DOT])dnl
AC_SUBST([DEPDIR], ["${am__leading_dot}deps"])dnl
])


# AM_DEP_TRACK
# ------------
AC_DEFUN([AM_DEP_TRACK],
[AC_ARG_ENABLE([dependency-tracking], [dnl
AS_HELP_STRING(
  [--enable-dependency-tracking],
  [do not reject slow dependency extractors])
AS_HELP_STRING(
  [--disable-dependency-tracking],
  [speeds up one-time build])])
if test "x$enable_dependency_tracking" != xno; then
  am_depcomp="$ac_aux_dir/depcomp"
  AMDEPBACKSLASH='\'
  am__nodep='_no'
fi
AM_CONDITIONAL([AMDEP], [test "x$enable_dependency_tracking" != xno])
AC_SUBST([AMDEPBACKSLASH])dnl
_AM_SUBST_NOTMAKE([AMDEPBACKSLASH])dnl
AC_SUBST([am__nodep])dnl
_AM_SUBST_NOTMAKE([am__nodep])dnl
])

# Generate code to set up dependency tracking.              -*- Autoconf -*-

# Copyright (C) 1999-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# _AM_OUTPUT_DEPENDENCY_COMMANDS
# ------------------------------
AC_DEFUN([_AM_OUTPUT_DEPENDENCY_COMMANDS],
[{
  # Older Autoconf quotes --file arguments for eval, but not when files
  # are listed without --file.  Let's play safe and only enable the eval
  # if we detect the quoting.
  # TODO: see whether this extra hack can be removed once we start
  # requiring Autoconf 2.70 or later.
  AS_CASE([$CONFIG_FILES],
          [*\'*], [eval set x "$CONFIG_FILES"],
          [*], [set x $CONFIG_FILES])
  shift
  # Used to flag and report bootstrapping failures.
  am_rc=0
  for am_mf
  do
    # Strip MF so we end up with the name of the file.
    am_mf=`AS_ECHO(["$am_mf"]) | sed -e 's/:.*$//'`
    # Check whether this is an Automake generated Makefile which includes
    # dependency-tracking related rules and includes.
    # Grep'ing the whole file directly is not great: AIX grep has a line
    # limit of 2048, but all sed's we know have understand at least 4000.
    sed -n 's,^am--depfiles:.*,X,p' "$am_mf" | grep X >/dev/null 2>&1 \
      || continue
    am_dirpart=`AS_DIRNAME(["$am_mf"])`
    am_filepart=`AS_BASENAME(["$am_mf"])`
    AM_RUN_LOG([cd "$am_dirpart" \
      && sed -e '/# am--include-marker/d' "$am_filepart" \
        | $MAKE -f - am--depfiles]) || am_rc=$?
  done
  if test $am_rc -ne 0; then
    AC_MSG_FAILURE([Something went wrong bootstrapping makefile fragments
    for automatic dependency tracking.  If GNU make was not used, consider
    re-running the configure script with MAKE="gmake" (or whatever is
    necessary).  You can also try re-running configure with the
    '--disable-dependency-tracking' option to at least be able to build
    the package (albeit without support for automatic dependency tracking).])
  fi
  AS_UNSET([am_dirpart])
  AS_UNSET([am_filepart])
  AS_UNSET([am_mf])
  AS_UNSET([am_rc])
  rm -f conftest-deps.mk
}
])# _AM_OUTPUT_DEPENDENCY_COMMANDS


# AM_OUTPUT_DEPENDENCY_COMMANDS
# -----------------------------
# This macro should only be invoked once -- use via AC_REQUIRE.
#
# This code is only required when automatic dependency tracking is enabled.
# This creates each '.Po' and '.Plo' makefile fragment that we'll need in
# order to bootstrap the dependency handling code.
AC_DEFUN([AM_OUTPUT_DEPENDENCY_COMMANDS],
[AC_CONFIG_COMMANDS([depfiles],
     [test x"$AMDEP_TRUE" != x"" || _AM_OUTPUT_DEPENDENCY_COMMANDS],
     [AMDEP_TRUE="$AMDEP_TRUE" MAKE="${MAKE-make}"])])

# Do all the work for Automake.                             -*- Autoconf -*-

# Copyright (C) 1996-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This macro actually does too much.  Some checks are only needed if
# your package does certain things.  But this isn't really a big deal.

dnl Redefine AC_PROG_CC to automatically invoke _AM_PROG_CC_C_O.
m4_define([AC_PROG_CC],
m4_defn([AC_PROG_CC])
[_AM_PROG_CC_C_O
])

# AM_INIT_AUTOMAKE(PACKAGE, VERSION, [NO-DEFINE])
# AM_INIT_AUTOMAKE([OPTIONS])
# -----------------------------------------------
# The call with PACKAGE and VERSION arguments is the old style
# call (pre autoconf-2.50), which is being phased out.  PACKAGE
# and VERSION should now be passed to AC_INIT and removed from
# the call to AM_INIT_AUTOMAKE.
# We support both call styles for the transition.  After
# the next Automake release, Autoconf can make the AC_INIT
# arguments mandatory, and then we can depend on a new Autoconf
# release and drop the old call support.
AC_DEFUN([AM_INIT_AUTOMAKE],
[AC_PREREQ([2.65])dnl
m4_ifdef([_$0_ALREADY_INIT],
  [m4_fatal([$0 expanded multiple times
]m4_defn([_$0_ALREADY_INIT]))],
  [m4_define([_$0_ALREADY_INIT], m4_expansion_stack)])dnl
dnl Autoconf wants to disallow AM_ names.  We explicitly allow
dnl the ones we care about.
m4_pattern_allow([^AM_[A-Z]+FLAGS$])dnl
AC_REQUIRE([AM_SET_CURRENT_AUTOMAKE_VERSION])dnl
AC_REQUIRE([AC_PROG_INSTALL])dnl
if test "`cd $srcdir && pwd`" != "`pwd`"; then
  # Use -I$(srcdir) only when $(srcdir) != ., so that make's output
  # is not polluted with repeated "-I."
  AC_SUBST([am__isrc], [' -I$(srcdir)'])_AM_SUBST_NOTMAKE([am__isrc])dnl
  # test to see if srcdir already configured
  if test -f $srcdir/config.status; then
    AC_MSG_ERROR([source directory already configured; run "make distclean" there first])
  fi
fi

# test whether we have cygpath
if test -z "$CYGPATH_W"; then
  if (cygpath --version) >/dev/null 2>/dev/null; then
    CYGPATH_W='cygpath -w'
  else
    CYGPATH_W=echo
  fi
fi
AC_SUBST([CYGPATH_W])

# Define the identity of the package.
dnl Distinguish between old-style and new-style calls.
m4_ifval([$2],
[AC_DIAGNOSE([obsolete],
             [$0: two- and three-arguments forms are deprecated.])
m4_ifval([$3], [_AM_SET_OPTION([no-define])])dnl
 AC_SUBST([PACKAGE], [$1])dnl
 AC_SUBST([VERSION], [$2])],
[_AM_SET_OPTIONS([$1])dnl
dnl Diagnose old-style AC_INIT with new-style AM_AUTOMAKE_INIT.
m4_if(
  m4_ifset([AC_PACKAGE_NAME], [ok]):m4_ifset([AC_PACKAGE_VERSION], [ok]),
  [ok:ok],,
  [m4_fatal([AC_INIT should be called with package and version arguments])])dnl
 AC_SUBST([PACKAGE], ['AC_PACKAGE_TARNAME'])dnl
 AC_SUBST([VERSION], ['AC_PACKAGE_VERSION'])])dnl

_AM_IF_OPTION([no-define],,
[AC_DEFINE_UNQUOTED([PACKAGE], ["$PACKAGE"], [Name of package])
 AC_DEFINE_UNQUOTED([VERSION], ["$VERSION"], [Version number of package])])dnl

# Some tools Automake needs.
AC_REQUIRE([AM_SANITY_CHECK])dnl
AC_REQUIRE([AC_ARG_PROGRAM])dnl
AM_MISSING_PROG([ACLOCAL], [aclocal-${am__api_version}])
AM_MISSING_PROG([AUTOCONF], [autoconf])
AM_MISSING_PROG([AUTOMAKE], [automake-${am__api_version}])
AM_MISSING_PROG([AUTOHEADER], [autoheader])
AM_MISSING_PROG([MAKEINFO], [makeinfo])
AC_REQUIRE([AM_PROG_INSTALL_SH])dnl
AC_REQUIRE([AM_PROG_INSTALL_STRIP])dnl
AC_REQUIRE([AC_PROG_MKDIR_P])dnl
# For better backward compatibility.  To be removed once Automake 1.9.x
# dies out for good.  For more background, see:
# <https://lists.gnu.org/archive/html/automake/2012-07/msg00001.html>
# <https://lists.gnu.org/archive/html/automake/2012-07/msg00014.html>
AC_SUBST([mkdir_p], ['$(MKDIR_P)'])
# We need awk for the "check" target (and possibly the TAP driver).  The
# system "awk" is bad on some platforms.
AC_REQUIRE([AC_PROG_AWK])dnl
AC_REQUIRE([AC_PROG_MAKE_SET])dnl
AC_REQUIRE([AM_SET_LEADING_DOT])dnl
_AM_IF_OPTION([tar-ustar], [_AM_PROG_TAR([ustar])],
	      [_AM_IF_OPTION([tar-pax], [_AM_PROG_TAR([pax])],
			     [_AM_PROG_TAR([v7])])])
_AM_IF_OPTION([no-dependencies],,
[AC_PROVIDE_IFELSE([AC_PROG_CC],
		  [_AM_DEPENDENCIES([CC])],
		  [m4_define([AC_PROG_CC],
			     m4_defn([AC_PROG_CC])[_AM_DEPENDENCIES([CC])])])dnl
AC_PROVIDE_IFELSE([AC_PROG_CXX],
		  [_AM_DEPENDENCIES([CXX])],
		  [m4_define([AC_PROG_CXX],
			     m4_defn([AC_PROG_CXX])[_AM_DEPENDENCIES([CXX])])])dnl
AC_PROVIDE_IFELSE([AC_PROG_OBJC],
		  [_AM_DEPENDENCIES([OBJC])],
		  [m4_define([AC_PROG_OBJC],
			     m4_defn([AC_PROG_OBJC])[_AM_DEPENDENCIES([OBJC])])])dnl
AC_PROVIDE_IFELSE([AC_PROG_OBJCXX],
		  [_AM_DEPENDENCIES([OBJCXX])],
		  [m4_define([AC_PROG_OBJCXX],
			     m4_defn([AC_PROG_OBJCXX])[_AM_DEPENDENCIES([OBJCXX])])])dnl
])
# Variables for tags utilities; see am/tags.am
if test -z "$CTAGS"; then
  CTAGS=ctags
fi
AC_SUBST([CTAGS])
if test -z "$ETAGS"; then
  ETAGS=etags
fi
AC_SUBST([ETAGS])
if test -z "$CSCOPE"; then
  CSCOPE=cscope
fi
AC_SUBST([CSCOPE])

AC_REQUIRE([AM_SILENT_RULES])dnl
dnl The testsuite driver may need to know about EXEEXT, so add the
dnl 'am__EXEEXT' conditional if _AM_COMPILER_EXEEXT was seen.  This
dnl macro is hooked onto _AC_COMPILER_EXEEXT early, see below.
AC_CONFIG_COMMANDS_PRE(dnl
[m4_provide_if([_AM_COMPILER_EXEEXT],
  [AM_CONDITIONAL([am__EXEEXT], [test -n "$EXEEXT"])])])dnl

# POSIX will say in a future version that running "rm -f" with no argument
# is OK; and we want to be able to make that assumption in our Makefile
# recipes.  So use an aggressive probe to check that the usage we want is
# actually supported "in the wild" to an acceptable degree.
# See automake bug#10828.
# To make any issue more visible, cause the running configure to be aborted
# by default if the 'rm' program in use doesn't match our expectations; the
# user can still override this though.
if rm -f && rm -fr && rm -rf; then : OK; else
  cat >&2 <<'END'
Oops!

Your 'rm' program seems unable to run without file operands specified
on the command line, even when the '-f' option is present.  This is contrary
to the behaviour of most rm programs out there, and not conforming with
the upcoming POSIX standard: <http://austingroupbugs.net/view.php?id=542>

Please tell bug-automake@gnu.org about your system, including the value
of your $PATH and any error possibly output before this message.  This
can help us improve future automake versions.

END
  if test x"$ACCEPT_INFERIOR_RM_PROGRAM" = x"yes"; then
    echo 'Configuration will proceed anyway, since you have set the' >&2
    echo 'ACCEPT_INFERIOR_RM_PROGRAM variable to "yes"' >&2
    echo >&2
  else
    cat >&2 <<'END'
Aborting the configuration process, to ensure you take notice of the issue.

You can download and install GNU coreutils to get an 'rm' implementation
that behaves properly: <https://www.gnu.org/software/coreutils/>.

If you want to complete the configuration process using your problematic
'rm' anyway, export the environment variable ACCEPT_INFERIOR_RM_PROGRAM
to "yes", and re-run configure.

END
    AC_MSG_ERROR([Your 'rm' program is bad, sorry.])
  fi
fi
dnl The trailing newline in this macro's definition is deliberate, for
dnl backward compatibility and to allow trailing 'dnl'-style comments
dnl after the AM_INIT_AUTOMAKE invocation. See automake bug#16841.
])

dnl Hook into '_AC_COMPILER_EXEEXT' early to learn its expansion.  Do not
dnl add the conditional right here, as _AC_COMPILER_EXEEXT may be further
dnl mangled by Autoconf and run in a shell conditional statement.
m4_define([_AC_COMPILER_EXEEXT],
m4_defn([_AC_COMPILER_EXEEXT])[m4_provide([_AM_COMPILER_EXEEXT])])

# When config.status generates a header, we must update the stamp-h file.
# This file resides in the same directory as the config header
# that is generated.  The stamp files are numbered to have different names.

# Autoconf calls _AC_AM_CONFIG_HEADER_HOOK (when defined) in the
# loop where config.status creates the headers, so we can generate
# our stamp files there.
AC_DEFUN([_AC_AM_CONFIG_HEADER_HOOK],
[# Compute $1's index in $config_headers.
_am_arg=$1
_am_stamp_count=1
for _am_header in $config_headers :; do
  case $_am_header in
    $_am_arg | $_am_arg:* )
      break ;;
    * )
      _am_stamp_count=`expr $_am_stamp_count + 1` ;;
  esac
done
echo "timestamp for $_am_arg" >`AS_DIRNAME(["$_am_arg"])`/stamp-h[]$_am_stamp_count])

# Copyright (C) 2001-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# AM_PROG_INSTALL_SH
# ------------------
# Define $install_sh.
AC_DEFUN([AM_PROG_INSTALL_SH],
[AC_REQUIRE([AM_AUX_DIR_EXPAND])dnl
if test x"${install_sh+set}" != xset; then
  case $am_aux_dir in
  *\ * | *\	*)
    install_sh="\${SHELL} '$am_aux_dir/install-sh'" ;;
  *)
    install_sh="\${SHELL} $am_aux_dir/install-sh"
  esac
fi
AC_SUBST([install_sh])])

# Copyright (C) 2003-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# Check whether the underlying file-system supports filenames
# with a leading dot.  For instance MS-DOS doesn't.
AC_DEFUN([AM_SET_LEADING_DOT],
[rm -rf .tst 2>/dev/null
mkdir .tst 2>/dev/null
if test -d .tst; then
  am__leading_dot=.
else
  am__leading_dot=_
fi
rmdir .tst 2>/dev/null
AC_SUBST([am__leading_dot])])

# Check to see how 'make' treats includes.	            -*- Autoconf -*-

# Copyright (C) 2001-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# AM_MAKE_INCLUDE()
# -----------------
# Check whether make has an 'include' directive that can support all
# the idioms we need for our automatic dependency tracking code.
AC_DEFUN([AM_MAKE_INCLUDE],
[AC_MSG_CHECKING([whether ${MAKE-make} supports the include directive])
cat > confinc.mk << 'END'
am__doit:
	@echo this is the am__doit target >confinc.out
.PHONY: am__doit
END
am__include="#"
am__quote=
# BSD make does it like this.
echo '.include "confinc.mk" # ignored' > confmf.BSD
# Other make implementations (GNU, Solaris 10, AIX) do it like this.
echo 'include confinc.mk # ignored' > confmf.GNU
_am_result=no
for s in GNU BSD; do
  AM_RUN_LOG([${MAKE-make} -f confmf.$s && cat confinc.out])
  AS_CASE([$?:`cat confinc.out 2>/dev/null`],
      ['0:this is the am__doit target'],
      [AS_CASE([$s],
          [BSD], [am__include='.include' am__quote='"'],
          [am__include='include' am__quote=''])])
  if test "$am__include" != "#"; then
    _am_result="yes ($s style)"
    break
  fi
done
rm -f confinc.* confmf.*
AC_MSG_RESULT([${_am_result}])
AC_SUBST([am__include])])
AC_SUBST([am__quote])])

# Fake the existence of programs that GNU maintainers use.  -*- Autoconf -*-

# Copyright (C) 1997-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# AM_MISSING_PROG(NAME, PROGRAM)
# ------------------------------
AC_DEFUN([AM_MISSING_PROG],
[AC_REQUIRE([AM_MISSING_HAS_RUN])
$1=${$1-"${am_missing_run}$2"}
AC_SUBST($1)])

# AM_MISSING_HAS_RUN
# ------------------
# Define MISSING if not defined so far and test if it is modern enough.
# If it is, set am_missing_run to use it, otherwise, to nothing.
AC_DEFUN([AM_MISSING_HAS_RUN],
[AC_REQUIRE([AM_AUX_DIR_EXPAND])dnl
AC_REQUIRE_AUX_FILE([missing])dnl
if test x"${MISSING+set}" != xset; then
  MISSING="\${SHELL} '$am_aux_dir/missing'"
fi
# Use eval to expand $SHELL
if eval "$MISSING --is-lightweight"; then
  am_missing_run="$MISSING "
else
  am_missing_run=
  AC_MSG_WARN(['missing' script is too old or missing])
fi
])

# Helper functions for option handling.                     -*- Autoconf -*-

# Copyright (C) 2001-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# _AM_MANGLE_OPTION(NAME)
# -----------------------
AC_DEFUN([_AM_MANGLE_OPTION],
[[_AM_OPTION_]m4_bpatsubst($1, [[^a-zA-Z0-9_]], [_])])

# _AM_SET_OPTION(NAME)
# --------------------
# Set option NAME.  Presently that only means defining a flag for this option.
AC_DEFUN([_AM_SET_OPTION],
[m4_define(_AM_MANGLE_OPTION([$1]), [1])])

# _AM_SET_OPTIONS(OPTIONS)
# ------------------------
# OPTIONS is a space-separated list of Automake options.
AC_DEFUN([_AM_SET_OPTIONS],
[m4_foreach_w([_AM_Option], [$1], [_AM_SET_OPTION(_AM_Option)])])

# _AM_IF_OPTION(OPTION, IF-SET, [IF-NOT-SET])
# -------------------------------------------
# Execute IF-SET if OPTION is set, IF-NOT-SET otherwise.
AC_DEFUN([_AM_IF_OPTION],
[m4_ifset(_AM_MANGLE_OPTION([$1]), [$2], [$3])])

# Copyright (C) 1999-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# _AM_PROG_CC_C_O
# ---------------
# Like AC_PROG_CC_C_O, but changed for automake.  We rewrite AC_PROG_CC
# to automatically call this.
AC_DEFUN([_AM_PROG_CC_C_O],
[AC_REQUIRE([AM_AUX_DIR_EXPAND])dnl
AC_REQUIRE_AUX_FILE([compile])dnl
AC_LANG_PUSH([C])dnl
AC_CACHE_CHECK(
  [whether $CC understands -c and -o together],
  [am_cv_prog_cc_c_o],
  [AC_LANG_CONFTEST([AC_LANG_PROGRAM([])])
  # Make sure it works both with $CC and with simple cc.
  # Following AC_PROG_CC_C_O, we do the test twice because some
  # compilers refuse to overwrite an existing .o file with -o,
  # though they will create one.
  am_cv_prog_cc_c_o=yes
  for am_i in 1 2; do
    if AM_RUN_LOG([$CC -c conftest.$ac_ext -o conftest2.$ac_objext]) \
         && test -f conftest2.$ac_objext; then
      : OK
    else
      am_cv_prog_cc_c_o=no
      break
    fi
  done
  rm -f core conftest*
  unset am_i])
if test "$am_cv_prog_cc_c_o" != yes; then
   # Losing compiler, so override with the script.
   # FIXME: It is wrong to rewrite CC.
   # But if we don't then we get into trouble of one sort or another.
   # A longer-term fix would be to have automake use am__CC in this case,
   # and then we could set am__CC="\$(top_srcdir)/compile \$(CC)"
   CC="$am_aux_dir/compile $CC"
fi
AC_LANG_POP([C])])

# For backward compatibility.
AC_DEFUN_ONCE([AM_PROG_CC_C_O], [AC_REQUIRE([AC_PROG_CC])])

# Copyright (C) 2001-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# AM_RUN_LOG(COMMAND)
# -------------------
# Run COMMAND, save the exit status in ac_status, and log it.
# (This has been adapted from Autoconf's _AC_RUN_LOG macro.)
AC_DEFUN([AM_RUN_LOG],
[{ echo "$as_me:$LINENO: $1" >&AS_MESSAGE_LOG_FD
   ($1) >&AS_MESSAGE_LOG_FD 2>&AS_MESSAGE_LOG_FD
   ac_status=$?
   echo "$as_me:$LINENO: \$? = $ac_status" >&AS_MESSAGE_LOG_FD
   (exit $ac_status); }])

# Check to make sure that the build environment is sane.    -*- Autoconf -*-

# Copyright (C) 1996-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# AM_SANITY_CHECK
# ---------------
AC_DEFUN([AM_SANITY_CHECK],
[AC_MSG_CHECKING([whether build environment is sane])
# Reject unsafe characters in $srcdir or the absolute working directory
# name.  Accept space and tab only in the latter.
am_lf='
'
case `pwd` in
  *[[\\\"\#\$\&\'\`$am_lf]]*)
    AC_MSG_ERROR([unsafe absolute working directory name]);;
esac
case $srcdir in
  *[[\\\"\#\$\&\'\`$am_lf\ \	]]*)
    AC_MSG_ERROR([unsafe srcdir value: '$srcdir']);;
esac

# Do 'set' in a subshell so we don't clobber the current shell's
# arguments.  Must try -L first in case configure is actually a
# symlink; some systems play weird games with the mod time of symlinks
# (eg FreeBSD returns the mod time of the symlink's containing
# directory).
if (
   am_has_slept=no
   for am_try in 1 2; do
     echo "timestamp, slept: $am_has_slept" > conftest.file
     set X `ls -Lt "$srcdir/configure" conftest.file 2> /dev/null`
     if test "$[*]" = "X"; then
	# -L didn't work.
	set X `ls -t "$srcdir/configure" conftest.file`
     fi
     if test "$[*]" != "X $srcdir/configure conftest.file" \
	&& test "$[*]" != "X conftest.file $srcdir/configure"; then

	# If neither matched, then we have a broken ls.  This can happen
	# if, for instance, CONFIG_SHELL is bash and it inherits a
	# broken ls alias from the environment.  This has actually
	# happened.  Such a system could not be considered "sane".
	AC_MSG_ERROR([ls -t appears to fail.  Make sure there is not a broken
  alias in your environment])
     fi
     if test "$[2]" = conftest.file || test $am_try -eq 2; then
       break
     fi
     # Just in case.
     sleep 1
     am_has_slept=yes
   done
   test "$[2]" = conftest.file
   )
then
   # Ok.
   :
else
   AC_MSG_ERROR([newly created file is older than distributed files!
Check your system clock])
fi
AC_MSG_RESULT([yes])
# If we didn't sleep, we still need to ensure time stamps of config.status and
# generated files are strictly newer.
am_sleep_pid=
if grep 'slept: no' conftest.file >/dev/null 2>&1; then
  ( sleep 1 ) &
  am_sleep_pid=$!
fi
AC_CONFIG_COMMANDS_PRE(
  [AC_MSG_CHECKING([that generated files are newer than configure])
   if test -n "$am_sleep_pid"; then
     # Hide warnings about reused PIDs.
     wait $am_sleep_pid 2>/dev/null
   fi
   AC_MSG_RESULT([done])])
rm -f conftest.file
])

# Copyright (C) 2009-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# AM_SILENT_RULES([DEFAULT])
# --------------------------
# Enable less verbose build rules; with the default set to DEFAULT
# ("yes" being less verbose, "no" or empty being verbose).
AC_DEFUN([AM_SILENT_RULES],
[AC_ARG_ENABLE([silent-rules], [dnl
AS_HELP_STRING(
  [--enable-silent-rules],
  [less verbose build output (undo: "make V=1")])
AS_HELP_STRING(
  [--disable-silent-rules],
  [verbose build output (undo: "make V=0")])dnl
])
case $enable_silent_rules in @%:@ (((
  yes) AM_DEFAULT_VERBOSITY=0;;
   no) AM_DEFAULT_VERBOSITY=1;;
    *) AM_DEFAULT_VERBOSITY=m4_if([$1], [yes], [0], [1]);;
esac
dnl
dnl A few 'make' implementations (e.g., NonStop OS and NextStep)
dnl do not support nested variable expansions.
dnl See automake bug#9928 and bug#10237.
am_make=${MAKE-make}
AC_CACHE_CHECK([whether $am_make supports nested variables],
   [am_cv_make_support_nested_variables],
   [if AS_ECHO([['TRUE=$(BAR$(V))
BAR0=false
BAR1=true
V=1
am__doit:
	@$(TRUE)
.PHONY: am__doit']]) | $am_make -f - >/dev/null 2>&1; then
  am_cv_make_support_nested_variables=yes
else
  am_cv_make_support_nested_variables=no
fi])
if test $am_cv_make_support_nested_variables = yes; then
  dnl Using '$V' instead of '$(V)' breaks IRIX make.
  AM_V='$(shell if ( test "x$(V)" = "x0" ); then echo 0; elif ( test "x$(V)" = "x" ); then echo $(AM_DEFAULT_VERBOSITY); else echo 1; fi)'
  AM_DEFAULT_V='$(AM_DEFAULT_VERBOSITY)'
else
  AM_V=$AM_DEFAULT_VERBOSITY
  AM_DEFAULT_V=$AM_DEFAULT_VERBOSITY
fi
AC_SUBST([AM_V])dnl
AM_SUBST_NOTMAKE([AM_V])dnl
AC_SUBST([AM_DEFAULT_V])dnl
AM_SUBST_NOTMAKE([AM_DEFAULT_V])dnl
AC_SUBST([AM_DEFAULT_VERBOSITY])dnl
AM_BACKSLASH='\'
AC_SUBST([AM_BACKSLASH])dnl
_AM_SUBST_NOTMAKE([AM_BACKSLASH])dnl
])

# Copyright (C) 2001-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# AM_PROG_INSTALL_STRIP
# ---------------------
# One issue with vendor 'install' (even GNU) is that you can't
# specify the program used to strip binaries.  This is especially
# annoying in cross-compiling environments, where the build's strip
# is unlikely to handle the host's binaries.
# Fortunately install-sh will honor a STRIPPROG variable, so we
# always use install-sh in "make install-strip", and initialize
# STRIPPROG with the value of the STRIP variable (set by the user).
AC_DEFUN([AM_PROG_INSTALL_STRIP],
[AC_REQUIRE([AM_PROG_INSTALL_SH])dnl
# Installed binaries are usually stripped using 'strip' when the user
# run "make install-strip".  However 'strip' might not be the right
# tool to use in cross-compilation environments, therefore Automake
# will honor the 'STRIP' environment variable to overrule this program.
dnl Don't test for $cross_compiling = yes, because it might be 'maybe'.
if test "$cross_compiling" != no; then
  AC_CHECK_TOOL([STRIP], [strip], :)
fi
INSTALL_STRIP_PROGRAM="\$(install_sh) -c -s"
AC_SUBST([INSTALL_STRIP_PROGRAM])])

# Copyright (C) 2006-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# _AM_SUBST_NOTMAKE(VARIABLE)
# ---------------------------
# Prevent Automake from outputting VARIABLE = @VARIABLE@ in Makefile.in.
# This macro is traced by Automake.
AC_DEFUN([_AM_SUBST_NOTMAKE])

# AM_SUBST_NOTMAKE(VARIABLE)
# --------------------------
# Public sister of _AM_SUBST_NOTMAKE.
AC_DEFUN([AM_SUBST_NOTMAKE], [_AM_SUBST_NOTMAKE($@)])

# Check how to create a tarball.                            -*- Autoconf -*-

# Copyright (C) 2004-2021 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# _AM_PROG_TAR(FORMAT)
# --------------------
# Check how to create a tarball in format FORMAT.
# FORMAT should be one of 'v7', 'ustar', or 'pax'.
#
# Substitute a variable $(am__tar) that is a command
# writing to stdout a FORMAT-tarball containing the directory
# $tardir.
#     tardir=directory && $(am__tar) > result.tar
#
# Substitute a variable $(am__untar) that extract such
# a tarball read from stdin.
#     $(am__untar) < result.tar
#
AC_DEFUN([_AM_PROG_TAR],
[# Always define AMTAR for backward compatibility.  Yes, it's still used
# in the wild :-(  We should find a proper way to deprecate it ...
AC_SUBST([AMTAR], ['$${TAR-tar}'])

# We'll loop over all known methods to create a tar archive until one works.
_am_tools='gnutar m4_if([$1], [ustar], [plaintar]) pax cpio none'

m4_if([$1], [v7],
  [am__tar='$${TAR-tar} chof - "$$tardir"' am__untar='$${TAR-tar} xf -'],

  [m4_case([$1],
    [ustar],
     [# The POSIX 1988 'ustar' format is defined with fixed-size fields.
      # There is notably a 21 bits limit for the UID and the GID.  In fact,
      # the 'pax' utility can hang on bigger UID/GID (see automake bug#8343
      # and bug#13588).
      am_max_uid=2097151 # 2^21 - 1
      am_max_gid=$am_max_uid
      # The $UID and $GID variables are not portable, so we need to resort
      # to the POSIX-mandated id(1) utility.  Errors in the 'id' calls
      # below are definitely unexpected, so allow the users to see them
      # (that is, avoid stderr redirection).
      am_uid=`id -u || echo unknown`
      am_gid=`id -g || echo unknown`
      AC_MSG_CHECKING([whether UID '$am_uid' is supported by ustar format])
      if test $am_uid -le $am_max_uid; then
         AC_MSG_RESULT([yes])
      else
         AC_MSG_RESULT([no])
         _am_tools=none
      fi
      AC_MSG_CHECKING([whether GID '$am_gid' is supported by ustar format])
      if test $am_gid -le $am_max_gid; then
         AC_MSG_RESULT([yes])
      else
        AC_MSG_RESULT([no])
        _am_tools=none
      fi],

  [pax],
    [],

  [m4_fatal([Unknown tar format])])

  AC_MSG_CHECKING([how to create a $1 tar archive])

  # Go ahead even if we have the value already cached.  We do so because we
  # need to set the values for the 'am__tar' and 'am__untar' variables.
  _am_tools=${am_cv_prog_tar_$1-$_am_tools}

  for _am_tool in $_am_tools; do
    case $_am_tool in
    gnutar)
      for _am_tar in tar gnutar gtar; do
        AM_RUN_LOG([$_am_tar --version]) && break
      done
      am__tar="$_am_tar --format=m4_if([$1], [pax], [posix], [$1]) -chf - "'"$$tardir"'
      am__tar_="$_am_tar --format=m4_if([$1], [pax], [posix], [$1]) -chf - "'"$tardir"'
      am__untar="$_am_tar -xf -"
      ;;
    plaintar)
      # Must skip GNU tar: if it does not support --format= it doesn't create
      # ustar tarball either.
      (tar --version) >/dev/null 2>&1 && continue
      am__tar='tar chf - "$$tardir"'
      am__tar_='tar chf - "$tardir"'
      am__untar='tar xf -'
      ;;
    pax)
      am__tar='pax -L -x $1 -w "$$tardir"'
      am__tar_='pax -L -x $1 -w "$tardir"'
      am__untar='pax -r'
      ;;
    cpio)
      am__tar='find "$$tardir" -print | cpio -o -H $1 -L'
      am__tar_='find "$tardir" -print | cpio -o -H $1 -L'
      am__untar='cpio -i -H $1 -d'
      ;;
    none)
      am__tar=false
      am__tar_=false
      am__untar=false
      ;;
    esac

    # If the value was cached, stop now.  We just wanted to have am__tar
    # and am__untar set.
    test -n "${am_cv_prog_tar_$1}" && break

    # tar/untar a dummy directory, and stop if the command works.
    rm -rf conftest.dir
    mkdir conftest.dir
    echo GrepMe > conftest.dir/file
    AM_RUN_LOG([tardir=conftest.dir && eval $am__tar_ >conftest.tar])
    rm -rf conftest.dir
    if test -s conftest.tar; then
      AM_RUN_LOG([$am__untar <conftest.tar])
      AM_RUN_LOG([cat conftest.dir/file])
      grep GrepMe conftest.dir/file >/dev/null 2>&1 && break
    fi
  done
  rm -rf conftest.dir

  AC_CACHE_VAL([am_cv_prog_tar_$1], [am_cv_prog_tar_$1=$_am_tool])
  AC_MSG_RESULT([$am_cv_prog_tar_$1])])

AC_SUBST([am__tar])
AC_SUBST([am__untar])
]) # _AM_PROG_TAR

# 00gnulib.m4 serial 8
dnl Copyright (C) 2009-2023 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl This file must be named something that sorts before all other
dnl gnulib-provided .m4 files.  It is needed until the clang fix has
dnl been included in Autoconf.

# The following definitions arrange to use a compiler option
# -Werror=implicit-function-declaration in AC_CHECK_DECL, when the
# compiler is clang.  Without it, clang implicitly declares "known"
# library functions in C mode, but not in C++ mode, which would cause
# Gnulib to omit a declaration and thus later produce an error in C++
# mode.  As of clang 9.0, these "known" functions are identified through
# LIBBUILTIN invocations in the LLVM source file
# llvm/tools/clang/include/clang/Basic/Builtins.def.
# It's not possible to AC_REQUIRE the extra tests from AC_CHECK_DECL,
# because AC_CHECK_DECL, like other Autoconf built-ins, is not supposed
# to AC_REQUIRE anything: some configure.ac files have their first
# AC_CHECK_DECL executed conditionally.  Therefore append the extra tests
# to AC_PROG_CC.
AC_DEFUN([gl_COMPILER_CLANG],
[
dnl AC_REQUIRE([AC_PROG_CC])
  AC_CACHE_CHECK([whether the compiler is clang],
    [gl_cv_compiler_clang],
    [dnl Use _AC_COMPILE_IFELSE instead of AC_EGREP_CPP, to avoid error
     dnl "circular dependency of AC_LANG_COMPILER(C)" if AC_PROG_CC has
     dnl not yet been invoked.
     _AC_COMPILE_IFELSE(
        [AC_LANG_PROGRAM([[
           #ifdef __clang__
           barfbarf
           #endif
           ]],[[]])
        ],
        [gl_cv_compiler_clang=no],
        [gl_cv_compiler_clang=yes])
    ])
])
AC_DEFUN([gl_COMPILER_PREPARE_CHECK_DECL],
[
dnl AC_REQUIRE([AC_PROG_CC])
dnl AC_REQUIRE([gl_COMPILER_CLANG])
  AC_CACHE_CHECK([for compiler option needed when checking for declarations],
    [gl_cv_compiler_check_decl_option],
    [if test $gl_cv_compiler_clang = yes; then
       dnl Test whether the compiler supports the option
       dnl '-Werror=implicit-function-declaration'.
       save_ac_compile="$ac_compile"
       ac_compile="$ac_compile -Werror=implicit-function-declaration"
       dnl Use _AC_COMPILE_IFELSE instead of AC_COMPILE_IFELSE, to avoid a
       dnl warning "AC_COMPILE_IFELSE was called before AC_USE_SYSTEM_EXTENSIONS".
       _AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[]],[[]])],
         [gl_cv_compiler_check_decl_option='-Werror=implicit-function-declaration'],
         [gl_cv_compiler_check_decl_option=none])
       ac_compile="$save_ac_compile"
     else
       gl_cv_compiler_check_decl_option=none
     fi
    ])
  if test "x$gl_cv_compiler_check_decl_option" != xnone; then
    ac_compile_for_check_decl="$ac_compile $gl_cv_compiler_check_decl_option"
  else
    ac_compile_for_check_decl="$ac_compile"
  fi
])
dnl Redefine _AC_CHECK_DECL_BODY so that it references ac_compile_for_check_decl
dnl instead of ac_compile.  If, for whatever reason, the override of AC_PROG_CC
dnl in zzgnulib.m4 is inactive, use the original ac_compile.
m4_define([_AC_CHECK_DECL_BODY],
[  ac_save_ac_compile="$ac_compile"
  if test -n "$ac_compile_for_check_decl"; then
    ac_compile="$ac_compile_for_check_decl"
  fi]
m4_defn([_AC_CHECK_DECL_BODY])[  ac_compile="$ac_save_ac_compile"
])

# gl_00GNULIB
# -----------
# Witness macro that this file has been included.  Needed to force
# Automake to include this file prior to all other gnulib .m4 files.
AC_DEFUN([gl_00GNULIB])

# autobuild.m4 serial 8
dnl Copyright (C) 2004, 2006-2023 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Simon Josefsson

# Usage: AB_INIT([MODE]).
AC_DEFUN([AB_INIT],
[
  AC_REQUIRE([AC_CANONICAL_BUILD])
  AC_REQUIRE([AC_CANONICAL_HOST])

  if test -z "$AB_PACKAGE"; then
    AB_PACKAGE=${PACKAGE_NAME:-$PACKAGE}
  fi
  AC_MSG_NOTICE([autobuild project... $AB_PACKAGE])

  if test -z "$AB_VERSION"; then
    AB_VERSION=${PACKAGE_VERSION:-$VERSION}
  fi
  AC_MSG_NOTICE([autobuild revision... $AB_VERSION])

  hostname=`hostname`
  if test "$hostname"; then
    AC_MSG_NOTICE([autobuild hostname... $hostname])
  fi

  m4_if([$1],[],,[AC_MSG_NOTICE([autobuild mode... $1])])

  date=`TZ=UTC0 date +%Y%m%dT%H%M%SZ`
  if test "$?" != 0; then
    date=`date`
  fi
  if test "$date"; then
    AC_MSG_NOTICE([autobuild timestamp... $date])
  fi
])

# gnulib-common.m4 serial 82
dnl Copyright (C) 2007-2023 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_PREREQ([2.62])

# gl_COMMON
# is expanded unconditionally through gnulib-tool magic.
AC_DEFUN([gl_COMMON], [
  dnl Use AC_REQUIRE here, so that the code is expanded once only.
  AC_REQUIRE([gl_00GNULIB])
  AC_REQUIRE([gl_COMMON_BODY])
  AC_REQUIRE([gl_ZZGNULIB])
])
AC_DEFUN([gl_COMMON_BODY], [
  AH_VERBATIM([_GL_GNUC_PREREQ],
[/* True if the compiler says it groks GNU C version MAJOR.MINOR.  */
#if defined __GNUC__ && defined __GNUC_MINOR__
# define _GL_GNUC_PREREQ(major, minor) \
    ((major) < __GNUC__ + ((minor) <= __GNUC_MINOR__))
#else
# define _GL_GNUC_PREREQ(major, minor) 0
#endif
])
  AH_VERBATIM([_Noreturn],
[/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)) \
      && 0)
    /* [[noreturn]] is not practically usable, because with it the syntax
         extern _Noreturn void func (...);
       would not be valid; such a declaration would only be valid with 'extern'
       and '_Noreturn' swapped, or without the 'extern' keyword.  However, some
       AIX system header files and several gnulib header files use precisely
       this syntax with 'extern'.  */
#  define _Noreturn [[noreturn]]
# elif (defined __clang__ && __clang_major__ < 16 \
        && defined _GL_WORK_AROUND_LLVM_BUG_59792)
   /* Compile with -D_GL_WORK_AROUND_LLVM_BUG_59792 to work around
      that rare LLVM bug, though you may get many false-alarm warnings.  */
#  define _Noreturn
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (_GL_GNUC_PREREQ (4, 7) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif _GL_GNUC_PREREQ (2, 8) || defined __clang__ || 0x5110 <= __SUNPRO_C
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif
])
  AH_VERBATIM([isoc99_inline],
[/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for Mac OS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif])
  AH_VERBATIM([attribute],
[/* Attributes.  */
#if (defined __has_attribute \
     && (!defined __clang_minor__ \
         || (defined __apple_build_version__ \
             ? 6000000 <= __apple_build_version__ \
             : 5 <= __clang_major__)))
# define _GL_HAS_ATTRIBUTE(attr) __has_attribute (__##attr##__)
#else
# define _GL_HAS_ATTRIBUTE(attr) _GL_ATTR_##attr
# define _GL_ATTR_alloc_size _GL_GNUC_PREREQ (4, 3)
# define _GL_ATTR_always_inline _GL_GNUC_PREREQ (3, 2)
# define _GL_ATTR_artificial _GL_GNUC_PREREQ (4, 3)
# define _GL_ATTR_cold _GL_GNUC_PREREQ (4, 3)
# define _GL_ATTR_const _GL_GNUC_PREREQ (2, 95)
# define _GL_ATTR_deprecated _GL_GNUC_PREREQ (3, 1)
# define _GL_ATTR_diagnose_if 0
# define _GL_ATTR_error _GL_GNUC_PREREQ (4, 3)
# define _GL_ATTR_externally_visible _GL_GNUC_PREREQ (4, 1)
# define _GL_ATTR_fallthrough _GL_GNUC_PREREQ (7, 0)
# define _GL_ATTR_format _GL_GNUC_PREREQ (2, 7)
# define _GL_ATTR_leaf _GL_GNUC_PREREQ (4, 6)
# define _GL_ATTR_malloc _GL_GNUC_PREREQ (3, 0)
# ifdef _ICC
#  define _GL_ATTR_may_alias 0
# else
#  define _GL_ATTR_may_alias _GL_GNUC_PREREQ (3, 3)
# endif
# define _GL_ATTR_noinline _GL_GNUC_PREREQ (3, 1)
# define _GL_ATTR_nonnull _GL_GNUC_PREREQ (3, 3)
# define _GL_ATTR_nonstring _GL_GNUC_PREREQ (8, 0)
# define _GL_ATTR_nothrow _GL_GNUC_PREREQ (3, 3)
# define _GL_ATTR_packed _GL_GNUC_PREREQ (2, 7)
# define _GL_ATTR_pure _GL_GNUC_PREREQ (2, 96)
# define _GL_ATTR_returns_nonnull _GL_GNUC_PREREQ (4, 9)
# define _GL_ATTR_sentinel _GL_GNUC_PREREQ (4, 0)
# define _GL_ATTR_unused _GL_GNUC_PREREQ (2, 7)
# define _GL_ATTR_warn_unused_result _GL_GNUC_PREREQ (3, 4)
#endif

/* Disable GCC -Wpedantic if using __has_c_attribute and this is not C23+.  */
#if (defined __has_c_attribute && _GL_GNUC_PREREQ (4, 6) \
     && (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) <= 201710)
# pragma GCC diagnostic ignored "-Wpedantic"
#endif

]dnl There is no _GL_ATTRIBUTE_ALIGNED; use stdalign's alignas instead.
[
/* _GL_ATTRIBUTE_ALLOC_SIZE ((N)) declares that the Nth argument of the function
   is the size of the returned memory block.
   _GL_ATTRIBUTE_ALLOC_SIZE ((M, N)) declares that the Mth argument multiplied
   by the Nth argument of the function is the size of the returned memory block.
 */
/* Applies to: function, pointer to function, function types.  */
#ifndef _GL_ATTRIBUTE_ALLOC_SIZE
# if _GL_HAS_ATTRIBUTE (alloc_size)
#  define _GL_ATTRIBUTE_ALLOC_SIZE(args) __attribute__ ((__alloc_size__ args))
# else
#  define _GL_ATTRIBUTE_ALLOC_SIZE(args)
# endif
#endif

/* _GL_ATTRIBUTE_ALWAYS_INLINE tells that the compiler should always inline the
   function and report an error if it cannot do so.  */
/* Applies to: function.  */
#ifndef _GL_ATTRIBUTE_ALWAYS_INLINE
# if _GL_HAS_ATTRIBUTE (always_inline)
#  define _GL_ATTRIBUTE_ALWAYS_INLINE __attribute__ ((__always_inline__))
# else
#  define _GL_ATTRIBUTE_ALWAYS_INLINE
# endif
#endif

/* _GL_ATTRIBUTE_ARTIFICIAL declares that the function is not important to show
    in stack traces when debugging.  The compiler should omit the function from
    stack traces.  */
/* Applies to: function.  */
#ifndef _GL_ATTRIBUTE_ARTIFICIAL
# if _GL_HAS_ATTRIBUTE (artificial)
#  define _GL_ATTRIBUTE_ARTIFICIAL __attribute__ ((__artificial__))
# else
#  define _GL_ATTRIBUTE_ARTIFICIAL
# endif
#endif

/* _GL_ATTRIBUTE_COLD declares that the function is rarely executed.  */
/* Applies to: functions.  */
/* Avoid __attribute__ ((cold)) on MinGW; see thread starting at
   <https://lists.gnu.org/r/emacs-devel/2019-04/msg01152.html>.
   Also, Oracle Studio 12.6 requires 'cold' not '__cold__'.  */
#ifndef _GL_ATTRIBUTE_COLD
# if _GL_HAS_ATTRIBUTE (cold) && !defined __MINGW32__
#  ifndef __SUNPRO_C
#   define _GL_ATTRIBUTE_COLD __attribute__ ((__cold__))
#  else
#   define _GL_ATTRIBUTE_COLD __attribute__ ((cold))
#  endif
# else
#  define _GL_ATTRIBUTE_COLD
# endif
#endif

/* _GL_ATTRIBUTE_CONST declares that it is OK for a compiler to omit duplicate
   calls to the function with the same arguments.
   This attribute is safe for a function that neither depends on nor affects
   observable state, and always returns exactly once - e.g., does not loop
   forever, and does not call longjmp.
   (This attribute is stricter than _GL_ATTRIBUTE_PURE.)  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_CONST
# if _GL_HAS_ATTRIBUTE (const)
#  define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
# else
#  define _GL_ATTRIBUTE_CONST
# endif
#endif

/* _GL_ATTRIBUTE_DEALLOC (F, I) declares that the function returns pointers
   that can be freed by passing them as the Ith argument to the
   function F.
   _GL_ATTRIBUTE_DEALLOC_FREE declares that the function returns pointers that
   can be freed via 'free'; it can be used only after declaring 'free'.  */
/* Applies to: functions.  Cannot be used on inline functions.  */
#ifndef _GL_ATTRIBUTE_DEALLOC
# if _GL_GNUC_PREREQ (11, 0)
#  define _GL_ATTRIBUTE_DEALLOC(f, i) __attribute__ ((__malloc__ (f, i)))
# else
#  define _GL_ATTRIBUTE_DEALLOC(f, i)
# endif
#endif
/* If gnulib's <string.h> or <wchar.h> has already defined this macro, continue
   to use this earlier definition, since <stdlib.h> may not have been included
   yet.  */
#ifndef _GL_ATTRIBUTE_DEALLOC_FREE
# if defined __cplusplus && defined __GNUC__ && !defined __clang__
/* Work around GCC bug <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=108231> */
#  define _GL_ATTRIBUTE_DEALLOC_FREE \
     _GL_ATTRIBUTE_DEALLOC ((void (*) (void *)) free, 1)
# else
#  define _GL_ATTRIBUTE_DEALLOC_FREE \
     _GL_ATTRIBUTE_DEALLOC (free, 1)
# endif
#endif

/* _GL_ATTRIBUTE_DEPRECATED: Declares that an entity is deprecated.
   The compiler may warn if the entity is used.  */
/* Applies to:
     - function, variable,
     - struct, union, struct/union member,
     - enumeration, enumeration item,
     - typedef,
   in C++ also: namespace, class, template specialization.  */
#ifndef _GL_ATTRIBUTE_DEPRECATED
# ifdef __has_c_attribute
#  if __has_c_attribute (__deprecated__)
#   define _GL_ATTRIBUTE_DEPRECATED [[__deprecated__]]
#  endif
# endif
# if !defined _GL_ATTRIBUTE_DEPRECATED && _GL_HAS_ATTRIBUTE (deprecated)
#  define _GL_ATTRIBUTE_DEPRECATED __attribute__ ((__deprecated__))
# endif
# ifndef _GL_ATTRIBUTE_DEPRECATED
#  define _GL_ATTRIBUTE_DEPRECATED
# endif
#endif

/* _GL_ATTRIBUTE_ERROR(msg) requests an error if a function is called and
   the function call is not optimized away.
   _GL_ATTRIBUTE_WARNING(msg) requests a warning if a function is called and
   the function call is not optimized away.  */
/* Applies to: functions.  */
#if !(defined _GL_ATTRIBUTE_ERROR && defined _GL_ATTRIBUTE_WARNING)
# if _GL_HAS_ATTRIBUTE (error)
#  define _GL_ATTRIBUTE_ERROR(msg) __attribute__ ((__error__ (msg)))
#  define _GL_ATTRIBUTE_WARNING(msg) __attribute__ ((__warning__ (msg)))
# elif _GL_HAS_ATTRIBUTE (diagnose_if)
#  define _GL_ATTRIBUTE_ERROR(msg) __attribute__ ((__diagnose_if__ (1, msg, "error")))
#  define _GL_ATTRIBUTE_WARNING(msg) __attribute__ ((__diagnose_if__ (1, msg, "warning")))
# else
#  define _GL_ATTRIBUTE_ERROR(msg)
#  define _GL_ATTRIBUTE_WARNING(msg)
# endif
#endif

/* _GL_ATTRIBUTE_EXTERNALLY_VISIBLE declares that the entity should remain
   visible to debuggers etc., even with '-fwhole-program'.  */
/* Applies to: functions, variables.  */
#ifndef _GL_ATTRIBUTE_EXTERNALLY_VISIBLE
# if _GL_HAS_ATTRIBUTE (externally_visible)
#  define _GL_ATTRIBUTE_EXTERNALLY_VISIBLE __attribute__ ((externally_visible))
# else
#  define _GL_ATTRIBUTE_EXTERNALLY_VISIBLE
# endif
#endif

/* _GL_ATTRIBUTE_FALLTHROUGH declares that it is not a programming mistake if
   the control flow falls through to the immediately following 'case' or
   'default' label.  The compiler should not warn in this case.  */
/* Applies to: Empty statement (;), inside a 'switch' statement.  */
/* Always expands to something.  */
#ifndef _GL_ATTRIBUTE_FALLTHROUGH
# ifdef __has_c_attribute
#  if __has_c_attribute (__fallthrough__)
#   define _GL_ATTRIBUTE_FALLTHROUGH [[__fallthrough__]]
#  endif
# endif
# if !defined _GL_ATTRIBUTE_FALLTHROUGH && _GL_HAS_ATTRIBUTE (fallthrough)
#  define _GL_ATTRIBUTE_FALLTHROUGH __attribute__ ((__fallthrough__))
# endif
# ifndef _GL_ATTRIBUTE_FALLTHROUGH
#  define _GL_ATTRIBUTE_FALLTHROUGH ((void) 0)
# endif
#endif

/* _GL_ATTRIBUTE_FORMAT ((ARCHETYPE, STRING-INDEX, FIRST-TO-CHECK))
   declares that the STRING-INDEXth function argument is a format string of
   style ARCHETYPE, which is one of:
     printf, gnu_printf
     scanf, gnu_scanf,
     strftime, gnu_strftime,
     strfmon,
   or the same thing prefixed and suffixed with '__'.
   If FIRST-TO-CHECK is not 0, arguments starting at FIRST-TO_CHECK
   are suitable for the format string.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_FORMAT
# if _GL_HAS_ATTRIBUTE (format)
#  define _GL_ATTRIBUTE_FORMAT(spec) __attribute__ ((__format__ spec))
# else
#  define _GL_ATTRIBUTE_FORMAT(spec)
# endif
#endif

/* _GL_ATTRIBUTE_LEAF declares that if the function is called from some other
   compilation unit, it executes code from that unit only by return or by
   exception handling.  This declaration lets the compiler optimize that unit
   more aggressively.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_LEAF
# if _GL_HAS_ATTRIBUTE (leaf)
#  define _GL_ATTRIBUTE_LEAF __attribute__ ((__leaf__))
# else
#  define _GL_ATTRIBUTE_LEAF
# endif
#endif

/* _GL_ATTRIBUTE_MALLOC declares that the function returns a pointer to freshly
   allocated memory.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_MALLOC
# if _GL_HAS_ATTRIBUTE (malloc)
#  define _GL_ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
# else
#  define _GL_ATTRIBUTE_MALLOC
# endif
#endif

/* _GL_ATTRIBUTE_MAY_ALIAS declares that pointers to the type may point to the
   same storage as pointers to other types.  Thus this declaration disables
   strict aliasing optimization.  */
/* Applies to: types.  */
/* Oracle Studio 12.6 mishandles may_alias despite __has_attribute OK.  */
#ifndef _GL_ATTRIBUTE_MAY_ALIAS
# if _GL_HAS_ATTRIBUTE (may_alias) && !defined __SUNPRO_C
#  define _GL_ATTRIBUTE_MAY_ALIAS __attribute__ ((__may_alias__))
# else
#  define _GL_ATTRIBUTE_MAY_ALIAS
# endif
#endif

/* _GL_ATTRIBUTE_MAYBE_UNUSED declares that it is not a programming mistake if
   the entity is not used.  The compiler should not warn if the entity is not
   used.  */
/* Applies to:
     - function, variable,
     - struct, union, struct/union member,
     - enumeration, enumeration item,
     - typedef,
   in C++ also: class.  */
/* In C++ and C23, this is spelled [[__maybe_unused__]].
   GCC's syntax is __attribute__ ((__unused__)).
   clang supports both syntaxes.  Except that with clang ≥ 6, < 10, in C++ mode,
   __has_c_attribute (__maybe_unused__) yields true but the use of
   [[__maybe_unused__]] nevertheless produces a warning.  */
#ifndef _GL_ATTRIBUTE_MAYBE_UNUSED
# if defined __clang__ && defined __cplusplus
#  if !defined __apple_build_version__ && __clang_major__ >= 10
#   define _GL_ATTRIBUTE_MAYBE_UNUSED [[__maybe_unused__]]
#  endif
# elif defined __has_c_attribute
#  if __has_c_attribute (__maybe_unused__)
#   define _GL_ATTRIBUTE_MAYBE_UNUSED [[__maybe_unused__]]
#  endif
# endif
# ifndef _GL_ATTRIBUTE_MAYBE_UNUSED
#  define _GL_ATTRIBUTE_MAYBE_UNUSED _GL_ATTRIBUTE_UNUSED
# endif
#endif
/* Alternative spelling of this macro, for convenience and for
   compatibility with glibc/include/libc-symbols.h.  */
#define _GL_UNUSED _GL_ATTRIBUTE_MAYBE_UNUSED
/* Earlier spellings of this macro.  */
#define _UNUSED_PARAMETER_ _GL_ATTRIBUTE_MAYBE_UNUSED

/* _GL_ATTRIBUTE_NODISCARD declares that the caller of the function should not
   discard the return value.  The compiler may warn if the caller does not use
   the return value, unless the caller uses something like ignore_value.  */
/* Applies to: function, enumeration, class.  */
#ifndef _GL_ATTRIBUTE_NODISCARD
# if defined __clang__ && defined __cplusplus
  /* With clang up to 15.0.6 (at least), in C++ mode, [[__nodiscard__]] produces
     a warning.
     The 1000 below means a yet unknown threshold.  When clang++ version X
     starts supporting [[__nodiscard__]] without warning about it, you can
     replace the 1000 with X.  */
#  if __clang_major__ >= 1000
#   define _GL_ATTRIBUTE_NODISCARD [[__nodiscard__]]
#  endif
# elif defined __has_c_attribute
#  if __has_c_attribute (__nodiscard__)
#   define _GL_ATTRIBUTE_NODISCARD [[__nodiscard__]]
#  endif
# endif
# if !defined _GL_ATTRIBUTE_NODISCARD && _GL_HAS_ATTRIBUTE (warn_unused_result)
#  define _GL_ATTRIBUTE_NODISCARD __attribute__ ((__warn_unused_result__))
# endif
# ifndef _GL_ATTRIBUTE_NODISCARD
#  define _GL_ATTRIBUTE_NODISCARD
# endif
#endif

/* _GL_ATTRIBUTE_NOINLINE tells that the compiler should not inline the
   function.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_NOINLINE
# if _GL_HAS_ATTRIBUTE (noinline)
#  define _GL_ATTRIBUTE_NOINLINE __attribute__ ((__noinline__))
# else
#  define _GL_ATTRIBUTE_NOINLINE
# endif
#endif

/* _GL_ATTRIBUTE_NONNULL ((N1, N2,...)) declares that the arguments N1, N2,...
   must not be NULL.
   _GL_ATTRIBUTE_NONNULL () declares that all pointer arguments must not be
   null.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_NONNULL
# if _GL_HAS_ATTRIBUTE (nonnull)
#  define _GL_ATTRIBUTE_NONNULL(args) __attribute__ ((__nonnull__ args))
# else
#  define _GL_ATTRIBUTE_NONNULL(args)
# endif
#endif

/* _GL_ATTRIBUTE_NONSTRING declares that the contents of a character array is
   not meant to be NUL-terminated.  */
/* Applies to: struct/union members and variables that are arrays of element
   type '[[un]signed] char'.  */
#ifndef _GL_ATTRIBUTE_NONSTRING
# if _GL_HAS_ATTRIBUTE (nonstring)
#  define _GL_ATTRIBUTE_NONSTRING __attribute__ ((__nonstring__))
# else
#  define _GL_ATTRIBUTE_NONSTRING
# endif
#endif

/* There is no _GL_ATTRIBUTE_NORETURN; use _Noreturn instead.  */

/* _GL_ATTRIBUTE_NOTHROW declares that the function does not throw exceptions.
 */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_NOTHROW
# if _GL_HAS_ATTRIBUTE (nothrow) && !defined __cplusplus
#  define _GL_ATTRIBUTE_NOTHROW __attribute__ ((__nothrow__))
# else
#  define _GL_ATTRIBUTE_NOTHROW
# endif
#endif

/* _GL_ATTRIBUTE_PACKED declares:
   For struct members: The member has the smallest possible alignment.
   For struct, union, class: All members have the smallest possible alignment,
   minimizing the memory required.  */
/* Applies to: struct members, struct, union,
   in C++ also: class.  */
#ifndef _GL_ATTRIBUTE_PACKED
# if _GL_HAS_ATTRIBUTE (packed)
#  define _GL_ATTRIBUTE_PACKED __attribute__ ((__packed__))
# else
#  define _GL_ATTRIBUTE_PACKED
# endif
#endif

/* _GL_ATTRIBUTE_PURE declares that It is OK for a compiler to omit duplicate
   calls to the function with the same arguments if observable state is not
   changed between calls.
   This attribute is safe for a function that does not affect
   observable state, and always returns exactly once.
   (This attribute is looser than _GL_ATTRIBUTE_CONST.)  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_PURE
# if _GL_HAS_ATTRIBUTE (pure)
#  define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define _GL_ATTRIBUTE_PURE
# endif
#endif

/* _GL_ATTRIBUTE_RETURNS_NONNULL declares that the function's return value is
   a non-NULL pointer.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_RETURNS_NONNULL
# if _GL_HAS_ATTRIBUTE (returns_nonnull)
#  define _GL_ATTRIBUTE_RETURNS_NONNULL __attribute__ ((__returns_nonnull__))
# else
#  define _GL_ATTRIBUTE_RETURNS_NONNULL
# endif
#endif

/* _GL_ATTRIBUTE_SENTINEL(pos) declares that the variadic function expects a
   trailing NULL argument.
   _GL_ATTRIBUTE_SENTINEL () - The last argument is NULL (requires C99).
   _GL_ATTRIBUTE_SENTINEL ((N)) - The (N+1)st argument from the end is NULL.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_SENTINEL
# if _GL_HAS_ATTRIBUTE (sentinel)
#  define _GL_ATTRIBUTE_SENTINEL(pos) __attribute__ ((__sentinel__ pos))
# else
#  define _GL_ATTRIBUTE_SENTINEL(pos)
# endif
#endif

/* A helper macro.  Don't use it directly.  */
#ifndef _GL_ATTRIBUTE_UNUSED
# if _GL_HAS_ATTRIBUTE (unused)
#  define _GL_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define _GL_ATTRIBUTE_UNUSED
# endif
#endif

]dnl There is no _GL_ATTRIBUTE_VISIBILITY; see m4/visibility.m4 instead.
[
/* _GL_UNUSED_LABEL; declares that it is not a programming mistake if the
   immediately preceding label is not used.  The compiler should not warn
   if the label is not used.  */
/* Applies to: label (both in C and C++).  */
/* Note that g++ < 4.5 does not support the '__attribute__ ((__unused__)) ;'
   syntax.  But clang does.  */
#ifndef _GL_UNUSED_LABEL
# if !(defined __cplusplus && !_GL_GNUC_PREREQ (4, 5)) || defined __clang__
#  define _GL_UNUSED_LABEL _GL_ATTRIBUTE_UNUSED
# else
#  define _GL_UNUSED_LABEL
# endif
#endif
])
  AH_VERBATIM([async_safe],
[/* The _GL_ASYNC_SAFE marker should be attached to functions that are
   signal handlers (for signals other than SIGABRT, SIGPIPE) or can be
   invoked from such signal handlers.  Such functions have some restrictions:
     * All functions that it calls should be marked _GL_ASYNC_SAFE as well,
       or should be listed as async-signal-safe in POSIX
       <https://pubs.opengroup.org/onlinepubs/9699919799/functions/V2_chap02.html#tag_15_04>
       section 2.4.3.  Note that malloc(), sprintf(), and fwrite(), in
       particular, are NOT async-signal-safe.
     * All memory locations (variables and struct fields) that these functions
       access must be marked 'volatile'.  This holds for both read and write
       accesses.  Otherwise the compiler might optimize away stores to and
       reads from such locations that occur in the program, depending on its
       data flow analysis.  For example, when the program contains a loop
       that is intended to inspect a variable set from within a signal handler
           while (!signal_occurred)
             ;
       the compiler is allowed to transform this into an endless loop if the
       variable 'signal_occurred' is not declared 'volatile'.
   Additionally, recall that:
     * A signal handler should not modify errno (except if it is a handler
       for a fatal signal and ends by raising the same signal again, thus
       provoking the termination of the process).  If it invokes a function
       that may clobber errno, it needs to save and restore the value of
       errno.  */
#define _GL_ASYNC_SAFE
])
  AH_VERBATIM([micro_optimizations],
[/* _GL_CMP (n1, n2) performs a three-valued comparison on n1 vs. n2, where
   n1 and n2 are expressions without side effects, that evaluate to real
   numbers (excluding NaN).
   It returns
     1  if n1 > n2
     0  if n1 == n2
     -1 if n1 < n2
   The naïve code   (n1 > n2 ? 1 : n1 < n2 ? -1 : 0)  produces a conditional
   jump with nearly all GCC versions up to GCC 10.
   This variant     (n1 < n2 ? -1 : n1 > n2)  produces a conditional with many
   GCC versions up to GCC 9.
   The better code  (n1 > n2) - (n1 < n2)  from Hacker's Delight § 2-9
   avoids conditional jumps in all GCC versions >= 3.4.  */
#define _GL_CMP(n1, n2) (((n1) > (n2)) - ((n1) < (n2)))
])
  dnl Hint which direction to take regarding cross-compilation guesses:
  dnl When a user installs a program on a platform they are not intimately
  dnl familiar with, --enable-cross-guesses=conservative is the appropriate
  dnl choice.  It implements the "If we don't know, assume the worst" principle.
  dnl However, when an operating system developer (on a platform which is not
  dnl yet known to gnulib) builds packages for their platform, they want to
  dnl expose, not hide, possible platform bugs; in this case,
  dnl --enable-cross-guesses=risky is the appropriate choice.
  dnl Sets the variables
  dnl gl_cross_guess_normal    (to be used when 'yes' is good and 'no' is bad),
  dnl gl_cross_guess_inverted  (to be used when 'no' is good and 'yes' is bad).
  AC_ARG_ENABLE([cross-guesses],
    [AS_HELP_STRING([--enable-cross-guesses={conservative|risky}],
       [specify policy for cross-compilation guesses])],
    [if test "x$enableval" != xconservative && test "x$enableval" != xrisky; then
       AC_MSG_WARN([invalid argument supplied to --enable-cross-guesses])
       enableval=conservative
     fi
     gl_cross_guesses="$enableval"],
    [gl_cross_guesses=conservative])
  if test $gl_cross_guesses = risky; then
    gl_cross_guess_normal="guessing yes"
    gl_cross_guess_inverted="guessing no"
  else
    gl_cross_guess_normal="guessing no"
    gl_cross_guess_inverted="guessing yes"
  fi
  dnl Preparation for running test programs:
  dnl Tell glibc to write diagnostics from -D_FORTIFY_SOURCE=2 to stderr, not
  dnl to /dev/tty, so they can be redirected to log files.  Such diagnostics
  dnl arise e.g., in the macros gl_PRINTF_DIRECTIVE_N, gl_SNPRINTF_DIRECTIVE_N.
  LIBC_FATAL_STDERR_=1
  export LIBC_FATAL_STDERR_
])

# gl_MODULE_INDICATOR_INIT_VARIABLE([variablename])
# gl_MODULE_INDICATOR_INIT_VARIABLE([variablename], [initialvalue])
# initializes the shell variable that indicates the presence of the given module
# as a C preprocessor expression.
AC_DEFUN([gl_MODULE_INDICATOR_INIT_VARIABLE],
[
  GL_MODULE_INDICATOR_PREFIX[]_[$1]=m4_if([$2], , [0], [$2])
  AC_SUBST(GL_MODULE_INDICATOR_PREFIX[]_[$1])
])

# gl_MODULE_INDICATOR_CONDITION
# expands to a C preprocessor expression that evaluates to 1 or 0, depending
# whether a gnulib module that has been requested shall be considered present
# or not.
m4_define([gl_MODULE_INDICATOR_CONDITION], [1])

# gl_MODULE_INDICATOR_SET_VARIABLE([modulename])
# sets the shell variable that indicates the presence of the given module to
# a C preprocessor expression that will evaluate to 1.
AC_DEFUN([gl_MODULE_INDICATOR_SET_VARIABLE],
[
  gl_MODULE_INDICATOR_SET_VARIABLE_AUX(
    [GL_MODULE_INDICATOR_PREFIX[]_GNULIB_[]m4_translit([[$1]],
                                                       [abcdefghijklmnopqrstuvwxyz./-],
                                                       [ABCDEFGHIJKLMNOPQRSTUVWXYZ___])],
    [gl_MODULE_INDICATOR_CONDITION])
])

# gl_MODULE_INDICATOR_SET_VARIABLE_AUX([variable])
# modifies the shell variable to include the gl_MODULE_INDICATOR_CONDITION.
# The shell variable's value is a C preprocessor expression that evaluates
# to 0 or 1.
AC_DEFUN([gl_MODULE_INDICATOR_SET_VARIABLE_AUX],
[
  m4_if(m4_defn([gl_MODULE_INDICATOR_CONDITION]), [1],
    [
     dnl Simplify the expression VALUE || 1 to 1.
     $1=1
    ],
    [gl_MODULE_INDICATOR_SET_VARIABLE_AUX_OR([$1],
                                             [gl_MODULE_INDICATOR_CONDITION])])
])

# gl_MODULE_INDICATOR_SET_VARIABLE_AUX_OR([variable], [condition])
# modifies the shell variable to include the given condition.  The shell
# variable's value is a C preprocessor expression that evaluates to 0 or 1.
AC_DEFUN([gl_MODULE_INDICATOR_SET_VARIABLE_AUX_OR],
[
  dnl Simplify the expression 1 || CONDITION to 1.
  if test "$[]$1" != 1; then
    dnl Simplify the expression 0 || CONDITION to CONDITION.
    if test "$[]$1" = 0; then
      $1=$2
    else
      $1="($[]$1 || $2)"
    fi
  fi
])

# gl_MODULE_INDICATOR([modulename])
# defines a C macro indicating the presence of the given module
# in a location where it can be used.
#                                             |  Value  |   Value   |
#                                             | in lib/ | in tests/ |
# --------------------------------------------+---------+-----------+
# Module present among main modules:          |    1    |     1     |
# --------------------------------------------+---------+-----------+
# Module present among tests-related modules: |    0    |     1     |
# --------------------------------------------+---------+-----------+
# Module not present at all:                  |    0    |     0     |
# --------------------------------------------+---------+-----------+
AC_DEFUN([gl_MODULE_INDICATOR],
[
  AC_DEFINE_UNQUOTED([GNULIB_]m4_translit([[$1]],
      [abcdefghijklmnopqrstuvwxyz./-],
      [ABCDEFGHIJKLMNOPQRSTUVWXYZ___]),
    [gl_MODULE_INDICATOR_CONDITION],
    [Define to a C preprocessor expression that evaluates to 1 or 0,
     depending whether the gnulib module $1 shall be considered present.])
])

# gl_MODULE_INDICATOR_FOR_TESTS([modulename])
# defines a C macro indicating the presence of the given module
# in lib or tests. This is useful to determine whether the module
# should be tested.
#                                             |  Value  |   Value   |
#                                             | in lib/ | in tests/ |
# --------------------------------------------+---------+-----------+
# Module present among main modules:          |    1    |     1     |
# --------------------------------------------+---------+-----------+
# Module present among tests-related modules: |    1    |     1     |
# --------------------------------------------+---------+-----------+
# Module not present at all:                  |    0    |     0     |
# --------------------------------------------+---------+-----------+
AC_DEFUN([gl_MODULE_INDICATOR_FOR_TESTS],
[
  AC_DEFINE([GNULIB_TEST_]m4_translit([[$1]],
      [abcdefghijklmnopqrstuvwxyz./-],
      [ABCDEFGHIJKLMNOPQRSTUVWXYZ___]), [1],
    [Define to 1 when the gnulib module $1 should be tested.])
])

# gl_ASSERT_NO_GNULIB_POSIXCHECK
# asserts that there will never be a need to #define GNULIB_POSIXCHECK.
# and thereby enables an optimization of configure and config.h.
# Used by Emacs.
AC_DEFUN([gl_ASSERT_NO_GNULIB_POSIXCHECK],
[
  dnl Override gl_WARN_ON_USE_PREPARE.
  dnl But hide this definition from 'aclocal'.
  AC_DEFUN([gl_W][ARN_ON_USE_PREPARE], [])
])

# gl_ASSERT_NO_GNULIB_TESTS
# asserts that there will be no gnulib tests in the scope of the configure.ac
# and thereby enables an optimization of config.h.
# Used by Emacs.
AC_DEFUN([gl_ASSERT_NO_GNULIB_TESTS],
[
  dnl Override gl_MODULE_INDICATOR_FOR_TESTS.
  AC_DEFUN([gl_MODULE_INDICATOR_FOR_TESTS], [])
])

# Test whether <features.h> exists.
# Set HAVE_FEATURES_H.
AC_DEFUN([gl_FEATURES_H],
[
  AC_CHECK_HEADERS_ONCE([features.h])
  if test $ac_cv_header_features_h = yes; then
    HAVE_FEATURES_H=1
  else
    HAVE_FEATURES_H=0
  fi
  AC_SUBST([HAVE_FEATURES_H])
])

# gl_PROG_CC_C99
# Modifies the value of the shell variable CC in an attempt to make $CC
# understand ISO C99 source code.
AC_DEFUN([gl_PROG_CC_C99],
[
  dnl Just use AC_PROG_CC_C99.
  dnl When AC_PROG_CC_C99 and AC_PROG_CC_STDC are used together, the substituted
  dnl value of CC will contain the C99 enabling options twice. But this is only
  dnl a cosmetic problem.
  dnl With Autoconf >= 2.70, use AC_PROG_CC since it implies AC_PROG_CC_C99;
  dnl this avoids a "warning: The macro `AC_PROG_CC_C99' is obsolete."
  m4_version_prereq([2.70],
    [AC_REQUIRE([AC_PROG_CC])],
    [AC_REQUIRE([AC_PROG_CC_C99])])
])

# gl_PROG_AR_RANLIB
# Determines the values for AR, ARFLAGS, RANLIB that fit with the compiler.
# The user can set the variables AR, ARFLAGS, RANLIB if he wants to override
# the values.
AC_DEFUN([gl_PROG_AR_RANLIB],
[
  dnl Minix 3 comes with two toolchains: The Amsterdam Compiler Kit compiler
  dnl as "cc", and GCC as "gcc". They have different object file formats and
  dnl library formats. In particular, the GNU binutils programs ar and ranlib
  dnl produce libraries that work only with gcc, not with cc.
  AC_REQUIRE([AC_PROG_CC])
  dnl The '][' hides this use from 'aclocal'.
  AC_BEFORE([$0], [A][M_PROG_AR])
  AC_CACHE_CHECK([for Minix Amsterdam compiler], [gl_cv_c_amsterdam_compiler],
    [
      AC_EGREP_CPP([Amsterdam],
        [
#ifdef __ACK__
Amsterdam
#endif
        ],
        [gl_cv_c_amsterdam_compiler=yes],
        [gl_cv_c_amsterdam_compiler=no])
    ])

  dnl Don't compete with AM_PROG_AR's decision about AR/ARFLAGS if we are not
  dnl building with __ACK__.
  if test $gl_cv_c_amsterdam_compiler = yes; then
    if test -z "$AR"; then
      AR='cc -c.a'
    fi
    if test -z "$ARFLAGS"; then
      ARFLAGS='-o'
    fi
  else
    dnl AM_PROG_AR was added in automake v1.11.2.  AM_PROG_AR does not AC_SUBST
    dnl ARFLAGS variable (it is filed into Makefile.in directly by automake
    dnl script on-demand, if not specified by ./configure of course).
    dnl Don't AC_REQUIRE the AM_PROG_AR otherwise the code for __ACK__ above
    dnl will be ignored.  Also, pay attention to call AM_PROG_AR in else block
    dnl because AM_PROG_AR is written so it could re-set AR variable even for
    dnl __ACK__.  It may seem like its easier to avoid calling the macro here,
    dnl but we need to AC_SUBST both AR/ARFLAGS (thus those must have some good
    dnl default value and automake should usually know them).
    dnl
    dnl The '][' hides this use from 'aclocal'.
    m4_ifdef([A][M_PROG_AR], [A][M_PROG_AR], [:])
  fi

  dnl In case the code above has not helped with setting AR/ARFLAGS, use
  dnl Automake-documented default values for AR and ARFLAGS, but prefer
  dnl ${host}-ar over ar (useful for cross-compiling).
  AC_CHECK_TOOL([AR], [ar], [ar])
  if test -z "$ARFLAGS"; then
    ARFLAGS='cr'
  fi

  AC_SUBST([AR])
  AC_SUBST([ARFLAGS])
  if test -z "$RANLIB"; then
    if test $gl_cv_c_amsterdam_compiler = yes; then
      RANLIB=':'
    else
      dnl Use the ranlib program if it is available.
      AC_PROG_RANLIB
    fi
  fi
  AC_SUBST([RANLIB])
])

# AC_C_RESTRICT
# This definition is copied from post-2.70 Autoconf and overrides the
# AC_C_RESTRICT macro from autoconf 2.60..2.70.
m4_version_prereq([2.70.1], [], [
AC_DEFUN([AC_C_RESTRICT],
[AC_CACHE_CHECK([for C/C++ restrict keyword], [ac_cv_c_restrict],
  [ac_cv_c_restrict=no
   # Put '__restrict__' first, to avoid problems with glibc and non-GCC; see:
   # https://lists.gnu.org/archive/html/bug-autoconf/2016-02/msg00006.html
   # Put 'restrict' last, because C++ lacks it.
   for ac_kw in __restrict__ __restrict _Restrict restrict; do
     AC_COMPILE_IFELSE(
      [AC_LANG_PROGRAM(
         [[typedef int *int_ptr;
           int foo (int_ptr $ac_kw ip) { return ip[0]; }
           int bar (int [$ac_kw]); /* Catch GCC bug 14050.  */
           int bar (int ip[$ac_kw]) { return ip[0]; }
         ]],
         [[int s[1];
           int *$ac_kw t = s;
           t[0] = 0;
           return foo (t) + bar (t);
         ]])],
      [ac_cv_c_restrict=$ac_kw])
     test "$ac_cv_c_restrict" != no && break
   done
  ])
 AH_VERBATIM([restrict],
[/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported only directly.  */
#undef restrict
/* Work around a bug in older versions of Sun C++, which did not
   #define __restrict__ or support _Restrict or __restrict__
   even though the corresponding Sun C compiler ended up with
   "#define restrict _Restrict" or "#define restrict __restrict__"
   in the previous line.  This workaround can be removed once
   we assume Oracle Developer Studio 12.5 (2016) or later.  */
#if defined __SUNPRO_CC && !defined __RESTRICT && !defined __restrict__
# define _Restrict
# define __restrict__
#endif])
 case $ac_cv_c_restrict in
   restrict) ;;
   no) AC_DEFINE([restrict], []) ;;
   *)  AC_DEFINE_UNQUOTED([restrict], [$ac_cv_c_restrict]) ;;
 esac
])# AC_C_RESTRICT
])

# gl_BIGENDIAN
# is like AC_C_BIGENDIAN, except that it can be AC_REQUIREd.
# Note that AC_REQUIRE([AC_C_BIGENDIAN]) does not work reliably because some
# macros invoke AC_C_BIGENDIAN with arguments.
AC_DEFUN([gl_BIGENDIAN],
[
  AC_C_BIGENDIAN
])

# A temporary file descriptor.
# Must be less than 10, because dash 0.5.8 does not support redirections
# with multi-digit file descriptors.
m4_define([GL_TMP_FD], 9)

# gl_SILENT(command)
# executes command, but without the normal configure output.
# This is useful when you want to invoke AC_CACHE_CHECK (or AC_CHECK_FUNC etc.)
# inside another AC_CACHE_CHECK.
AC_DEFUN([gl_SILENT],
[
  exec GL_TMP_FD>&AS_MESSAGE_FD AS_MESSAGE_FD>/dev/null
  $1
  exec AS_MESSAGE_FD>&GL_TMP_FD GL_TMP_FD>&-
])

# gl_CACHE_VAL_SILENT(cache-id, command-to-set-it)
# is like AC_CACHE_VAL(cache-id, command-to-set-it), except that it does not
# output a spurious "(cached)" mark in the midst of other configure output.
# This macro should be used instead of AC_CACHE_VAL when it is not surrounded
# by an AC_MSG_CHECKING/AC_MSG_RESULT pair.
AC_DEFUN([gl_CACHE_VAL_SILENT],
[
  gl_SILENT([
    AC_CACHE_VAL([$1], [$2])
  ])
])

# gl_CONDITIONAL(conditional, condition)
# is like AM_CONDITIONAL(conditional, condition), except that it does not
# produce an error
#   configure: error: conditional "..." was never defined.
#   Usually this means the macro was only invoked conditionally.
# when only invoked conditionally. Instead, in that case, both the _TRUE
# and the _FALSE case are disabled.
AC_DEFUN([gl_CONDITIONAL],
[
  pushdef([AC_CONFIG_COMMANDS_PRE], [:])dnl
  AM_CONDITIONAL([$1], [$2])
  popdef([AC_CONFIG_COMMANDS_PRE])dnl
  if test -z "${[$1]_TRUE}" && test -z "${[$1]_FALSE}"; then
    [$1]_TRUE='#'
    [$1]_FALSE='#'
  fi
])

# gl_CC_ALLOW_WARNINGS
# sets and substitutes a variable GL_CFLAG_ALLOW_WARNINGS, to a $(CC) option
# that reverts a preceding '-Werror' option, if available.
# This is expected to be '-Wno-error' on gcc, clang (except clang/MSVC), xlclang
# and empty otherwise.
AC_DEFUN([gl_CC_ALLOW_WARNINGS],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_CACHE_CHECK([for C compiler option to allow warnings],
    [gl_cv_cc_wallow],
    [rm -f conftest*
     echo 'int dummy;' > conftest.c
     AC_TRY_COMMAND([${CC-cc} $CFLAGS $CPPFLAGS -c conftest.c 2>conftest1.err]) >/dev/null
     AC_TRY_COMMAND([${CC-cc} $CFLAGS $CPPFLAGS -Wno-error -c conftest.c 2>conftest2.err]) >/dev/null
     dnl Test the number of error output lines, because AIX xlc accepts the
     dnl option '-Wno-error', just to produce a warning
     dnl "Option -Wno-error was incorrectly specified. The option will be ignored."
     dnl afterwards.
     if test $? = 0 && test `wc -l < conftest1.err` = `wc -l < conftest2.err`; then
       gl_cv_cc_wallow='-Wno-error'
     else
       gl_cv_cc_wallow=none
     fi
     rm -f conftest*
    ])
  case "$gl_cv_cc_wallow" in
    none) GL_CFLAG_ALLOW_WARNINGS='' ;;
    *)    GL_CFLAG_ALLOW_WARNINGS="$gl_cv_cc_wallow" ;;
  esac
  AC_SUBST([GL_CFLAG_ALLOW_WARNINGS])
])

# gl_CXX_ALLOW_WARNINGS
# sets and substitutes a variable GL_CXXFLAG_ALLOW_WARNINGS, to a $(CC) option
# that reverts a preceding '-Werror' option, if available.
AC_DEFUN([gl_CXX_ALLOW_WARNINGS],
[
  dnl Requires AC_PROG_CXX or gl_PROG_ANSI_CXX.
  if test -n "$CXX" && test "$CXX" != no; then
    AC_CACHE_CHECK([for C++ compiler option to allow warnings],
      [gl_cv_cxx_wallow],
      [rm -f conftest*
       echo 'int dummy;' > conftest.cc
       AC_TRY_COMMAND([${CXX-c++} $CXXFLAGS $CPPFLAGS -c conftest.cc 2>conftest1.err]) >/dev/null
       AC_TRY_COMMAND([${CXX-c++} $CXXFLAGS $CPPFLAGS -Wno-error -c conftest.cc 2>conftest2.err]) >/dev/null
       dnl Test the number of error output lines, because AIX xlC accepts the
       dnl option '-Wno-error', just to produce a warning
       dnl "Option -Wno-error was incorrectly specified. The option will be ignored."
       dnl afterwards.
       if test $? = 0 && test `wc -l < conftest1.err` = `wc -l < conftest2.err`; then
         gl_cv_cxx_wallow='-Wno-error'
       else
         gl_cv_cxx_wallow=none
       fi
       rm -f conftest*
      ])
    case "$gl_cv_cxx_wallow" in
      none) GL_CXXFLAG_ALLOW_WARNINGS='' ;;
      *)    GL_CXXFLAG_ALLOW_WARNINGS="$gl_cv_cxx_wallow" ;;
    esac
  else
    GL_CXXFLAG_ALLOW_WARNINGS=''
  fi
  AC_SUBST([GL_CXXFLAG_ALLOW_WARNINGS])
])

# gl_CC_GNULIB_WARNINGS
# sets and substitutes a variable GL_CFLAG_GNULIB_WARNINGS, to a $(CC) option
# set that enables or disables warnings as suitable for the Gnulib coding style.
AC_DEFUN([gl_CC_GNULIB_WARNINGS],
[
  AC_REQUIRE([gl_CC_ALLOW_WARNINGS])
  dnl Assume that the compiler supports -Wno-* options only if it also supports
  dnl -Wno-error.
  GL_CFLAG_GNULIB_WARNINGS=''
  if test -n "$GL_CFLAG_ALLOW_WARNINGS"; then
    dnl Enable these warning options:
    dnl
    dnl                                       GCC             clang
    dnl -Wno-cast-qual                        >= 3            >= 3.9
    dnl -Wno-conversion                       >= 3            >= 3.9
    dnl -Wno-float-conversion                 >= 4.9          >= 3.9
    dnl -Wno-float-equal                      >= 3            >= 3.9
    dnl -Wimplicit-fallthrough                >= 7            >= 3.9
    dnl -Wno-pedantic                         >= 4.8          >= 3.9
    dnl -Wno-sign-compare                     >= 3            >= 3.9
    dnl -Wno-sign-conversion                  >= 4.3          >= 3.9
    dnl -Wno-type-limits                      >= 4.3          >= 3.9
    dnl -Wno-undef                            >= 3            >= 3.9
    dnl -Wno-unsuffixed-float-constants       >= 4.5
    dnl -Wno-unused-function                  >= 3            >= 3.9
    dnl -Wno-unused-parameter                 >= 3            >= 3.9
    dnl
    cat > conftest.c <<\EOF
      #if __GNUC__ >= 3 || (__clang_major__ + (__clang_minor__ >= 9) > 3)
      -Wno-cast-qual
      -Wno-conversion
      -Wno-float-equal
      -Wno-sign-compare
      -Wno-undef
      -Wno-unused-function
      -Wno-unused-parameter
      #endif
      #if __GNUC__ + (__GNUC_MINOR__ >= 9) > 4 || (__clang_major__ + (__clang_minor__ >= 9) > 3)
      -Wno-float-conversion
      #endif
      #if __GNUC__ >= 7 || (__clang_major__ + (__clang_minor__ >= 9) > 3)
      -Wimplicit-fallthrough
      #endif
      #if __GNUC__ + (__GNUC_MINOR__ >= 8) > 4 || (__clang_major__ + (__clang_minor__ >= 9) > 3)
      -Wno-pedantic
      #endif
      #if __GNUC__ + (__GNUC_MINOR__ >= 3) > 4 || (__clang_major__ + (__clang_minor__ >= 9) > 3)
      -Wno-sign-conversion
      -Wno-type-limits
      #endif
      #if __GNUC__ + (__GNUC_MINOR__ >= 5) > 4
      -Wno-unsuffixed-float-constants
      #endif
EOF
    gl_command="$CC $CFLAGS $CPPFLAGS -E conftest.c > conftest.out"
    if AC_TRY_EVAL([gl_command]); then
      gl_options=`grep -v '#' conftest.out`
      for word in $gl_options; do
        GL_CFLAG_GNULIB_WARNINGS="$GL_CFLAG_GNULIB_WARNINGS $word"
      done
    fi
    rm -f conftest.c conftest.out
  fi
  AC_SUBST([GL_CFLAG_GNULIB_WARNINGS])
])

dnl gl_CONDITIONAL_HEADER([foo.h])
dnl takes a shell variable GL_GENERATE_FOO_H (with value true or false) as input
dnl and produces
dnl   - an AC_SUBSTed variable FOO_H that is either a file name or empty, based
dnl     on whether GL_GENERATE_FOO_H is true or false,
dnl   - an Automake conditional GL_GENERATE_FOO_H that evaluates to the value of
dnl     the shell variable GL_GENERATE_FOO_H.
AC_DEFUN([gl_CONDITIONAL_HEADER],
[
  m4_pushdef([gl_header_name], AS_TR_SH(m4_toupper($1)))
  m4_pushdef([gl_generate_var], [GL_GENERATE_]AS_TR_SH(m4_toupper($1)))
  m4_pushdef([gl_generate_cond], [GL_GENERATE_]AS_TR_SH(m4_toupper($1)))
  case "$gl_generate_var" in
    false) gl_header_name='' ;;
    true)
      dnl It is OK to use a .h file in lib/ from within tests/, but not vice
      dnl versa.
      if test -z "$gl_header_name"; then
        gl_header_name="${gl_source_base_prefix}$1"
      fi
      ;;
    *) echo "*** gl_generate_var is not set correctly" 1>&2; exit 1 ;;
  esac
  AC_SUBST(gl_header_name)
  gl_CONDITIONAL(gl_generate_cond, [$gl_generate_var])
  m4_popdef([gl_generate_cond])
  m4_popdef([gl_generate_var])
  m4_popdef([gl_header_name])
])

dnl Preparations for gl_CHECK_FUNCS_MACOS.
AC_DEFUN([gl_PREPARE_CHECK_FUNCS_MACOS],
[
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_REQUIRE([gl_COMPILER_CLANG])
  AC_CACHE_CHECK([for compiler option needed when checking for future declarations],
    [gl_cv_compiler_check_future_option],
    [case "$host_os" in
       dnl This is only needed on macOS.
       darwin*)
         if test $gl_cv_compiler_clang = yes; then
           dnl Test whether the compiler supports the option
           dnl '-Werror=unguarded-availability-new'.
           save_ac_compile="$ac_compile"
           ac_compile="$ac_compile -Werror=unguarded-availability-new"
           AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[]],[[]])],
             [gl_cv_compiler_check_future_option='-Werror=unguarded-availability-new'],
             [gl_cv_compiler_check_future_option=none])
           ac_compile="$save_ac_compile"
         else
           gl_cv_compiler_check_future_option=none
         fi
         ;;
       *) gl_cv_compiler_check_future_option=none ;;
     esac
    ])
])

dnl Pieces of the expansion of
dnl gl_CHECK_FUNCS_ANDROID
dnl gl_CHECK_FUNCS_MACOS
dnl gl_CHECK_FUNCS_ANDROID_MACOS

AC_DEFUN([gl_CHECK_FUNCS_DEFAULT_CASE],
[
         *)
           AC_CHECK_FUNC([$1])
           [gl_cv_onwards_func_][$1]=$[ac_cv_func_][$1]
           ;;
])

AC_DEFUN([gl_CHECK_FUNCS_CASE_FOR_ANDROID],
[
         linux*-android*)
           AC_CHECK_DECL([$1], , , [$2])
           if test $[ac_cv_have_decl_][$1] = yes; then
             AC_CHECK_FUNC([[$1]])
             if test $[ac_cv_func_][$1] = yes; then
               [gl_cv_onwards_func_][$1]=yes
             else
               dnl The function is declared but does not exist. This should not
               dnl happen normally. But anyway, we know that a future version
               dnl of Android will have the function.
               [gl_cv_onwards_func_][$1]='future OS version'
             fi
           else
             [gl_cv_onwards_func_][$1]='future OS version'
           fi
           ;;
])

AC_DEFUN([gl_CHECK_FUNCS_CASE_FOR_MACOS],
[
         darwin*)
           if test "x$gl_cv_compiler_check_future_option" != "xnone"; then
             dnl Use a compile test, not a link test.
             save_ac_compile="$ac_compile"
             ac_compile="$ac_compile $gl_cv_compiler_check_future_option"
             save_ac_compile_for_check_decl="$ac_compile_for_check_decl"
             ac_compile_for_check_decl="$ac_compile_for_check_decl $gl_cv_compiler_check_future_option"
             unset [ac_cv_have_decl_][$1]
             AC_CHECK_DECL([$1], , , [$2])
             ac_compile="$save_ac_compile"
             ac_compile_for_check_decl="$save_ac_compile_for_check_decl"
             [ac_cv_func_][$1]="$[ac_cv_have_decl_][$1]"
             if test $[ac_cv_func_][$1] = yes; then
               [gl_cv_onwards_func_][$1]=yes
             else
               unset [ac_cv_have_decl_][$1]
               AC_CHECK_DECL([$1], , , [$2])
               if test $[ac_cv_have_decl_][$1] = yes; then
                 [gl_cv_onwards_func_][$1]='future OS version'
               else
                 [gl_cv_onwards_func_][$1]=no
               fi
             fi
           else
             AC_CHECK_FUNC([$1])
             [gl_cv_onwards_func_][$1]=$[ac_cv_func_][$1]
           fi
           ;;
])

AC_DEFUN([gl_CHECK_FUNCS_SET_RESULTS],
[
  case "$[gl_cv_onwards_func_][$1]" in
    future*) [ac_cv_func_][$1]=no ;;
    *)       [ac_cv_func_][$1]=$[gl_cv_onwards_func_][$1] ;;
  esac
  if test $[ac_cv_func_][$1] = yes; then
    AC_DEFINE([HAVE_]m4_translit([[$1]],
                                 [abcdefghijklmnopqrstuvwxyz],
                                 [ABCDEFGHIJKLMNOPQRSTUVWXYZ]),
              [1], [Define to 1 if you have the `$1' function.])
  fi
])

dnl gl_CHECK_FUNCS_ANDROID([func], [[#include <foo.h>]])
dnl is like AC_CHECK_FUNCS([func]), taking into account a portability problem
dnl on Android.
dnl
dnl When code is compiled on Android, it is in the context of a certain
dnl "Android API level", which indicates the minimum version of Android on
dnl which the app can be installed. In other words, you don't compile for a
dnl specific version of Android. You compile for all versions of Android,
dnl onwards from the given API level.
dnl Thus, the question "does the OS have the function func" has three possible
dnl answers:
dnl   - yes, in all versions starting from the given API level,
dnl   - no, in no version,
dnl   - not in the given API level, but in a later version of Android.
dnl
dnl In detail, this works as follows:
dnl If func was added to Android API level, say, 28, then the libc.so has the
dnl symbol func always, whereas the header file <foo.h> declares func
dnl conditionally:
dnl   #if __ANDROID_API__ >= 28
dnl   ... func (...) __INTRODUCED_IN(28);
dnl   #endif
dnl Thus, when compiling with "clang -target armv7a-unknown-linux-android28",
dnl the function func is declared and exists in libc.
dnl Whereas when compiling with "clang -target armv7a-unknown-linux-android27",
dnl the function func is not declared but exists in libc.
dnl
dnl This macro sets two variables:
dnl   - gl_cv_onwards_func_<func>   to yes / no / "future OS version"
dnl   - ac_cv_func_<func>           to yes / no / no
dnl The first variable allows to distinguish all three cases.
dnl The second variable is set, so that an invocation
dnl   gl_CHECK_FUNCS_ANDROID([func], [[#include <foo.h>]])
dnl can be used as a drop-in replacement for
dnl   AC_CHECK_FUNCS([func]).
AC_DEFUN([gl_CHECK_FUNCS_ANDROID],
[
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_CACHE_CHECK([for [$1]],
    [[gl_cv_onwards_func_][$1]],
    [gl_SILENT([
       case "$host_os" in
         gl_CHECK_FUNCS_CASE_FOR_ANDROID([$1], [$2])
         gl_CHECK_FUNCS_DEFAULT_CASE([$1])
       esac
      ])
    ])
  gl_CHECK_FUNCS_SET_RESULTS([$1])
])

dnl gl_CHECK_FUNCS_MACOS([func], [[#include <foo.h>]])
dnl is like AC_CHECK_FUNCS([func]), taking into account a portability problem
dnl on macOS.
dnl
dnl When code is compiled on macOS, it is in the context of a certain minimum
dnl macOS version, that can be set through the option '-mmacosx-version-min='.
dnl In other words, you don't compile for a specific version of macOS. You
dnl compile for all versions of macOS, onwards from the given version.
dnl Thus, the question "does the OS have the function func" has three possible
dnl answers:
dnl   - yes, in all versions starting from the given version,
dnl   - no, in no version,
dnl   - not in the given version, but in a later version of macOS.
dnl
dnl In detail, this works as follows:
dnl If func was added to, say, macOS version 13, then the libc has the
dnl symbol func always, whereas the header file <foo.h> declares func
dnl conditionally with a special availability attribute:
dnl   ... func (...) __attribute__((availability(macos,introduced=13.0)));
dnl Thus, when compiling with "clang mmacosx-version-min=13", there is no
dnl warning about the use of func, and the resulting binary
dnl   - runs fine on macOS 13,
dnl   - aborts with a dyld "Symbol not found" message on macOS 12.
dnl Whereas, when compiling with "clang mmacosx-version-min=12", there is a
dnl   warning: 'func' is only available on macOS 13.0 or newer
dnl   [-Wunguarded-availability-new],
dnl and the resulting binary
dnl   - runs fine on macOS 13,
dnl   - crashes with a SIGSEGV (signal 11) on macOS 12.
dnl
dnl This macro sets two variables:
dnl   - gl_cv_onwards_func_<func>   to yes / no / "future OS version"
dnl   - ac_cv_func_<func>           to yes / no / no
dnl The first variable allows to distinguish all three cases.
dnl The second variable is set, so that an invocation
dnl   gl_CHECK_FUNCS_MACOS([func], [[#include <foo.h>]])
dnl can be used as a drop-in replacement for
dnl   AC_CHECK_FUNCS([func]).
AC_DEFUN([gl_CHECK_FUNCS_MACOS],
[
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_REQUIRE([gl_PREPARE_CHECK_FUNCS_MACOS])
  AC_CACHE_CHECK([for [$1]],
    [[gl_cv_onwards_func_][$1]],
    [gl_SILENT([
       case "$host_os" in
         gl_CHECK_FUNCS_CASE_FOR_MACOS([$1], [$2])
         gl_CHECK_FUNCS_DEFAULT_CASE([$1])
       esac
      ])
    ])
  gl_CHECK_FUNCS_SET_RESULTS([$1])
])

dnl gl_CHECK_FUNCS_ANDROID_MACOS([func], [[#include <foo.h>]])
dnl is like AC_CHECK_FUNCS([func]), taking into account a portability problem
dnl on Android and on macOS.
dnl It is the combination of gl_CHECK_FUNCS_ANDROID and gl_CHECK_FUNCS_MACOS.
AC_DEFUN([gl_CHECK_FUNCS_ANDROID_MACOS],
[
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_REQUIRE([gl_PREPARE_CHECK_FUNCS_MACOS])
  AC_CACHE_CHECK([for [$1]],
    [[gl_cv_onwards_func_][$1]],
    [gl_SILENT([
       case "$host_os" in
         gl_CHECK_FUNCS_CASE_FOR_ANDROID([$1], [$2])
         gl_CHECK_FUNCS_CASE_FOR_MACOS([$1], [$2])
         gl_CHECK_FUNCS_DEFAULT_CASE([$1])
       esac
      ])
    ])
  gl_CHECK_FUNCS_SET_RESULTS([$1])
])

dnl Expands to some code for use in .c programs that, on native Windows, defines
dnl the Microsoft deprecated alias function names to the underscore-prefixed
dnl actual function names. With this macro, these function names are available
dnl without linking with '-loldnames' and without generating warnings.
dnl Usage: Use it after all system header files are included.
dnl          #include <...>
dnl          #include <...>
dnl          ]GL_MDA_DEFINES[
dnl          ...
AC_DEFUN([GL_MDA_DEFINES],[
AC_REQUIRE([_GL_MDA_DEFINES])
[$gl_mda_defines]
])
AC_DEFUN([_GL_MDA_DEFINES],
[gl_mda_defines='
#if defined _WIN32 && !defined __CYGWIN__
#define access    _access
#define chdir     _chdir
#define chmod     _chmod
#define close     _close
#define creat     _creat
#define dup       _dup
#define dup2      _dup2
#define ecvt      _ecvt
#define execl     _execl
#define execle    _execle
#define execlp    _execlp
#define execv     _execv
#define execve    _execve
#define execvp    _execvp
#define execvpe   _execvpe
#define fcloseall _fcloseall
#define fcvt      _fcvt
#define fdopen    _fdopen
#define fileno    _fileno
#define gcvt      _gcvt
#define getcwd    _getcwd
#define getpid    _getpid
#define getw      _getw
#define isatty    _isatty
#define j0        _j0
#define j1        _j1
#define jn        _jn
#define lfind     _lfind
#define lsearch   _lsearch
#define lseek     _lseek
#define memccpy   _memccpy
#define mkdir     _mkdir
#define mktemp    _mktemp
#define open      _open
#define putenv    _putenv
#define putw      _putw
#define read      _read
#define rmdir     _rmdir
#define strdup    _strdup
#define swab      _swab
#define tempnam   _tempnam
#define tzset     _tzset
#define umask     _umask
#define unlink    _unlink
#define utime     _utime
#define wcsdup    _wcsdup
#define write     _write
#define y0        _y0
#define y1        _y1
#define yn        _yn
#endif
'
])

# zzgnulib.m4 serial 1
dnl Copyright (C) 2020-2023 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl This file must be named something that sorts after all other
dnl package- or gnulib-provided .m4 files - at least for those packages
dnl that redefine AC_PROG_CC.

dnl Redefine AC_PROG_CC so that it ends with invocations of gl_COMPILER_CLANG
dnl and gl_COMPILER_PREPARE_CHECK_DECL.
m4_define([AC_PROG_CC],
  m4_defn([AC_PROG_CC])[
gl_COMPILER_CLANG
gl_COMPILER_PREPARE_CHECK_DECL
])

# gl_ZZGNULIB
# -----------
# Witness macro that this file has been included.  Needed to force
# Automake to include this file after all other gnulib .m4 files.
AC_DEFUN([gl_ZZGNULIB])

