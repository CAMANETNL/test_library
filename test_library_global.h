#pragma once

#include <QtCore/qglobal.h>

#if defined(DLL_LIBRARY)
#  define DLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DLLSHARED_EXPORT Q_DECL_IMPORT
#endif

