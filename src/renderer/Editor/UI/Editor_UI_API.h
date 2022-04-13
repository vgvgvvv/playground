
#ifndef Editor_UI_API_H
#define Editor_UI_API_H

#ifdef Editor_UI_BUILT_AS_STATIC
#  define Editor_UI_API
#  define EDITOR_UI_NO_EXPORT
#else
#  ifndef Editor_UI_API
#    ifdef Editor_UI_EXPORTS
        /* We are building this library */
#      define Editor_UI_API __declspec(dllexport)
#    else
        /* We are using this library */
#      define Editor_UI_API __declspec(dllimport)
#    endif
#  endif

#  ifndef EDITOR_UI_NO_EXPORT
#    define EDITOR_UI_NO_EXPORT 
#  endif
#endif

#ifndef EDITOR_UI_DEPRECATED
#  define EDITOR_UI_DEPRECATED __declspec(deprecated)
#endif

#ifndef EDITOR_UI_DEPRECATED_EXPORT
#  define EDITOR_UI_DEPRECATED_EXPORT Editor_UI_API EDITOR_UI_DEPRECATED
#endif

#ifndef EDITOR_UI_DEPRECATED_NO_EXPORT
#  define EDITOR_UI_DEPRECATED_NO_EXPORT EDITOR_UI_NO_EXPORT EDITOR_UI_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef EDITOR_UI_NO_DEPRECATED
#    define EDITOR_UI_NO_DEPRECATED
#  endif
#endif

#endif /* Editor_UI_API_H */
