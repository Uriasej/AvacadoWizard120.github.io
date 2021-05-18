
#ifndef MULTIMC_GUI_EXPORT_H
#define MULTIMC_GUI_EXPORT_H

#ifdef MULTIMC_GUI_STATIC_DEFINE
#  define MULTIMC_GUI_EXPORT
#  define MULTIMC_GUI_NO_EXPORT
#else
#  ifndef MULTIMC_GUI_EXPORT
#    ifdef MultiMC_gui_EXPORTS
        /* We are building this library */
#      define MULTIMC_GUI_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define MULTIMC_GUI_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef MULTIMC_GUI_NO_EXPORT
#    define MULTIMC_GUI_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef MULTIMC_GUI_DEPRECATED
#  define MULTIMC_GUI_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MULTIMC_GUI_DEPRECATED_EXPORT
#  define MULTIMC_GUI_DEPRECATED_EXPORT MULTIMC_GUI_EXPORT MULTIMC_GUI_DEPRECATED
#endif

#ifndef MULTIMC_GUI_DEPRECATED_NO_EXPORT
#  define MULTIMC_GUI_DEPRECATED_NO_EXPORT MULTIMC_GUI_NO_EXPORT MULTIMC_GUI_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MULTIMC_GUI_NO_DEPRECATED
#    define MULTIMC_GUI_NO_DEPRECATED
#  endif
#endif

#endif /* MULTIMC_GUI_EXPORT_H */
