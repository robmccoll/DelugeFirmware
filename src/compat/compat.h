#ifndef  COMPAT_H
#define  COMPAT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

#define LOG_COMPAT_TODO() printf("COMPAT UNIMPLEMENTED %s @ %s:%d\n", __func__, __FILE__, __LINE__)

#ifdef __cplusplus
}
#endif

#endif  /*COMPAT_H*/
