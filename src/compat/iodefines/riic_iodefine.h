/*******************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only
* intended for use with Renesas products. No other uses are authorized. This
* software is owned by Renesas Electronics Corporation and is protected under
* all applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT
* LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
* AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.
* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS
* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR
* ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE
* BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software
* and to discontinue the availability of this software. By using this software,
* you agree to the additional terms and conditions found by accessing the
* following link:
* http://www.renesas.com/disclaimer*
* Copyright (C) 2013-2014 Renesas Electronics Corporation. All rights reserved.
*******************************************************************************/
/*******************************************************************************
* File Name : riic_iodefine.h
* $Rev: 2444 $
* $Date:: 2014-10-14 21:15:39 +0100#$
* Description : Definition of I/O Register (V1.00a)
******************************************************************************/
#ifndef RIIC_IODEFINE_H
#define RIIC_IODEFINE_H

struct st_riic { /* RIIC             */
#define RIICnCRm_COUNT 2
	union iodefine_reg32_t RIICnCR1; /*  RIICnCR1        */
	union iodefine_reg32_t RIICnCR2; /*  RIICnCR2        */
#define RIICnMRm_COUNT 3
	union iodefine_reg32_t RIICnMR1; /*  RIICnMR1        */
	union iodefine_reg32_t RIICnMR2; /*  RIICnMR2        */
	union iodefine_reg32_t RIICnMR3; /*  RIICnMR3        */
	union iodefine_reg32_t RIICnFER; /*  RIICnFER        */
	union iodefine_reg32_t RIICnSER; /*  RIICnSER        */
	union iodefine_reg32_t RIICnIER; /*  RIICnIER        */
#define RIICnSRm_COUNT 2
	union iodefine_reg32_t RIICnSR1; /*  RIICnSR1        */
	union iodefine_reg32_t RIICnSR2; /*  RIICnSR2        */
#define RIICnSARm_COUNT 3
	union iodefine_reg32_t RIICnSAR0; /*  RIICnSAR0       */
	union iodefine_reg32_t RIICnSAR1; /*  RIICnSAR1       */
	union iodefine_reg32_t RIICnSAR2; /*  RIICnSAR2       */
	union iodefine_reg32_t RIICnBRL;  /*  RIICnBRL        */
	union iodefine_reg32_t RIICnBRH;  /*  RIICnBRH        */
	union iodefine_reg32_t RIICnDRT;  /*  RIICnDRT        */
	union iodefine_reg32_t RIICnDRR;  /*  RIICnDRR        */
};

#define RIIC0 (*(struct st_riic*)0xFCFEE000uL) /* RIIC0 */
#define RIIC1 (*(struct st_riic*)0xFCFEE400uL) /* RIIC1 */
#define RIIC2 (*(struct st_riic*)0xFCFEE800uL) /* RIIC2 */
#define RIIC3 (*(struct st_riic*)0xFCFEEC00uL) /* RIIC3 */

/* Start of channnel array defines of RIIC */

/* Channnel array defines of RIIC */
/*(Sample) value = RIIC[ channel ]->RIICnCR1.UINT32; */
#define RIIC_COUNT 4
#define RIIC_ADDRESS_LIST                                                                                              \
	{ /* ->MISRA 11.3 */ /* ->SEC R2.7.1 */                                                                            \
		&RIIC0, &RIIC1, &RIIC2, &RIIC3                                                                                 \
	} /* <-MISRA 11.3 */ /* <-SEC R2.7.1 */ /* { } is for MISRA 19.4 */

/* End of channnel array defines of RIIC */

