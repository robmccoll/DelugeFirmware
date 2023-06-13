#ifndef COMPAT_H
#define COMPAT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

#define LOG_COMPAT_TODO() printf("COMPAT UNIMPLEMENTED %s @ %s:%d\n", __func__, __FILE__, __LINE__)

#define LOG_COMPAT_TODO_FMT(FMT, ...)                                                                                  \
	printf("COMPAT UNIMPLEMENTED %s @ %s:%d " FMT "\n", __func__, __FILE__, __LINE__, __VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif /*COMPAT_H*/
