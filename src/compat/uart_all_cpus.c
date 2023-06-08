#include "uart_all_cpus.h"
#include "compat.h"
#include "cpu_specific.h""

struct UartItem uartItems[NUM_UART_ITEMS];

uint8_t uartGetChar(int item, char_t* readData) {
  /* TODO COMPAT */
  LOG_COMPAT_TODO();
  return 0;
}

uint32_t* uartGetCharWithTiming(int timingCaptureItem, char_t* readData) {
  /* TODO COMPAT */
  LOG_COMPAT_TODO();
  return NULL;
}


void uartPutCharBack(int item) {
  /* TODO COMPAT */
  LOG_COMPAT_TODO();
  return;
}

void uartPrintln(char const* output) {
  /* TODO COMPAT */
  LOG_COMPAT_TODO();
  return;
}

void uartPrint(char const* output) {
  /* TODO COMPAT */
  LOG_COMPAT_TODO();
  return;
}

void uartPrintNumber(int number) {
  /* TODO COMPAT */
  LOG_COMPAT_TODO();
  return;
}

void uartPrintlnFloat(float number) {
  /* TODO COMPAT */
  LOG_COMPAT_TODO();
  return;
}

void uartFlushIfNotSending(int item) {
  /* TODO COMPAT */
  LOG_COMPAT_TODO();
  return;
}

int uartGetTxBufferFullnessByItem(int item) {
  /* TODO COMPAT */
  LOG_COMPAT_TODO();
  return 0;
}

int uartGetTxBufferSpace(int item) {
  /* TODO COMPAT */
  LOG_COMPAT_TODO();
  return 0;
}

void initUartDMA() {
  /* TODO COMPAT */
  LOG_COMPAT_TODO();
}