#define RIIC0CR1 RIIC0.RIICnCR1.UINT32
#define RIIC0CR1L RIIC0.RIICnCR1.UINT16[L]
#define RIIC0CR1LL RIIC0.RIICnCR1.UINT8[LL]
#define RIIC0CR1LH RIIC0.RIICnCR1.UINT8[LH]
#define RIIC0CR1H RIIC0.RIICnCR1.UINT16[H]
#define RIIC0CR1HL RIIC0.RIICnCR1.UINT8[HL]
#define RIIC0CR1HH RIIC0.RIICnCR1.UINT8[HH]
#define RIIC0CR2 RIIC0.RIICnCR2.UINT32
#define RIIC0CR2L RIIC0.RIICnCR2.UINT16[L]
#define RIIC0CR2LL RIIC0.RIICnCR2.UINT8[LL]
#define RIIC0CR2LH RIIC0.RIICnCR2.UINT8[LH]
#define RIIC0CR2H RIIC0.RIICnCR2.UINT16[H]
#define RIIC0CR2HL RIIC0.RIICnCR2.UINT8[HL]
#define RIIC0CR2HH RIIC0.RIICnCR2.UINT8[HH]
#define RIIC0MR1 RIIC0.RIICnMR1.UINT32
#define RIIC0MR1L RIIC0.RIICnMR1.UINT16[L]
#define RIIC0MR1LL RIIC0.RIICnMR1.UINT8[LL]
#define RIIC0MR1LH RIIC0.RIICnMR1.UINT8[LH]
#define RIIC0MR1H RIIC0.RIICnMR1.UINT16[H]
#define RIIC0MR1HL RIIC0.RIICnMR1.UINT8[HL]
#define RIIC0MR1HH RIIC0.RIICnMR1.UINT8[HH]
#define RIIC0MR2 RIIC0.RIICnMR2.UINT32
#define RIIC0MR2L RIIC0.RIICnMR2.UINT16[L]
#define RIIC0MR2LL RIIC0.RIICnMR2.UINT8[LL]
#define RIIC0MR2LH RIIC0.RIICnMR2.UINT8[LH]
#define RIIC0MR2H RIIC0.RIICnMR2.UINT16[H]
#define RIIC0MR2HL RIIC0.RIICnMR2.UINT8[HL]
#define RIIC0MR2HH RIIC0.RIICnMR2.UINT8[HH]
#define RIIC0MR3 RIIC0.RIICnMR3.UINT32
#define RIIC0MR3L RIIC0.RIICnMR3.UINT16[L]
#define RIIC0MR3LL RIIC0.RIICnMR3.UINT8[LL]
#define RIIC0MR3LH RIIC0.RIICnMR3.UINT8[LH]
#define RIIC0MR3H RIIC0.RIICnMR3.UINT16[H]
#define RIIC0MR3HL RIIC0.RIICnMR3.UINT8[HL]
#define RIIC0MR3HH RIIC0.RIICnMR3.UINT8[HH]
#define RIIC0FER RIIC0.RIICnFER.UINT32
#define RIIC0FERL RIIC0.RIICnFER.UINT16[L]
#define RIIC0FERLL RIIC0.RIICnFER.UINT8[LL]
#define RIIC0FERLH RIIC0.RIICnFER.UINT8[LH]
#define RIIC0FERH RIIC0.RIICnFER.UINT16[H]
#define RIIC0FERHL RIIC0.RIICnFER.UINT8[HL]
#define RIIC0FERHH RIIC0.RIICnFER.UINT8[HH]
#define RIIC0SER RIIC0.RIICnSER.UINT32
#define RIIC0SERL RIIC0.RIICnSER.UINT16[L]
#define RIIC0SERLL RIIC0.RIICnSER.UINT8[LL]
#define RIIC0SERLH RIIC0.RIICnSER.UINT8[LH]
#define RIIC0SERH RIIC0.RIICnSER.UINT16[H]
#define RIIC0SERHL RIIC0.RIICnSER.UINT8[HL]
#define RIIC0SERHH RIIC0.RIICnSER.UINT8[HH]
#define RIIC0IER RIIC0.RIICnIER.UINT32
#define RIIC0IERL RIIC0.RIICnIER.UINT16[L]
#define RIIC0IERLL RIIC0.RIICnIER.UINT8[LL]
#define RIIC0IERLH RIIC0.RIICnIER.UINT8[LH]
#define RIIC0IERH RIIC0.RIICnIER.UINT16[H]
#define RIIC0IERHL RIIC0.RIICnIER.UINT8[HL]
#define RIIC0IERHH RIIC0.RIICnIER.UINT8[HH]
#define RIIC0SR1 RIIC0.RIICnSR1.UINT32
#define RIIC0SR1L RIIC0.RIICnSR1.UINT16[L]
#define RIIC0SR1LL RIIC0.RIICnSR1.UINT8[LL]
#define RIIC0SR1LH RIIC0.RIICnSR1.UINT8[LH]
#define RIIC0SR1H RIIC0.RIICnSR1.UINT16[H]
#define RIIC0SR1HL RIIC0.RIICnSR1.UINT8[HL]
#define RIIC0SR1HH RIIC0.RIICnSR1.UINT8[HH]
#define RIIC0SR2 RIIC0.RIICnSR2.UINT32
#define RIIC0SR2L RIIC0.RIICnSR2.UINT16[L]
#define RIIC0SR2LL RIIC0.RIICnSR2.UINT8[LL]
#define RIIC0SR2LH RIIC0.RIICnSR2.UINT8[LH]
#define RIIC0SR2H RIIC0.RIICnSR2.UINT16[H]
#define RIIC0SR2HL RIIC0.RIICnSR2.UINT8[HL]
#define RIIC0SR2HH RIIC0.RIICnSR2.UINT8[HH]
#define RIIC0SAR0 RIIC0.RIICnSAR0.UINT32
#define RIIC0SAR0L RIIC0.RIICnSAR0.UINT16[L]
#define RIIC0SAR0LL RIIC0.RIICnSAR0.UINT8[LL]
#define RIIC0SAR0LH RIIC0.RIICnSAR0.UINT8[LH]
#define RIIC0SAR0H RIIC0.RIICnSAR0.UINT16[H]
#define RIIC0SAR0HL RIIC0.RIICnSAR0.UINT8[HL]
#define RIIC0SAR0HH RIIC0.RIICnSAR0.UINT8[HH]
#define RIIC0SAR1 RIIC0.RIICnSAR1.UINT32
#define RIIC0SAR1L RIIC0.RIICnSAR1.UINT16[L]
#define RIIC0SAR1LL RIIC0.RIICnSAR1.UINT8[LL]
#define RIIC0SAR1LH RIIC0.RIICnSAR1.UINT8[LH]
#define RIIC0SAR1H RIIC0.RIICnSAR1.UINT16[H]
#define RIIC0SAR1HL RIIC0.RIICnSAR1.UINT8[HL]
#define RIIC0SAR1HH RIIC0.RIICnSAR1.UINT8[HH]
#define RIIC0SAR2 RIIC0.RIICnSAR2.UINT32
#define RIIC0SAR2L RIIC0.RIICnSAR2.UINT16[L]
#define RIIC0SAR2LL RIIC0.RIICnSAR2.UINT8[LL]
#define RIIC0SAR2LH RIIC0.RIICnSAR2.UINT8[LH]
#define RIIC0SAR2H RIIC0.RIICnSAR2.UINT16[H]
#define RIIC0SAR2HL RIIC0.RIICnSAR2.UINT8[HL]
#define RIIC0SAR2HH RIIC0.RIICnSAR2.UINT8[HH]
#define RIIC0BRL RIIC0.RIICnBRL.UINT32
#define RIIC0BRLL RIIC0.RIICnBRL.UINT16[L]
#define RIIC0BRLLL RIIC0.RIICnBRL.UINT8[LL]
#define RIIC0BRLLH RIIC0.RIICnBRL.UINT8[LH]
#define RIIC0BRLH RIIC0.RIICnBRL.UINT16[H]
#define RIIC0BRLHL RIIC0.RIICnBRL.UINT8[HL]
#define RIIC0BRLHH RIIC0.RIICnBRL.UINT8[HH]
#define RIIC0BRH RIIC0.RIICnBRH.UINT32
#define RIIC0BRHL RIIC0.RIICnBRH.UINT16[L]
#define RIIC0BRHLL RIIC0.RIICnBRH.UINT8[LL]
#define RIIC0BRHLH RIIC0.RIICnBRH.UINT8[LH]
#define RIIC0BRHH RIIC0.RIICnBRH.UINT16[H]
#define RIIC0BRHHL RIIC0.RIICnBRH.UINT8[HL]
#define RIIC0BRHHH RIIC0.RIICnBRH.UINT8[HH]
#define RIIC0DRT RIIC0.RIICnDRT.UINT32
#define RIIC0DRTL RIIC0.RIICnDRT.UINT16[L]
#define RIIC0DRTLL RIIC0.RIICnDRT.UINT8[LL]
#define RIIC0DRTLH RIIC0.RIICnDRT.UINT8[LH]
#define RIIC0DRTH RIIC0.RIICnDRT.UINT16[H]
#define RIIC0DRTHL RIIC0.RIICnDRT.UINT8[HL]
#define RIIC0DRTHH RIIC0.RIICnDRT.UINT8[HH]
#define RIIC0DRR RIIC0.RIICnDRR.UINT32
#define RIIC0DRRL RIIC0.RIICnDRR.UINT16[L]
#define RIIC0DRRLL RIIC0.RIICnDRR.UINT8[LL]
#define RIIC0DRRLH RIIC0.RIICnDRR.UINT8[LH]
#define RIIC0DRRH RIIC0.RIICnDRR.UINT16[H]
#define RIIC0DRRHL RIIC0.RIICnDRR.UINT8[HL]
#define RIIC0DRRHH RIIC0.RIICnDRR.UINT8[HH]
#define RIIC1CR1 RIIC1.RIICnCR1.UINT32
#define RIIC1CR1L RIIC1.RIICnCR1.UINT16[L]
#define RIIC1CR1LL RIIC1.RIICnCR1.UINT8[LL]
#define RIIC1CR1LH RIIC1.RIICnCR1.UINT8[LH]
#define RIIC1CR1H RIIC1.RIICnCR1.UINT16[H]
#define RIIC1CR1HL RIIC1.RIICnCR1.UINT8[HL]
#define RIIC1CR1HH RIIC1.RIICnCR1.UINT8[HH]
#define RIIC1CR2 RIIC1.RIICnCR2.UINT32
#define RIIC1CR2L RIIC1.RIICnCR2.UINT16[L]
#define RIIC1CR2LL RIIC1.RIICnCR2.UINT8[LL]
#define RIIC1CR2LH RIIC1.RIICnCR2.UINT8[LH]
#define RIIC1CR2H RIIC1.RIICnCR2.UINT16[H]
#define RIIC1CR2HL RIIC1.RIICnCR2.UINT8[HL]
#define RIIC1CR2HH RIIC1.RIICnCR2.UINT8[HH]
#define RIIC1MR1 RIIC1.RIICnMR1.UINT32
#define RIIC1MR1L RIIC1.RIICnMR1.UINT16[L]
#define RIIC1MR1LL RIIC1.RIICnMR1.UINT8[LL]
#define RIIC1MR1LH RIIC1.RIICnMR1.UINT8[LH]
#define RIIC1MR1H RIIC1.RIICnMR1.UINT16[H]
#define RIIC1MR1HL RIIC1.RIICnMR1.UINT8[HL]
#define RIIC1MR1HH RIIC1.RIICnMR1.UINT8[HH]
#define RIIC1MR2 RIIC1.RIICnMR2.UINT32
#define RIIC1MR2L RIIC1.RIICnMR2.UINT16[L]
#define RIIC1MR2LL RIIC1.RIICnMR2.UINT8[LL]
#define RIIC1MR2LH RIIC1.RIICnMR2.UINT8[LH]
#define RIIC1MR2H RIIC1.RIICnMR2.UINT16[H]
#define RIIC1MR2HL RIIC1.RIICnMR2.UINT8[HL]
#define RIIC1MR2HH RIIC1.RIICnMR2.UINT8[HH]
#define RIIC1MR3 RIIC1.RIICnMR3.UINT32
#define RIIC1MR3L RIIC1.RIICnMR3.UINT16[L]
#define RIIC1MR3LL RIIC1.RIICnMR3.UINT8[LL]
#define RIIC1MR3LH RIIC1.RIICnMR3.UINT8[LH]
#define RIIC1MR3H RIIC1.RIICnMR3.UINT16[H]
#define RIIC1MR3HL RIIC1.RIICnMR3.UINT8[HL]
#define RIIC1MR3HH RIIC1.RIICnMR3.UINT8[HH]
#define RIIC1FER RIIC1.RIICnFER.UINT32
#define RIIC1FERL RIIC1.RIICnFER.UINT16[L]
#define RIIC1FERLL RIIC1.RIICnFER.UINT8[LL]
#define RIIC1FERLH RIIC1.RIICnFER.UINT8[LH]
#define RIIC1FERH RIIC1.RIICnFER.UINT16[H]
#define RIIC1FERHL RIIC1.RIICnFER.UINT8[HL]
#define RIIC1FERHH RIIC1.RIICnFER.UINT8[HH]
#define RIIC1SER RIIC1.RIICnSER.UINT32
#define RIIC1SERL RIIC1.RIICnSER.UINT16[L]
#define RIIC1SERLL RIIC1.RIICnSER.UINT8[LL]
#define RIIC1SERLH RIIC1.RIICnSER.UINT8[LH]
#define RIIC1SERH RIIC1.RIICnSER.UINT16[H]
#define RIIC1SERHL RIIC1.RIICnSER.UINT8[HL]
#define RIIC1SERHH RIIC1.RIICnSER.UINT8[HH]
#define RIIC1IER RIIC1.RIICnIER.UINT32
#define RIIC1IERL RIIC1.RIICnIER.UINT16[L]
#define RIIC1IERLL RIIC1.RIICnIER.UINT8[LL]
#define RIIC1IERLH RIIC1.RIICnIER.UINT8[LH]
#define RIIC1IERH RIIC1.RIICnIER.UINT16[H]
#define RIIC1IERHL RIIC1.RIICnIER.UINT8[HL]
#define RIIC1IERHH RIIC1.RIICnIER.UINT8[HH]
#define RIIC1SR1 RIIC1.RIICnSR1.UINT32
#define RIIC1SR1L RIIC1.RIICnSR1.UINT16[L]
#define RIIC1SR1LL RIIC1.RIICnSR1.UINT8[LL]
#define RIIC1SR1LH RIIC1.RIICnSR1.UINT8[LH]
#define RIIC1SR1H RIIC1.RIICnSR1.UINT16[H]
#define RIIC1SR1HL RIIC1.RIICnSR1.UINT8[HL]
#define RIIC1SR1HH RIIC1.RIICnSR1.UINT8[HH]
#define RIIC1SR2 RIIC1.RIICnSR2.UINT32
#define RIIC1SR2L RIIC1.RIICnSR2.UINT16[L]
#define RIIC1SR2LL RIIC1.RIICnSR2.UINT8[LL]
#define RIIC1SR2LH RIIC1.RIICnSR2.UINT8[LH]
#define RIIC1SR2H RIIC1.RIICnSR2.UINT16[H]
#define RIIC1SR2HL RIIC1.RIICnSR2.UINT8[HL]
#define RIIC1SR2HH RIIC1.RIICnSR2.UINT8[HH]
#define RIIC1SAR0 RIIC1.RIICnSAR0.UINT32
#define RIIC1SAR0L RIIC1.RIICnSAR0.UINT16[L]
#define RIIC1SAR0LL RIIC1.RIICnSAR0.UINT8[LL]
#define RIIC1SAR0LH RIIC1.RIICnSAR0.UINT8[LH]
#define RIIC1SAR0H RIIC1.RIICnSAR0.UINT16[H]
#define RIIC1SAR0HL RIIC1.RIICnSAR0.UINT8[HL]
#define RIIC1SAR0HH RIIC1.RIICnSAR0.UINT8[HH]
#define RIIC1SAR1 RIIC1.RIICnSAR1.UINT32
#define RIIC1SAR1L RIIC1.RIICnSAR1.UINT16[L]
#define RIIC1SAR1LL RIIC1.RIICnSAR1.UINT8[LL]
#define RIIC1SAR1LH RIIC1.RIICnSAR1.UINT8[LH]
#define RIIC1SAR1H RIIC1.RIICnSAR1.UINT16[H]
#define RIIC1SAR1HL RIIC1.RIICnSAR1.UINT8[HL]
#define RIIC1SAR1HH RIIC1.RIICnSAR1.UINT8[HH]
#define RIIC1SAR2 RIIC1.RIICnSAR2.UINT32
#define RIIC1SAR2L RIIC1.RIICnSAR2.UINT16[L]
#define RIIC1SAR2LL RIIC1.RIICnSAR2.UINT8[LL]
#define RIIC1SAR2LH RIIC1.RIICnSAR2.UINT8[LH]
#define RIIC1SAR2H RIIC1.RIICnSAR2.UINT16[H]
#define RIIC1SAR2HL RIIC1.RIICnSAR2.UINT8[HL]
#define RIIC1SAR2HH RIIC1.RIICnSAR2.UINT8[HH]
#define RIIC1BRL RIIC1.RIICnBRL.UINT32
#define RIIC1BRLL RIIC1.RIICnBRL.UINT16[L]
#define RIIC1BRLLL RIIC1.RIICnBRL.UINT8[LL]
#define RIIC1BRLLH RIIC1.RIICnBRL.UINT8[LH]
#define RIIC1BRLH RIIC1.RIICnBRL.UINT16[H]
#define RIIC1BRLHL RIIC1.RIICnBRL.UINT8[HL]
#define RIIC1BRLHH RIIC1.RIICnBRL.UINT8[HH]
#define RIIC1BRH RIIC1.RIICnBRH.UINT32
#define RIIC1BRHL RIIC1.RIICnBRH.UINT16[L]
#define RIIC1BRHLL RIIC1.RIICnBRH.UINT8[LL]
#define RIIC1BRHLH RIIC1.RIICnBRH.UINT8[LH]
#define RIIC1BRHH RIIC1.RIICnBRH.UINT16[H]
#define RIIC1BRHHL RIIC1.RIICnBRH.UINT8[HL]
#define RIIC1BRHHH RIIC1.RIICnBRH.UINT8[HH]
#define RIIC1DRT RIIC1.RIICnDRT.UINT32
#define RIIC1DRTL RIIC1.RIICnDRT.UINT16[L]
#define RIIC1DRTLL RIIC1.RIICnDRT.UINT8[LL]
#define RIIC1DRTLH RIIC1.RIICnDRT.UINT8[LH]
#define RIIC1DRTH RIIC1.RIICnDRT.UINT16[H]
#define RIIC1DRTHL RIIC1.RIICnDRT.UINT8[HL]
#define RIIC1DRTHH RIIC1.RIICnDRT.UINT8[HH]
#define RIIC1DRR RIIC1.RIICnDRR.UINT32
#define RIIC1DRRL RIIC1.RIICnDRR.UINT16[L]
#define RIIC1DRRLL RIIC1.RIICnDRR.UINT8[LL]
#define RIIC1DRRLH RIIC1.RIICnDRR.UINT8[LH]
#define RIIC1DRRH RIIC1.RIICnDRR.UINT16[H]
#define RIIC1DRRHL RIIC1.RIICnDRR.UINT8[HL]
#define RIIC1DRRHH RIIC1.RIICnDRR.UINT8[HH]
#define RIIC2CR1 RIIC2.RIICnCR1.UINT32
#define RIIC2CR1L RIIC2.RIICnCR1.UINT16[L]
#define RIIC2CR1LL RIIC2.RIICnCR1.UINT8[LL]
#define RIIC2CR1LH RIIC2.RIICnCR1.UINT8[LH]
#define RIIC2CR1H RIIC2.RIICnCR1.UINT16[H]
#define RIIC2CR1HL RIIC2.RIICnCR1.UINT8[HL]
#define RIIC2CR1HH RIIC2.RIICnCR1.UINT8[HH]
#define RIIC2CR2 RIIC2.RIICnCR2.UINT32
#define RIIC2CR2L RIIC2.RIICnCR2.UINT16[L]
#define RIIC2CR2LL RIIC2.RIICnCR2.UINT8[LL]
#define RIIC2CR2LH RIIC2.RIICnCR2.UINT8[LH]
#define RIIC2CR2H RIIC2.RIICnCR2.UINT16[H]
#define RIIC2CR2HL RIIC2.RIICnCR2.UINT8[HL]
#define RIIC2CR2HH RIIC2.RIICnCR2.UINT8[HH]
#define RIIC2MR1 RIIC2.RIICnMR1.UINT32
#define RIIC2MR1L RIIC2.RIICnMR1.UINT16[L]
#define RIIC2MR1LL RIIC2.RIICnMR1.UINT8[LL]
#define RIIC2MR1LH RIIC2.RIICnMR1.UINT8[LH]
#define RIIC2MR1H RIIC2.RIICnMR1.UINT16[H]
#define RIIC2MR1HL RIIC2.RIICnMR1.UINT8[HL]
#define RIIC2MR1HH RIIC2.RIICnMR1.UINT8[HH]
#define RIIC2MR2 RIIC2.RIICnMR2.UINT32
#define RIIC2MR2L RIIC2.RIICnMR2.UINT16[L]
#define RIIC2MR2LL RIIC2.RIICnMR2.UINT8[LL]
#define RIIC2MR2LH RIIC2.RIICnMR2.UINT8[LH]
#define RIIC2MR2H RIIC2.RIICnMR2.UINT16[H]
#define RIIC2MR2HL RIIC2.RIICnMR2.UINT8[HL]
#define RIIC2MR2HH RIIC2.RIICnMR2.UINT8[HH]
#define RIIC2MR3 RIIC2.RIICnMR3.UINT32
#define RIIC2MR3L RIIC2.RIICnMR3.UINT16[L]
#define RIIC2MR3LL RIIC2.RIICnMR3.UINT8[LL]
#define RIIC2MR3LH RIIC2.RIICnMR3.UINT8[LH]
#define RIIC2MR3H RIIC2.RIICnMR3.UINT16[H]
#define RIIC2MR3HL RIIC2.RIICnMR3.UINT8[HL]
#define RIIC2MR3HH RIIC2.RIICnMR3.UINT8[HH]
#define RIIC2FER RIIC2.RIICnFER.UINT32
#define RIIC2FERL RIIC2.RIICnFER.UINT16[L]
#define RIIC2FERLL RIIC2.RIICnFER.UINT8[LL]
#define RIIC2FERLH RIIC2.RIICnFER.UINT8[LH]
#define RIIC2FERH RIIC2.RIICnFER.UINT16[H]
#define RIIC2FERHL RIIC2.RIICnFER.UINT8[HL]
#define RIIC2FERHH RIIC2.RIICnFER.UINT8[HH]
#define RIIC2SER RIIC2.RIICnSER.UINT32
#define RIIC2SERL RIIC2.RIICnSER.UINT16[L]
#define RIIC2SERLL RIIC2.RIICnSER.UINT8[LL]
#define RIIC2SERLH RIIC2.RIICnSER.UINT8[LH]
#define RIIC2SERH RIIC2.RIICnSER.UINT16[H]
#define RIIC2SERHL RIIC2.RIICnSER.UINT8[HL]
#define RIIC2SERHH RIIC2.RIICnSER.UINT8[HH]
#define RIIC2IER RIIC2.RIICnIER.UINT32
#define RIIC2IERL RIIC2.RIICnIER.UINT16[L]
#define RIIC2IERLL RIIC2.RIICnIER.UINT8[LL]
#define RIIC2IERLH RIIC2.RIICnIER.UINT8[LH]
#define RIIC2IERH RIIC2.RIICnIER.UINT16[H]
#define RIIC2IERHL RIIC2.RIICnIER.UINT8[HL]
#define RIIC2IERHH RIIC2.RIICnIER.UINT8[HH]
#define RIIC2SR1 RIIC2.RIICnSR1.UINT32
#define RIIC2SR1L RIIC2.RIICnSR1.UINT16[L]
#define RIIC2SR1LL RIIC2.RIICnSR1.UINT8[LL]
#define RIIC2SR1LH RIIC2.RIICnSR1.UINT8[LH]
#define RIIC2SR1H RIIC2.RIICnSR1.UINT16[H]
#define RIIC2SR1HL RIIC2.RIICnSR1.UINT8[HL]
#define RIIC2SR1HH RIIC2.RIICnSR1.UINT8[HH]
#define RIIC2SR2 RIIC2.RIICnSR2.UINT32
#define RIIC2SR2L RIIC2.RIICnSR2.UINT16[L]
#define RIIC2SR2LL RIIC2.RIICnSR2.UINT8[LL]
#define RIIC2SR2LH RIIC2.RIICnSR2.UINT8[LH]
#define RIIC2SR2H RIIC2.RIICnSR2.UINT16[H]
#define RIIC2SR2HL RIIC2.RIICnSR2.UINT8[HL]
#define RIIC2SR2HH RIIC2.RIICnSR2.UINT8[HH]
#define RIIC2SAR0 RIIC2.RIICnSAR0.UINT32
#define RIIC2SAR0L RIIC2.RIICnSAR0.UINT16[L]
#define RIIC2SAR0LL RIIC2.RIICnSAR0.UINT8[LL]
#define RIIC2SAR0LH RIIC2.RIICnSAR0.UINT8[LH]
#define RIIC2SAR0H RIIC2.RIICnSAR0.UINT16[H]
#define RIIC2SAR0HL RIIC2.RIICnSAR0.UINT8[HL]
#define RIIC2SAR0HH RIIC2.RIICnSAR0.UINT8[HH]
#define RIIC2SAR1 RIIC2.RIICnSAR1.UINT32
#define RIIC2SAR1L RIIC2.RIICnSAR1.UINT16[L]
#define RIIC2SAR1LL RIIC2.RIICnSAR1.UINT8[LL]
#define RIIC2SAR1LH RIIC2.RIICnSAR1.UINT8[LH]
#define RIIC2SAR1H RIIC2.RIICnSAR1.UINT16[H]
#define RIIC2SAR1HL RIIC2.RIICnSAR1.UINT8[HL]
#define RIIC2SAR1HH RIIC2.RIICnSAR1.UINT8[HH]
#define RIIC2SAR2 RIIC2.RIICnSAR2.UINT32
#define RIIC2SAR2L RIIC2.RIICnSAR2.UINT16[L]
#define RIIC2SAR2LL RIIC2.RIICnSAR2.UINT8[LL]
#define RIIC2SAR2LH RIIC2.RIICnSAR2.UINT8[LH]
#define RIIC2SAR2H RIIC2.RIICnSAR2.UINT16[H]
#define RIIC2SAR2HL RIIC2.RIICnSAR2.UINT8[HL]
#define RIIC2SAR2HH RIIC2.RIICnSAR2.UINT8[HH]
#define RIIC2BRL RIIC2.RIICnBRL.UINT32
#define RIIC2BRLL RIIC2.RIICnBRL.UINT16[L]
#define RIIC2BRLLL RIIC2.RIICnBRL.UINT8[LL]
#define RIIC2BRLLH RIIC2.RIICnBRL.UINT8[LH]
#define RIIC2BRLH RIIC2.RIICnBRL.UINT16[H]
#define RIIC2BRLHL RIIC2.RIICnBRL.UINT8[HL]
#define RIIC2BRLHH RIIC2.RIICnBRL.UINT8[HH]
#define RIIC2BRH RIIC2.RIICnBRH.UINT32
#define RIIC2BRHL RIIC2.RIICnBRH.UINT16[L]
#define RIIC2BRHLL RIIC2.RIICnBRH.UINT8[LL]
#define RIIC2BRHLH RIIC2.RIICnBRH.UINT8[LH]
#define RIIC2BRHH RIIC2.RIICnBRH.UINT16[H]
#define RIIC2BRHHL RIIC2.RIICnBRH.UINT8[HL]
#define RIIC2BRHHH RIIC2.RIICnBRH.UINT8[HH]
#define RIIC2DRT RIIC2.RIICnDRT.UINT32
#define RIIC2DRTL RIIC2.RIICnDRT.UINT16[L]
#define RIIC2DRTLL RIIC2.RIICnDRT.UINT8[LL]
#define RIIC2DRTLH RIIC2.RIICnDRT.UINT8[LH]
#define RIIC2DRTH RIIC2.RIICnDRT.UINT16[H]
#define RIIC2DRTHL RIIC2.RIICnDRT.UINT8[HL]
#define RIIC2DRTHH RIIC2.RIICnDRT.UINT8[HH]
#define RIIC2DRR RIIC2.RIICnDRR.UINT32
#define RIIC2DRRL RIIC2.RIICnDRR.UINT16[L]
#define RIIC2DRRLL RIIC2.RIICnDRR.UINT8[LL]
#define RIIC2DRRLH RIIC2.RIICnDRR.UINT8[LH]
#define RIIC2DRRH RIIC2.RIICnDRR.UINT16[H]
#define RIIC2DRRHL RIIC2.RIICnDRR.UINT8[HL]
#define RIIC2DRRHH RIIC2.RIICnDRR.UINT8[HH]
#define RIIC3CR1 RIIC3.RIICnCR1.UINT32
#define RIIC3CR1L RIIC3.RIICnCR1.UINT16[L]
#define RIIC3CR1LL RIIC3.RIICnCR1.UINT8[LL]
#define RIIC3CR1LH RIIC3.RIICnCR1.UINT8[LH]
#define RIIC3CR1H RIIC3.RIICnCR1.UINT16[H]
#define RIIC3CR1HL RIIC3.RIICnCR1.UINT8[HL]
#define RIIC3CR1HH RIIC3.RIICnCR1.UINT8[HH]
#define RIIC3CR2 RIIC3.RIICnCR2.UINT32
#define RIIC3CR2L RIIC3.RIICnCR2.UINT16[L]
#define RIIC3CR2LL RIIC3.RIICnCR2.UINT8[LL]
#define RIIC3CR2LH RIIC3.RIICnCR2.UINT8[LH]
#define RIIC3CR2H RIIC3.RIICnCR2.UINT16[H]
#define RIIC3CR2HL RIIC3.RIICnCR2.UINT8[HL]
#define RIIC3CR2HH RIIC3.RIICnCR2.UINT8[HH]
#define RIIC3MR1 RIIC3.RIICnMR1.UINT32
#define RIIC3MR1L RIIC3.RIICnMR1.UINT16[L]
#define RIIC3MR1LL RIIC3.RIICnMR1.UINT8[LL]
#define RIIC3MR1LH RIIC3.RIICnMR1.UINT8[LH]
#define RIIC3MR1H RIIC3.RIICnMR1.UINT16[H]
#define RIIC3MR1HL RIIC3.RIICnMR1.UINT8[HL]
#define RIIC3MR1HH RIIC3.RIICnMR1.UINT8[HH]
#define RIIC3MR2 RIIC3.RIICnMR2.UINT32
#define RIIC3MR2L RIIC3.RIICnMR2.UINT16[L]
#define RIIC3MR2LL RIIC3.RIICnMR2.UINT8[LL]
#define RIIC3MR2LH RIIC3.RIICnMR2.UINT8[LH]
#define RIIC3MR2H RIIC3.RIICnMR2.UINT16[H]
#define RIIC3MR2HL RIIC3.RIICnMR2.UINT8[HL]
#define RIIC3MR2HH RIIC3.RIICnMR2.UINT8[HH]
#define RIIC3MR3 RIIC3.RIICnMR3.UINT32
#define RIIC3MR3L RIIC3.RIICnMR3.UINT16[L]
#define RIIC3MR3LL RIIC3.RIICnMR3.UINT8[LL]
#define RIIC3MR3LH RIIC3.RIICnMR3.UINT8[LH]
#define RIIC3MR3H RIIC3.RIICnMR3.UINT16[H]
#define RIIC3MR3HL RIIC3.RIICnMR3.UINT8[HL]
#define RIIC3MR3HH RIIC3.RIICnMR3.UINT8[HH]
#define RIIC3FER RIIC3.RIICnFER.UINT32
#define RIIC3FERL RIIC3.RIICnFER.UINT16[L]
#define RIIC3FERLL RIIC3.RIICnFER.UINT8[LL]
#define RIIC3FERLH RIIC3.RIICnFER.UINT8[LH]
#define RIIC3FERH RIIC3.RIICnFER.UINT16[H]
#define RIIC3FERHL RIIC3.RIICnFER.UINT8[HL]
#define RIIC3FERHH RIIC3.RIICnFER.UINT8[HH]
#define RIIC3SER RIIC3.RIICnSER.UINT32
#define RIIC3SERL RIIC3.RIICnSER.UINT16[L]
#define RIIC3SERLL RIIC3.RIICnSER.UINT8[LL]
#define RIIC3SERLH RIIC3.RIICnSER.UINT8[LH]
#define RIIC3SERH RIIC3.RIICnSER.UINT16[H]
#define RIIC3SERHL RIIC3.RIICnSER.UINT8[HL]
#define RIIC3SERHH RIIC3.RIICnSER.UINT8[HH]
#define RIIC3IER RIIC3.RIICnIER.UINT32
#define RIIC3IERL RIIC3.RIICnIER.UINT16[L]
#define RIIC3IERLL RIIC3.RIICnIER.UINT8[LL]
#define RIIC3IERLH RIIC3.RIICnIER.UINT8[LH]
#define RIIC3IERH RIIC3.RIICnIER.UINT16[H]
#define RIIC3IERHL RIIC3.RIICnIER.UINT8[HL]
#define RIIC3IERHH RIIC3.RIICnIER.UINT8[HH]
#define RIIC3SR1 RIIC3.RIICnSR1.UINT32
#define RIIC3SR1L RIIC3.RIICnSR1.UINT16[L]
#define RIIC3SR1LL RIIC3.RIICnSR1.UINT8[LL]
#define RIIC3SR1LH RIIC3.RIICnSR1.UINT8[LH]
#define RIIC3SR1H RIIC3.RIICnSR1.UINT16[H]
#define RIIC3SR1HL RIIC3.RIICnSR1.UINT8[HL]
#define RIIC3SR1HH RIIC3.RIICnSR1.UINT8[HH]
#define RIIC3SR2 RIIC3.RIICnSR2.UINT32
#define RIIC3SR2L RIIC3.RIICnSR2.UINT16[L]
#define RIIC3SR2LL RIIC3.RIICnSR2.UINT8[LL]
#define RIIC3SR2LH RIIC3.RIICnSR2.UINT8[LH]
#define RIIC3SR2H RIIC3.RIICnSR2.UINT16[H]
#define RIIC3SR2HL RIIC3.RIICnSR2.UINT8[HL]
#define RIIC3SR2HH RIIC3.RIICnSR2.UINT8[HH]
#define RIIC3SAR0 RIIC3.RIICnSAR0.UINT32
#define RIIC3SAR0L RIIC3.RIICnSAR0.UINT16[L]
#define RIIC3SAR0LL RIIC3.RIICnSAR0.UINT8[LL]
#define RIIC3SAR0LH RIIC3.RIICnSAR0.UINT8[LH]
#define RIIC3SAR0H RIIC3.RIICnSAR0.UINT16[H]
#define RIIC3SAR0HL RIIC3.RIICnSAR0.UINT8[HL]
#define RIIC3SAR0HH RIIC3.RIICnSAR0.UINT8[HH]
#define RIIC3SAR1 RIIC3.RIICnSAR1.UINT32
#define RIIC3SAR1L RIIC3.RIICnSAR1.UINT16[L]
#define RIIC3SAR1LL RIIC3.RIICnSAR1.UINT8[LL]
#define RIIC3SAR1LH RIIC3.RIICnSAR1.UINT8[LH]
#define RIIC3SAR1H RIIC3.RIICnSAR1.UINT16[H]
#define RIIC3SAR1HL RIIC3.RIICnSAR1.UINT8[HL]
#define RIIC3SAR1HH RIIC3.RIICnSAR1.UINT8[HH]
#define RIIC3SAR2 RIIC3.RIICnSAR2.UINT32
#define RIIC3SAR2L RIIC3.RIICnSAR2.UINT16[L]
#define RIIC3SAR2LL RIIC3.RIICnSAR2.UINT8[LL]
#define RIIC3SAR2LH RIIC3.RIICnSAR2.UINT8[LH]
#define RIIC3SAR2H RIIC3.RIICnSAR2.UINT16[H]
#define RIIC3SAR2HL RIIC3.RIICnSAR2.UINT8[HL]
#define RIIC3SAR2HH RIIC3.RIICnSAR2.UINT8[HH]
#define RIIC3BRL RIIC3.RIICnBRL.UINT32
#define RIIC3BRLL RIIC3.RIICnBRL.UINT16[L]
#define RIIC3BRLLL RIIC3.RIICnBRL.UINT8[LL]
#define RIIC3BRLLH RIIC3.RIICnBRL.UINT8[LH]
#define RIIC3BRLH RIIC3.RIICnBRL.UINT16[H]
#define RIIC3BRLHL RIIC3.RIICnBRL.UINT8[HL]
#define RIIC3BRLHH RIIC3.RIICnBRL.UINT8[HH]
#define RIIC3BRH RIIC3.RIICnBRH.UINT32
#define RIIC3BRHL RIIC3.RIICnBRH.UINT16[L]
#define RIIC3BRHLL RIIC3.RIICnBRH.UINT8[LL]
#define RIIC3BRHLH RIIC3.RIICnBRH.UINT8[LH]
#define RIIC3BRHH RIIC3.RIICnBRH.UINT16[H]
#define RIIC3BRHHL RIIC3.RIICnBRH.UINT8[HL]
#define RIIC3BRHHH RIIC3.RIICnBRH.UINT8[HH]
#define RIIC3DRT RIIC3.RIICnDRT.UINT32
#define RIIC3DRTL RIIC3.RIICnDRT.UINT16[L]
#define RIIC3DRTLL RIIC3.RIICnDRT.UINT8[LL]
#define RIIC3DRTLH RIIC3.RIICnDRT.UINT8[LH]
#define RIIC3DRTH RIIC3.RIICnDRT.UINT16[H]
#define RIIC3DRTHL RIIC3.RIICnDRT.UINT8[HL]
#define RIIC3DRTHH RIIC3.RIICnDRT.UINT8[HH]
#define RIIC3DRR RIIC3.RIICnDRR.UINT32
#define RIIC3DRRL RIIC3.RIICnDRR.UINT16[L]
#define RIIC3DRRLL RIIC3.RIICnDRR.UINT8[LL]
#define RIIC3DRRLH RIIC3.RIICnDRR.UINT8[LH]
#define RIIC3DRRH RIIC3.RIICnDRR.UINT16[H]
#define RIIC3DRRHL RIIC3.RIICnDRR.UINT8[HL]
#define RIIC3DRRHH RIIC3.RIICnDRR.UINT8[HH]
#endif
