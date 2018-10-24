/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

/*
 * Pins descriptions
 */
const PinDescription g_APinDescription[]=
{
  // 0..13 - Digital pins
  // ----------------------
  // 0/1 - SERCOM/UART (Serial1)
  { PORTA,  12, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM0_CH6, TCC0_CH6, EXTERNAL_INT_12 }, // SERCOM 2.0
  { PORTA,  13, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM0_CH7, TCC0_CH7, EXTERNAL_INT_13 }, // SERCOM 2.1

  // 2..9 - columns
  { PORTA,  14, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM1_CH2, TCC1_CH2, EXTERNAL_INT_14 },    // D2 COL0
  { PORTA,  15, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER), No_ADC_Channel, PWM1_CH3, TCC1_CH3, EXTERNAL_INT_15 },    // D3 COL1
  { PORTA,  16, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM1_CH0, TCC1_CH0, EXTERNAL_INT_0 }, // D4 COL2
  { PORTA,  17, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM1_CH1, TCC1_CH1, EXTERNAL_INT_1 }, // D5 COL3
  { PORTA,  20, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM1_CH4, TCC1_CH4, EXTERNAL_INT_4 }, // D6 COL4
  { PORTA,  21, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM1_CH5, TCC1_CH5, EXTERNAL_INT_5 }, // D7 COL5
  { PORTA,  22, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM1_CH6, TCC1_CH6, EXTERNAL_INT_6 }, // D8 COL6
  { PORTA,  23, PIO_SERCOM, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM1_CH7, TCC1_CH7, EXTERNAL_INT_7 }, // D9 COL7

  // NeoPixel #10
  { PORTA,   27, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_ANALOG), ADC_Channel7, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7 },  // D10

  // 11 & 12 - dotstar clock + data
  { PORTA,  0, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0 }, // MOSI SERCOM 1.0
  { PORTA,  1, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1 }, // SCK  SERCOM 1.1

  // 13 (LED)
  { PORTB, 02, PIO_DIGITAL, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 }, // unconnected

  // 14..17 - rows
  { PORTA,  18, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM1_CH2, TCC1_CH2, EXTERNAL_INT_2 },
  { PORTA,  19, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM1_CH3, TCC1_CH3, EXTERNAL_INT_3 },
  { PORTB,  22, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 },
  { PORTB,  23, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7 },     // MISO SERCOM 1.3

  // 18 - IRQ
  { PORTA,  4, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel4, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4 },

  // 19..20 - USB
  // --------------------
  { PORTA, 24, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 }, // USB/DM
  { PORTA, 25, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 }, // USB/DP

  // 21..22 I2C pins (SDA/SCL)
  // ----------------------
  { PORTB,  8, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM0_CH6, TCC0_CH6, EXTERNAL_INT_12 }, // SERCOM 2.0
  { PORTB,  9, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM|PIN_ATTR_TIMER_ALT), No_ADC_Channel, PWM0_CH7, TCC0_CH7, EXTERNAL_INT_13 }, // SERCOM 2.1

  // ----------------------
  // 23 - 28 QSPI (SCK, CS, IO0, IO1, IO2, IO3)
  { PORTB, 10, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 },
  { PORTB, 11, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 },
  { PORTA, 8, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NMI },
  { PORTA, 9, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 },
  { PORTA, 10, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 },
  { PORTA, 11, PIO_COM, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 },

  // 29..34 - Analog pins
  // --------------------
  { PORTA,  2, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel0, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 }, // A0
  { PORTA,  5, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel5, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5 }, // A1
  { PORTA,  6, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel4, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4 }, // Amp'd Mic
  { PORTA,  7, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel6, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6 }, // Raw Mic
  { PORTB,  8, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel2, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8 }, // SDA
  { PORTB,  9, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel3, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9 }, // SCL

  // 35 - SWCLK
  { PORTA, 30, PIO_SERCOM_ALT, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_14 },
  // 36 - SWDIO
  { PORTA, 31, PIO_SERCOM_ALT, PIN_ATTR_NONE, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_15 },

  // Unused
  { PORTB,  2, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel14, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2 },
  { PORTB,  3, PIO_ANALOG, PIN_ATTR_ANALOG, ADC_Channel15, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 }, 

  // AREF tied to 3.3V
  { PORTA, 3, PIO_ANALOG, PIN_ATTR_ANALOG, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3 }, // DAC/VREFP
} ;

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;
SERCOM sercom4( SERCOM4 ) ;
SERCOM sercom5( SERCOM5 ) ;
