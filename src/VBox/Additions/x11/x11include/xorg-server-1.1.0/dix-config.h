/* include/dix-config.h.  Generated by configure.  */
/* dix-config.h.in: not at all generated.                      -*- c -*- */

#ifndef _DIX_CONFIG_H_
#define _DIX_CONFIG_H_

/* Support BigRequests extension */
#define BIGREQS 1

/* Builder address */
#define BUILDERADDR "xorg@lists.freedesktop.org"

/* Operating System Name */
#define OSNAME "Linux 2.6.16-1.2122_FC6smp i686"

/* Operating System Vendor */
#define OSVENDOR ""

/* Default font path */
#define COMPILEDDEFAULTFONTPATH "/usr/local/lib/X11/fonts/misc/,/usr/local/lib/X11/fonts/TTF/,/usr/local/lib/X11/fonts/OTF,/usr/local/lib/X11/fonts/Type1/,/usr/local/lib/X11/fonts/CID/,/usr/local/lib/X11/fonts/100dpi/,/usr/local/lib/X11/fonts/75dpi/"

/* Support Composite Extension */
#define COMPOSITE 1

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Support Damage extension */
#define DAMAGE 1

/* Use OsVendorInit */
#define DDXOSINIT 1

/* Use GetTimeInMillis */
/* #undef DDXTIME */

/* Use OsVendorFatalError */
/* #undef DDXOSFATALERROR */

/* Use OsVendorVErrorF */
/* #undef DDXOSVERRORF */

/* Use ddxBeforeReset */
/* #undef DDXBEFORERESET */

/* Build DPMS extension */
#define DPMSExtension 1

/* Build GLX extension */
#define GLXEXT 1

/* Build GLX DRI loader */
/* #undef GLX_DRI */

/* Path to DRI drivers */
#define DRI_DRIVER_PATH "/usr/local/lib/dri"

/* Include handhelds.org h3600 touchscreen driver */
/* #undef H3600_TS */

/* Support XDM-AUTH*-1 */
#define HASXDMAUTH 1

/* Define to 1 if you have the `getdtablesize' function. */
#define HAS_GETDTABLESIZE 1

/* Define to 1 if you have the `getifaddrs' function. */
#define HAS_GETIFADDRS 1

/* Define to 1 if you have the `getpeereid' function. */
/* #undef HAS_GETPEEREID */

/* Define to 1 if you have the `getpeerucred' function. */
/* #undef HAS_GETPEERUCRED */

/* Define to 1 if you have the `mmap' function. */
#define HAS_MMAP 1

/* Support SHM */
#define HAS_SHM 1

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <asm/mtrr.h> header file. */
#define HAVE_ASM_MTRR_H 1

/* Define to 1 if you have the <dbm.h> header file. */
/* #undef HAVE_DBM_H */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `geteuid' function. */
#define HAVE_GETEUID 1

/* Define to 1 if you have the `getopt' function. */
#define HAVE_GETOPT 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `link' function. */
#define HAVE_LINK 1

/* Define to 1 if you have the <linux/agpgart.h> header file. */
#define HAVE_LINUX_AGPGART_H 1

/* Define to 1 if you have the <linux/apm_bios.h> header file. */
#define HAVE_LINUX_APM_BIOS_H 1

/* Define to 1 if you have the <linux/fb.h> header file. */
#define HAVE_LINUX_FB_H 1

/* Define to 1 if you have the <linux/h3600_ts.h> header file. */
/* #undef HAVE_LINUX_H3600_TS_H */

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the <ndbm.h> header file. */
/* #undef HAVE_NDBM_H */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <rpcsvc/dbm.h> header file. */
/* #undef HAVE_RPCSVC_DBM_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if SYSV IPC is available */
#define HAVE_SYSV_IPC 1

/* Define to 1 if you have the <sys/agpio.h> header file. */
/* #undef HAVE_SYS_AGPIO_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/io.h> header file. */
/* #undef HAVE_SYS_IO_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/vm86.h> header file. */
/* #undef HAVE_SYS_VM86_H */

/* Define to 1 if you have the <tslib.h> header file. */
/* #undef HAVE_TSLIB_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Support IPv6 for TCP connections */
#define IPv6 1

/* Support MIT Misc extension */
#define MITMISC 1

/* Support MIT-SHM Extension */
#define MITSHM 1

/* Disable some debugging code */
#define NDEBUG 1

