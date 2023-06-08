#include "stdint.h"
#include "sio_char.h"
#include "cpu_specific.h"
#include "definitions.h"

char_t picTxBuffer[PIC_TX_BUFFER_SIZE];
char_t midiTxBuffer[MIDI_TX_BUFFER_SIZE];

char_t picRxBuffer[PIC_RX_BUFFER_SIZE];
char_t midiRxBuffer[MIDI_RX_BUFFER_SIZE];

void uartInit(int uartItem, uint32_t baudRate) {
  /* COMPAT TODO */
  return;
}

void uartSetBaudRate(uint8_t scifID, uint32_t baudRate) {
  /* COMPAT TODO */
  return;
}

