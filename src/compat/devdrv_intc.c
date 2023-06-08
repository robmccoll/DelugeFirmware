#include "stdint.h"
#include "devdrv_intc.h"

int32_t R_INTC_RegistIntFunc(uint16_t int_id, void (* func)(uint32_t int_sense)) {
  /* TODO COMPAT */
  return 0;
}

void    R_INTC_Init(void) {
  /* TODO COMPAT */
}

int32_t R_INTC_Enable(uint16_t int_id) {
  /* TODO COMPAT */
  return 0;
}

int32_t R_INTC_Disable(uint16_t int_id) {
  /* TODO COMPAT */
  return 0;
}

int32_t R_INTC_SetPriority(uint16_t int_id, uint8_t priority) {
  /* TODO COMPAT */
  return 0;
}