/* Name of package */
#define PACKAGE "xorg-server"

/* Internal define for Xinerama */
#define PANORAMIX 1

/* Support pixmap privates */
#define PIXPRIV 1

/* Overall prefix */
#define PROJECTROOT "/usr/local"

/* Support RANDR extension */
#define RANDR 1

/* Support Record extension */
#define XRECORD 1

/* Support RENDER extension */
#define RENDER 1

/* Support X resource extension */
#define RES 1

/* Support MIT-SCREEN-SAVER extension */
#define SCREENSAVER 1

/* Use a lock to prevent multiple servers on a display */
#define SERVER_LOCK 1

/* Support SHAPE extension */
#define SHAPE 1

/* Include time-based scheduler */
#define SMART_SCHEDULE 1

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 on systems derived from System V Release 4 */
/* #undef SVR4 */

/* Support TCP socket connections */
#define TCPCONN 1

/* Enable touchscreen support */
/* #undef TOUCHSCREEN */

/* Support tslib touchscreen abstraction library */
/* #undef TSLIB */

/* Support UNIX socket connections */
#define UNIXCONN 1

/* Use builtin rgb color database */
/* #undef USE_RGB_BUILTIN */

/* Use rgb.txt directly */
#define USE_RGB_TXT 1

/* unaligned word accesses behave as expected */
/* #undef WORKING_UNALIGNED_INT */

/* Support XCMisc extension */
#define XCMISC 1

/* Build Security extension */
#define XCSECURITY 1

/* Support Xdmcp */
#define XDMCP 1

/* Build XEvIE extension */
#define XEVIE 1

/* Build XFree86 BigFont extension */
#define XF86BIGFONT 1

/* Support XFree86 miscellaneous extensions */
#define XF86MISC 1

/* Support XFree86 Video Mode extension */
#define XF86VIDMODE 1

/* Support XFixes extension */
#define XFIXES 1

/* Build XDGA support */
#define XFreeXDGA 1

/* Support Xinerama extension */
#define XINERAMA 1

/* Support X Input extension */
#define XINPUT 1

/* Build XKB */
#define XKB 1

/* Enable XKB per default */
#define XKB_DFLT_DISABLED 0

/* Build XKB server */
#define XKB_IN_SERVER 1

/* Vendor release */
#define XORG_RELEASE "Release 7.1"

/* Current Xorg version */
#define XORG_VERSION_CURRENT (((7) * 10000000) + ((1) * 100000) + ((0) * 1000) + 0)

/* Xorg release date */
#define XORG_DATE "22 May 2006"

/* Build Xv Extension */
#define XvExtension 1

/* Build XvMC Extension */
#define XvMCExtension 1

/* Build XRes extension */
#define XResExtension 1

/* Support XSync extension */
#define XSYNC 1

/* Support XTest extension */
#define XTEST 1

/* Support XTrap extension */
#define XTRAP 1

/* Support Xv extension */
#define XV 1

/* Build LBX extension */
/* #undef LBX */

/* Build APPGROUP extension */
#define XAPPGROUP 1

/* Build TOG-CUP extension */
#define TOGCUP 1

/* Build Extended-Visual-Information extension */
#define EVI 1

/* Build Multibuffer extension */
/* #undef MULTIBUFFER */

/* Support DRI extension */
#define XF86DRI 1

/* Build DBE support */
#define DBE 1

/* Vendor name */
#define XVENDORNAME "The X.Org Foundation"

/* Endian order */
#define X_BYTE_ORDER X_LITTLE_ENDIAN

/* BSD-compliant source */
#define _BSD_SOURCE 1

/* POSIX-compliant source */
#define _POSIX_SOURCE 1

#ifndef _XOPEN_SOURCE
/* X/Open-compliant source */
#define _XOPEN_SOURCE 500
#endif

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Build Rootless code */
/* #undef ROOTLESS */

/* Define to 1 if unsigned long is 64 bits. */
/* #undef _XSERVER64 */

/* Define to location of RGB database */
#define RGB_DB "/usr/local/share/X11/rgb"

/* System is BSD-like */
/* #undef CSRG_BASED */

/* Define to 1 if `struct sockaddr_in' has a `sin_len' member */
/* #undef BSD44SOCKETS */

/* Define to 1 if modules should avoid the libcwrapper */
#define NO_LIBCWRAPPER 1

#endif /* _DIX_CONFIG_H_ */
