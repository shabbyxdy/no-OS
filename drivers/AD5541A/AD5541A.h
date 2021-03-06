/***************************************************************************//**
 *   @file   AD5541A.h
 *   @brief  Header file of AD5541A Driver.
 *   @author DNechita (Dan.Nechita@analog.com)
********************************************************************************
 * Copyright 2012(c) Analog Devices, Inc.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  - Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *  - The use of this software may or may not infringe the patent rights
 *    of one or more patent holders.  This license does not release you
 *    from the requirement that you obtain separate licenses from these
 *    patent holders to use this software.
 *  - Use of the software either in source or binary form, must be run
 *    on or directly connected to an Analog Devices Inc. component.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, NON-INFRINGEMENT,
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL ANALOG DEVICES BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, INTELLECTUAL PROPERTY RIGHTS, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
********************************************************************************
*   SVN Revision: $WCREV$
*******************************************************************************/
#ifndef __AD5541A_H__
#define __AD5541A_H__

/******************************************************************************/
/***************************** Include Files **********************************/
/******************************************************************************/
#include "Communication.h"

/******************************************************************************/
/******************************** AD5541A *************************************/
/******************************************************************************/

/* AD5541A GPIO */
#define AD5541A_LDAC_OUT        GPIO1_PIN_OUT
#define AD5541A_LDAC_LOW        GPIO1_LOW
#define AD5541A_LDAC_HIGH       GPIO1_HIGH

/* SPI slave device ID */
#define AD5541A_SLAVE_ID     1

/******************************************************************************/
/************************ Functions Declarations ******************************/
/******************************************************************************/

/*! Initializes the communication peripheral and configures LDAC pin. */
char AD5541A_Init(void);

/*! Sends to DAC register through SPI the 16-bit data-word. */
void AD5541A_SetRegisterValue(unsigned short registerValue);

/*! Sets the output voltage. */
float AD5541A_SetVoltage(float outVoltage, float vRef);

#endif /* __AD5541A_H__ */
