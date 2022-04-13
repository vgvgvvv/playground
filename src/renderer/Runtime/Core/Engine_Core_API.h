
#ifndef Engine_Core_API_H
#define Engine_Core_API_H

#ifdef Engine_Core_BUILT_AS_STATIC
#  define Engine_Core_API
#  define ENGINE_CORE_NO_EXPORT
#else
#  ifndef Engine_Core_API
#    ifdef Engine_Core_EXPORTS
        /* We are building this library */
#      define Engine_Core_API __declspec(dllexport)
#    else
        /* We are using this library */
#      define Engine_Core_API __declspec(dllimport)
#    endif
#  endif

#  ifndef ENGINE_CORE_NO_EXPORT
#    define ENGINE_CORE_NO_EXPORT 
#  endif
#endif

#ifndef ENGINE_CORE_DEPRECATED
#  define ENGINE_CORE_DEPRECATED __declspec(deprecated)
#endif

#ifndef ENGINE_CORE_DEPRECATED_EXPORT
#  define ENGINE_CORE_DEPRECATED_EXPORT Engine_Core_API ENGINE_CORE_DEPRECATED
#endif

#ifndef ENGINE_CORE_DEPRECATED_NO_EXPORT
#  define ENGINE_CORE_DEPRECATED_NO_EXPORT ENGINE_CORE_NO_EXPORT ENGINE_CORE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ENGINE_CORE_NO_DEPRECATED
#    define ENGINE_CORE_NO_DEPRECATED
#  endif
#endif

#endif /* Engine_Core_API_H */
