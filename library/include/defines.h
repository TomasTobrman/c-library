#pragma once

#ifdef M_EXPORT
#define M_API __attribute__((visibility("default")))
#else
#define M_API
#endif
