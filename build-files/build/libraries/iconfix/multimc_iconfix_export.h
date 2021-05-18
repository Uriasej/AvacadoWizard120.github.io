
#ifndef MULTIMC_ICONFIX_EXPORT_H
#define MULTIMC_ICONFIX_EXPORT_H

#ifdef MULTIMC_ICONFIX_STATIC_DEFINE
#  define MULTIMC_ICONFIX_EXPORT
#  define MULTIMC_ICONFIX_NO_EXPORT
#else
#  ifndef MULTIMC_ICONFIX_EXPORT
#    ifdef MultiMC_iconfix_EXPORTS
        /* We are building this library */
#      define MULTIMC_ICONFIX_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define MULTIMC_ICONFIX_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef MULTIMC_ICONFIX_NO_EXPORT
#    define MULTIMC_ICONFIX_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef MULTIMC_ICONFIX_DEPRECATED
#  define MULTIMC_ICONFIX_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MULTIMC_ICONFIX_DEPRECATED_EXPORT
#  define MULTIMC_ICONFIX_DEPRECATED_EXPORT MULTIMC_ICONFIX_EXPORT MULTIMC_ICONFIX_DEPRECATED
#endif

#ifndef MULTIMC_ICONFIX_DEPRECATED_NO_EXPORT
#  define MULTIMC_ICONFIX_DEPRECATED_NO_EXPORT MULTIMC_ICONFIX_NO_EXPORT MULTIMC_ICONFIX_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MULTIMC_ICONFIX_NO_DEPRECATED
#    define MULTIMC_ICONFIX_NO_DEPRECATED
#  endif
#endif

#endif /* MULTIMC_ICONFIX_EXPORT_H */
