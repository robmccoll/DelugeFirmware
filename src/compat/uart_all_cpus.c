#include "uart_all_cpus.h"
#include "cpu_specific.h""

struct UartItem uartItems[NUM_UART_ITEMS];

uint8_t uartGetChar(int item, char_t* readData) {
  /* COMPAT TODO */
  return 0;
}

uint32_t* uartGetCharWithTiming(int timingCaptureItem, char_t* readData) {
  /* COMPAT TODO */
  return NULL;
}


void uartPutCharBack(int item) {
  /* COMPAT TODO */
  return;
}

void uartPrintln(char const* output) {
  /* COMPAT TODO */
  return;
}

void uartPrint(char const* output) {
  /* COMPAT TODO */
  return;
}

void uartPrintNumber(int number) {
  /* COMPAT TODO */
  return;
}

void uartPrintlnFloat(float number) {
  /* COMPAT TODO */
  return;
}

void uartFlushIfNotSending(int item) {
  /* COMPAT TODO */
  return;
}

int uartGetTxBufferFullnessByItem(int item) {
  /* COMPAT TODO */
  return 0;
}

int uartGetTxBufferSpace(int item) {
  /* COMPAT TODO */
  return 0;
}

void initUartDMA() {
  /* COMPAT TODO */
}
