#include "stdint.h"
#include "compat.h"
#include "sio_char.h"
#include "cpu_specific.h"
#include "definitions.h"

char_t picTxBuffer[PIC_TX_BUFFER_SIZE];
char_t midiTxBuffer[MIDI_TX_BUFFER_SIZE];

char_t picRxBuffer[PIC_RX_BUFFER_SIZE];
char_t midiRxBuffer[MIDI_RX_BUFFER_SIZE];

void uartInit(int uartItem, uint32_t baudRate) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return;
}

void uartSetBaudRate(uint8_t scifID, uint32_t baudRate) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return;
}

void bufferPICUart(char_t charToSend) {
	picTxBuffer[uartItems[UART_ITEM_PIC].txBufferWritePos + UNCACHED_MIRROR_OFFSET] = charToSend;
	uartItems[UART_ITEM_PIC].txBufferWritePos =
	    (uartItems[UART_ITEM_PIC].txBufferWritePos + 1) & (PIC_TX_BUFFER_SIZE - 1);
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return;
}

void bufferMIDIUart(char_t charToSend) {
	midiTxBuffer[uartItems[UART_ITEM_MIDI].txBufferWritePos + UNCACHED_MIRROR_OFFSET] = charToSend;
	uartItems[UART_ITEM_MIDI].txBufferWritePos =
	    (uartItems[UART_ITEM_MIDI].txBufferWritePos + 1) & (MIDI_TX_BUFFER_SIZE - 1);
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return;
}
