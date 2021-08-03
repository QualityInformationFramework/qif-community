#ifdef QIF_STATIC_LIBS
#define QIF30_SYMBOL_DECL
#else
#ifdef QIF30_EXPORTS
#define QIF30_SYMBOL_DECL __declspec(dllexport)
#else
#define QIF30_SYMBOL_DECL __declspec(dllimport)
#endif
#endif