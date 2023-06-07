#include "r_usb_hmidi.h"

#define MAX_NUM_USB_MIDI_DEVICES 6

uint16_t g_usb_usbmode;
uint16_t g_usb_peri_connected;
uint16_t g_usb_hmidi_tmp_ep_tbl[USB_NUM_USBIP][MAX_NUM_USB_MIDI_DEVICES][(USB_EPL * 2) + 1] = {0};
uint8_t anythingInitiallyAttachedAsUSBHost = 0;
usb_utr_t* g_p_usb_pipe[USB_MAX_PIPE_NO + 1u];

void openUSBHost(void) {
	/* TODO COMPAT */
}

void closeUSBHost(void) {
	/* TODO COMPAT */
}

void openUSBPeripheral(void) {
	/* TODO COMPAT */
}

void usb_cstd_usb_task(void) {
	/* TODO COMPAT */
}

usb_regadr_t usb_hstd_get_usb_ip_adr(uint16_t ipnum) {
	/* TODO COMPAT */
	return (usb_regadr_t){0};
}

void usb_send_start_rohan(usb_utr_t* ptr, uint16_t pipe, uint8_t const* data, int size) {
	/* TODO COMPAT */
}

void usb_receive_start_rohan_midi(uint16_t pipe) {
	/* TODO COMPAT */
}

void change_destination_of_send_pipe(usb_utr_t* ptr, uint16_t pipe, uint16_t* tbl, int sq) {
	/* TODO COMPAT */
}
