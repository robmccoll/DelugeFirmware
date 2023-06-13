#include "mtu.h"
#include "compat.h"

struct st_mtu2 MTU2 = {0};

void timerEnableInterruptsTGRA(int timerNo) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	*TIER[timerNo] = 1;
}

void timerDisableInterruptsTGRA(int timerNo) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	*TIER[timerNo] = 0;
}

// prescaler is what to divide P0 (33.33MHz) by.
void timerControlSetup(int timerNo, int clearedByTGRA, int prescaler) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();

	uint8_t TPSC = 0; // Defaults to prescaler of 1

	switch (prescaler) {
	case 4:
		TPSC = 1;
		break;
	case 16:
		TPSC = 2;
		break;
	case 64:
		TPSC = 3;
		break;
	case 256:
		if (timerNo == 1) TPSC = 0b110;
		else if (timerNo >= 3) TPSC = 0b100;
		break;
	case 1024:
		if (timerNo == 2) TPSC = 0b111;
		else if (timerNo >= 3) TPSC = 0b101;
		break;
	}

	uint8_t CCLR = clearedByTGRA ? (1 << 5) : 0;

	*TCR[timerNo] = TPSC | CCLR;
}

void timerClearCompareMatchTGRA(int timerNo) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();

	// Clear the TGFA flag.
	// Up to and including V3.1.1-RC the dummy_read was done before calling timerGoneOff() and then tested afterwards, which is obviously not ideal.
	// At the same time, there was a bizarre crash when sending arpeggiator MIDI to Fraser's Gakken NSX-39. Making this change fixed that crash,
	// but I am unsure if this has actually addressed the cause of the crash, because making almost any other change to this function or even just adding one instruction
	// to the end, like switching an LED on or off, also made the crash vanish.
	// So, watch out for future peculiarities.
	// Another note - it doesn't seem to matter whether this clearing is done before or after calling timerGoneOff(), but in the event of future problems,
	// it would be worth trying both.
	while (true) {
		uint16_t dummy_read = *TSR[timerNo];
		if (!(dummy_read & 0x01)) break;
		*TSR[timerNo] = dummy_read & 0xFE;
	}
}

void mtuEnableAccess() {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
}

void enableTimer(int timerNo) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
}

void disableTimer(int timerNo) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
}

bool_t isTimerEnabled(int timerNo) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
}
