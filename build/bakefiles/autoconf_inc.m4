dnl ### begin block 00_header[build/bakefiles/estescook.bkl,estescook.bkl] ###
dnl
dnl This macro was generated by
dnl Bakefile 0.2.6 (http://www.bakefile.org)
dnl Do not modify, all changes will be overwritten!

BAKEFILE_AUTOCONF_INC_M4_VERSION="0.2.6"

dnl ### begin block 20_COND_BUILD_debug[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_BUILD_debug="#"
    if test "x$BUILD" = "xdebug" ; then
        COND_BUILD_debug=""
    fi
    AC_SUBST(COND_BUILD_debug)
dnl ### begin block 20_COND_BUILD_debug_UNICODE_0[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_BUILD_debug_UNICODE_0="#"
    if test "x$BUILD" = "xdebug" -a "x$UNICODE" = "x0" ; then
        COND_BUILD_debug_UNICODE_0=""
    fi
    AC_SUBST(COND_BUILD_debug_UNICODE_0)
dnl ### begin block 20_COND_BUILD_debug_UNICODE_1[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_BUILD_debug_UNICODE_1="#"
    if test "x$BUILD" = "xdebug" -a "x$UNICODE" = "x1" ; then
        COND_BUILD_debug_UNICODE_1=""
    fi
    AC_SUBST(COND_BUILD_debug_UNICODE_1)
dnl ### begin block 20_COND_BUILD_release[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_BUILD_release="#"
    if test "x$BUILD" = "xrelease" ; then
        COND_BUILD_release=""
    fi
    AC_SUBST(COND_BUILD_release)
dnl ### begin block 20_COND_BUILD_release_UNICODE_1[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_BUILD_release_UNICODE_1="#"
    if test "x$BUILD" = "xrelease" -a "x$UNICODE" = "x1" ; then
        COND_BUILD_release_UNICODE_1=""
    fi
    AC_SUBST(COND_BUILD_release_UNICODE_1)
dnl ### begin block 20_COND_DEPS_TRACKING_0[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_DEPS_TRACKING_0="#"
    if test "x$DEPS_TRACKING" = "x0" ; then
        COND_DEPS_TRACKING_0=""
    fi
    AC_SUBST(COND_DEPS_TRACKING_0)
dnl ### begin block 20_COND_DEPS_TRACKING_1[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_DEPS_TRACKING_1="#"
    if test "x$DEPS_TRACKING" = "x1" ; then
        COND_DEPS_TRACKING_1=""
    fi
    AC_SUBST(COND_DEPS_TRACKING_1)
dnl ### begin block 20_COND_MONOLITHIC_1[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_MONOLITHIC_1="#"
    if test "x$MONOLITHIC" = "x1" ; then
        COND_MONOLITHIC_1=""
    fi
    AC_SUBST(COND_MONOLITHIC_1)
dnl ### begin block 20_COND_PLATFORM_MAC_0[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_PLATFORM_MAC_0="#"
    if test "x$PLATFORM_MAC" = "x0" ; then
        COND_PLATFORM_MAC_0=""
    fi
    AC_SUBST(COND_PLATFORM_MAC_0)
dnl ### begin block 20_COND_PLATFORM_MAC_1[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_PLATFORM_MAC_1="#"
    if test "x$PLATFORM_MAC" = "x1" ; then
        COND_PLATFORM_MAC_1=""
    fi
    AC_SUBST(COND_PLATFORM_MAC_1)
dnl ### begin block 20_COND_PLATFORM_OS2_1[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_PLATFORM_OS2_1="#"
    if test "x$PLATFORM_OS2" = "x1" ; then
        COND_PLATFORM_OS2_1=""
    fi
    AC_SUBST(COND_PLATFORM_OS2_1)
dnl ### begin block 20_COND_PLATFORM_WIN32_1[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_PLATFORM_WIN32_1="#"
    if test "x$PLATFORM_WIN32" = "x1" ; then
        COND_PLATFORM_WIN32_1=""
    fi
    AC_SUBST(COND_PLATFORM_WIN32_1)
dnl ### begin block 20_COND_UNICODE_1[build/bakefiles/estescook.bkl,estescook.bkl] ###
    COND_UNICODE_1="#"
    if test "x$UNICODE" = "x1" ; then
        COND_UNICODE_1=""
    fi
    AC_SUBST(COND_UNICODE_1)
