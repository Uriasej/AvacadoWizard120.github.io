
#ifndef MULTIMC_LOGIC_EXPORT_H
#define MULTIMC_LOGIC_EXPORT_H

#ifdef MULTIMC_LOGIC_STATIC_DEFINE
#  define MULTIMC_LOGIC_EXPORT
#  define MULTIMC_LOGIC_NO_EXPORT
#else
#  ifndef MULTIMC_LOGIC_EXPORT
#    ifdef MultiMC_logic_EXPORTS
        /* We are building this library */
#      define MULTIMC_LOGIC_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define MULTIMC_LOGIC_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef MULTIMC_LOGIC_NO_EXPORT
#    define MULTIMC_LOGIC_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef MULTIMC_LOGIC_DEPRECATED
#  define MULTIMC_LOGIC_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MULTIMC_LOGIC_DEPRECATED_EXPORT
#  define MULTIMC_LOGIC_DEPRECATED_EXPORT MULTIMC_LOGIC_EXPORT MULTIMC_LOGIC_DEPRECATED
#endif

#ifndef MULTIMC_LOGIC_DEPRECATED_NO_EXPORT
#  define MULTIMC_LOGIC_DEPRECATED_NO_EXPORT MULTIMC_LOGIC_NO_EXPORT MULTIMC_LOGIC_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MULTIMC_LOGIC_NO_DEPRECATED
#    define MULTIMC_LOGIC_NO_DEPRECATED
#  endif
#endif

#endif /* MULTIMC_LOGIC_EXPORT_H */
