
#ifndef Runtime_Core_API_H
#define Runtime_Core_API_H

#ifdef Runtime_Core_BUILT_AS_STATIC
#  define Runtime_Core_API
#  define RUNTIME_CORE_NO_EXPORT
#else
#  ifndef Runtime_Core_API
#    ifdef Runtime_Core_EXPORTS
        /* We are building this library */
#      define Runtime_Core_API __declspec(dllexport)
#    else
        /* We are using this library */
#      define Runtime_Core_API __declspec(dllimport)
#    endif
#  endif

#  ifndef RUNTIME_CORE_NO_EXPORT
#    define RUNTIME_CORE_NO_EXPORT 
#  endif
#endif

#ifndef RUNTIME_CORE_DEPRECATED
#  define RUNTIME_CORE_DEPRECATED __declspec(deprecated)
#endif

#ifndef RUNTIME_CORE_DEPRECATED_EXPORT
#  define RUNTIME_CORE_DEPRECATED_EXPORT Runtime_Core_API RUNTIME_CORE_DEPRECATED
#endif

#ifndef RUNTIME_CORE_DEPRECATED_NO_EXPORT
#  define RUNTIME_CORE_DEPRECATED_NO_EXPORT RUNTIME_CORE_NO_EXPORT RUNTIME_CORE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef RUNTIME_CORE_NO_DEPRECATED
#    define RUNTIME_CORE_NO_DEPRECATED
#  endif
#endif

#endif /* Runtime_Core_API_H */
