/* config.h.in.  Generated from configure.ac by autoheader.  */


#ifdef __APPLE__
/* Darwin backend */
#define OS_DARWIN 1
#else
/* Darwin backend */
#undef OS_DARWIN
#endif

/* Haiku backend */
#undef OS_HAIKU

#ifdef __linux__
#define OS_LINUX 1
#else
/* Linux backend */
#undef OS_LINUX
#endif

/* NetBSD backend */
#undef OS_NETBSD

/* OpenBSD backend */
#undef OS_OPENBSD

/* SunOS backend */
#undef OS_SUNOS

#ifdef _WIN32
/* Windows backend */
#undef OS_WINDOWS
#else
/* Windows backend */
#undef OS_WINDOWS
#endif

/* Default visibility */
#define DEFAULT_VISIBILITY

/* Start with debug message logging enabled */
#undef ENABLE_DEBUG_LOGGING

/* Message logging */
#undef ENABLE_LOGGING

/* Define to 1 if you have the <asm/types.h> header file. */
#undef HAVE_ASM_TYPES_H

/* Define to 1 if you have the declaration of `TFD_CLOEXEC', and to 0 if you
   don't. */
#undef HAVE_DECL_TFD_CLOEXEC

/* Define to 1 if you have the declaration of `TFD_NONBLOCK', and to 0 if you
   don't. */
#undef HAVE_DECL_TFD_NONBLOCK

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

#if OS_LINUX_no
/* Define to 1 if you have the `udev' library (-ludev). */
#define HAVE_LIBUDEV 1

/* Define to 1 if you have the <libudev.h> header file. */
#define HAVE_LIBUDEV_H 1
#else
/* Define to 1 if you have the `udev' library (-ludev). */
#undef HAVE_LIBUDEV

/* Define to 1 if you have the <libudev.h> header file. */
#undef HAVE_LIBUDEV_H
#endif

/* Define to 1 if you have the <linux/netlink.h> header file. */
#undef HAVE_LINUX_NETLINK_H

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

#if OS_LINUX
/* Define to 1 if you have the `pipe2' function. */
#define HAVE_PIPE2 1
#else
#undef HAVE_PIPE2
#endif

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if the system has the type `struct timespec'. */
#define HAVE_STRUCT_TIMESPEC 1

#if OS_LINUX
/* syslog() function available */
#define HAVE_SYSLOG_FUNC 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1
#else
/* syslog() function available */
#undef HAVE_SYSLOG_FUNC

/* Define to 1 if you have the <syslog.h> header file. */
#undef HAVE_SYSLOG_H
#endif

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#undef LT_OBJDIR

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

#if OS_DARWIN || OS_LINUX
/* type of second poll() argument */
#define POLL_NFDS_TYPE nfds_t
#else
#define POLL_NFDS_TYPE unsigned int
#endif

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

#if OS_DARWIN || OS_LINUX
/* Use POSIX Threads */
#define THREADS_POSIX 1
#else
/* Use POSIX Threads */
#undef THREADS_POSIX
#endif

/* timerfd headers available */
#undef USBI_TIMERFD_AVAILABLE

/* Enable output to system log */
#undef USE_SYSTEM_LOGGING_FACILITY

#if OS_LINUX
#define USE_UDEV 1
#else
/* Use udev for device enumeration/hotplug */
#undef USE_UDEV
#endif

/* Use UsbDk Windows backend */
#undef USE_USBDK

/* Version number of package */
#undef VERSION

#if OS_WINDOWS
#define WINVER 0x0501
#else
/* Oldest Windows version supported */
#undef WINVER
#endif
/* Use GNU extensions */
#undef _GNU_SOURCE

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#undef inline
#endif
