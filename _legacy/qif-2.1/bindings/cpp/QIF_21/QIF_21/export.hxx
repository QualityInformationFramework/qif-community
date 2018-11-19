#ifdef QIF_STATIC_LIBS
#define QIF21_SYMBOL_DECL
#else
#ifdef QIF21_EXPORTS
#define QIF21_SYMBOL_DECL __declspec(dllexport)
#else
#define QIF21_SYMBOL_DECL __declspec(dllimport)
#endif
#endif