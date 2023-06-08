/*
 * Copyright © 2020-2023 Synthstrom Audible Limited
 *
 * This file is part of The Synthstrom Audible Deluge Firmware.
 *
 * The Synthstrom Audible Deluge Firmware is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program.
 * If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef DRIVERS_RZA1_MTU_MTU_H_
#define DRIVERS_RZA1_MTU_MTU_H_

#include "iodefine.h"
#include "mtu2_iobitmask.h"
#include "r_typedefs.h"
#include "devdrv_intc.h"

static const uint8_t timerCST[] = {MTU2_TSTR_CST0, MTU2_TSTR_CST1, MTU2_TSTR_CST2, MTU2_TSTR_CST3, MTU2_TSTR_CST4};

void enableTimer(int timerNo);

void disableTimer(int timerNo);

bool_t isTimerEnabled(int timerNo);

static volatile uint8_t* const TIER[] = {&MTU2.TIER_0, &MTU2.TIER_1, &MTU2.TIER_2, &MTU2.TIER_3, &MTU2.TIER_4};

static volatile uint8_t* const TSR[] = {&MTU2.TSR_0, &MTU2.TSR_1, &MTU2.TSR_2, &MTU2.TSR_3, &MTU2.TSR_4};

void timerClearCompareMatchTGRA(int timerNo);

static volatile uint8_t* const TCR[] = {&MTU2.TCR_0, &MTU2.TCR_1, &MTU2.TCR_2, &MTU2.TCR_3, &MTU2.TCR_4};

// prescaler is what to divide P0 (33.33MHz) by.
void timerControlSetup(int timerNo, int clearedByTGRA, int prescaler);

static volatile uint16_t* const TCNT[] = {&MTU2.TCNT_0, &MTU2.TCNT_1, &MTU2.TCNT_2, &MTU2.TCNT_3, &MTU2.TCNT_4};

static volatile uint16_t* const TGRA[] = {&MTU2.TGRA_0, &MTU2.TGRA_1, &MTU2.TGRA_2, &MTU2.TGRA_3, &MTU2.TGRA_4};

static uint16_t const INTC_ID_TGIA[] = {INTC_ID_TGI0A, INTC_ID_TGI1A, INTC_ID_TGI2A, INTC_ID_TGI3A, INTC_ID_TGI4A};

#endif /* DRIVERS_RZA1_MTU_MTU_H_ */
