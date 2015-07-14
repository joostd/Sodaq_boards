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
/*
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * + Pin number +  Autonomo pin    |  PIN   | Label/Name      | Comments (* is for default peripheral in use)
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 * |            | Digital Low      |        |                 |
 * +------------+------------------+--------+-----------------+--------------------------------------------------------------------------------------------------------
 */


#include "variant.h"

/*
 * Pins descriptions for SODAQ Autonomo
 *
 *  0..15 digital
 * 16..31 analog, A0..A15
 */
const PinDescription g_APinDescription[]=
{ /*
  | PORT | PIN | PIN_TYPE    | PIN_ATTRIBUTES                                    | ADC_CHANNEL   | PWM_CHANNEL | TIMER_CHANNEL | EXT. INTERRUPT |
  */
  // ----------------------
  // 0..1 - SERCOM/UART (Serial)
  { PORTA, 9,  PIO_SERCOM,     (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9  }, // RX, D0
  { PORTA, 10, PIO_SERCOM,     (PIN_ATTR_DIGITAL),	                               No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 }, // TX, D1

  // 2..15 Digital
  { PORTA, 11, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER), No_ADC_Channel, PWM1_CH1,   TCC1_CH1,     EXTERNAL_INT_11 }, // D2
  { PORTB, 10, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER), No_ADC_Channel, PWM5_CH0,   TC5_CH0,      EXTERNAL_INT_10 }, // D3
  { PORTB, 11, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER), No_ADC_Channel, PWM5_CH1,   TC5_CH1,      EXTERNAL_INT_11 }, // D4
  { PORTB, 12, PIO_TIMER_ALT,  (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER), No_ADC_Channel, PWM0_CH6,   TCC0_CH6,     EXTERNAL_INT_12 }, // D5
  { PORTB, 13, PIO_TIMER_ALT,  (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER), No_ADC_Channel, PWM0_CH7,   TCC0_CH7,     EXTERNAL_INT_13 }, // D6
  { PORTB, 14, PIO_DIGITAL,    (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_14 }, // D7
  { PORTB, 15, PIO_DIGITAL,    (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_15 }, // D8
  { PORTA, 14, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER), No_ADC_Channel, PWM3_CH0,   TC3_CH0,      EXTERNAL_INT_14 }, // D9
  { PORTA, 15, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER), No_ADC_Channel, PWM3_CH1,   TC3_CH1,      EXTERNAL_INT_15 }, // D10
  { PORTA, 16, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER), No_ADC_Channel, PWM2_CH0,   TCC2_CH0,     EXTERNAL_INT_0  }, // D11
  { PORTA, 17, PIO_TIMER,      (PIN_ATTR_DIGITAL | PIN_ATTR_PWM | PIN_ATTR_TIMER), No_ADC_Channel, PWM2_CH1,   TCC2_CH1,     EXTERNAL_INT_1  }, // D12
  { PORTA, 18, PIO_DIGITAL,    (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2  }, // D13
  { PORTA, 19, PIO_DIGITAL,    (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3  }, // D14
  { PORTB, 16, PIO_DIGITAL,    (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_0  }, // D15

  // 16..21 Other Digital
  { PORTA, 8,  PIO_OUTPUT,     (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // VCC_SW
  { PORTA, 28, PIO_OUTPUT,     (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // BEE_VCC
  { PORTB, 22, PIO_OUTPUT,     (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // DTR
  { PORTB, 23, PIO_DIGITAL,    (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // CTS
  { PORTA, 27, PIO_OUTPUT,     (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // SS_2 (SD)
  { PORTB, 17, PIO_DIGITAL,    (PIN_ATTR_DIGITAL),                                 No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_17   }, // RI/AS

  // 22..35 A0..A13
  { PORTA,  7, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel7,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7  }, // ADC/AIN[7], A0
  { PORTA,  6, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel6,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6  }, // ADC/AIN[6], A1
  { PORTA,  5, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel5,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5  }, // ADC/AIN[5], A2
  { PORTA,  4, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel4,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4  }, // ADC/AIN[4], A3
  { PORTB,  9, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel3,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_9  }, // ADC/AIN[3], A4
  { PORTB,  8, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel2,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_8  }, // ADC/AIN[2], A5
  { PORTB,  7, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel15,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7  }, // ADC/AIN[15], A6
  { PORTB,  6, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel14,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6  }, // ADC/AIN[14], A7
  { PORTB,  5, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel13,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5  }, // ADC/AIN[13], A8
  { PORTB,  4, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel12,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4  }, // ADC/AIN[12], A9
  { PORTA,  2, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel0,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2  }, // ADC/AIN[0],  A10
  { PORTB,  3, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel11,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_3  }, // ADC/AIN[14], A11
  { PORTB,  2, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel10,  NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2  }, // ADC/AIN[14], A12
  { PORTB,  1, PIO_ANALOG,     PIN_ATTR_ANALOG,                                    ADC_Channel9,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_1  }, // ADC/AIN[14], A13
  
  // 36-38 Other Analog + DAC
  { PORTB,  0, PIO_ANALOG,     PIN_ATTR_ANALOG,                                   ADC_Channel8,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE  }, // ADC/AIN[8], BATVOLT
  { PORTA,  3, PIO_ANALOG,     PIN_ATTR_ANALOG,                                   ADC_Channel1,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE  }, // ADC/AIN[1], AREF
  { PORTA,  2, PIO_ANALOG,     PIN_ATTR_ANALOG,                                   DAC_Channel0,   NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_2     }, // DAC

  // 39..40 - SERCOM/UART (Serial1)
  { PORTB, 30, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL),                                No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_14 }, // RX: SERCOM5/PAD[0]
  { PORTB, 31, PIO_SERCOM_ALT, (PIN_ATTR_DIGITAL),                                No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_15 }, // TX: SERCOM5/PAD[1]

  // 41..42 - I2C pins (SDA/SCL)
  { PORTA, 12, PIO_SERCOM,     PIN_ATTR_DIGITAL,                                  No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_12 }, // SDA: SERCOM2/PAD[0]
  { PORTA, 13, PIO_SERCOM,     PIN_ATTR_DIGITAL,                                  No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_13 }, // SCL: SERCOM2/PAD[1]

  // 43 - SS (dataflash AT45DB161E)
  { PORTA, 23, PIO_SERCOM,     PIN_ATTR_DIGITAL,                                  No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_7  }, // SS: SERCOM3/PAD[1]},

  // 44..46 - SPI pins (ICSP:MISO,SCK,MOSI)
  { PORTA, 22, PIO_SERCOM,     PIN_ATTR_DIGITAL,                                  No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_6  }, // MISO: SERCOM3/PAD[0]
  { PORTA, 21, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL,                                  No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_5  }, // SCK: SERCOM3/PAD[3]
  { PORTA, 20, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL,                                  No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_4  }, // MOSI: SERCOM3/PAD[2]

  // 47..48 - USB
  { PORTA, 24, PIO_COM,        PIN_ATTR_NONE,                                     No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB/DM
  { PORTA, 25, PIO_COM,        PIN_ATTR_NONE,                                     No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_NONE }, // USB/DP
} ;

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC3, TC4, TC5, TC6, TC7 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;
SERCOM sercom4( SERCOM4 ) ;
SERCOM sercom5( SERCOM5 ) ;

Uart Serial1( &sercom0, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;
void SERCOM0_Handler()
{
  Serial1.IrqHandler();
}

Uart Serial2( &sercom5, PIN_SERIAL2_RX, PIN_SERIAL2_TX, PAD_SERIAL2_RX, PAD_SERIAL2_TX ) ;
void SERCOM5_Handler()
{
  Serial2.IrqHandler();
}

