#ifndef PINS_H
#define PINS_H

/****************************************************************************************
* Arduino pin assignment
*
*                  ATMega168
*                   +-\/-+
*             PC6  1|    |28  PC5 (AI 5 / D19)
*       (D 0) PD0  2|    |27  PC4 (AI 4 / D18)
*       (D 1) PD1  3|    |26  PC3 (AI 3 / D17)
*       (D 2) PD2  4|    |25  PC2 (AI 2 / D16)
*  PWM+ (D 3) PD3  5|    |24  PC1 (AI 1 / D15)
*       (D 4) PD4  6|    |23  PC0 (AI 0 / D14)
*             VCC  7|    |22  GND
*             GND  8|    |21  AREF
*             PB6  9|    |20  AVCC
*             PB7 10|    |19  PB5 (D 13)
*  PWM+ (D 5) PD5 11|    |18  PB4 (D 12)
*  PWM+ (D 6) PD6 12|    |17  PB3 (D 11) PWM
*       (D 7) PD7 13|    |16  PB2 (D 10) PWM
*       (D 8) PB0 14|    |15  PB1 (D 9)  PWM
*                   +----+
****************************************************************************************/
#if MOTHERBOARD == 0
#ifndef __AVR_ATmega168__
#error Oops!  Make sure you have 'Arduino Diecimila' selected from the boards menu.
#endif

#define X_STEP_PIN   (byte)2
#define X_DIR_PIN    (byte)3
#define X_ENABLE_PIN (byte)-1
#define X_MIN_PIN    (byte)4
#define X_MAX_PIN    (byte)9

#define Y_STEP_PIN   (byte)10
#define Y_DIR_PIN    (byte)7
#define Y_ENABLE_PIN (byte)-1
#define Y_MIN_PIN    (byte)8
#define Y_MAX_PIN    (byte)13

#define Z_STEP_PIN   (byte)19
#define Z_DIR_PIN    (byte)18
#define Z_ENABLE_PIN (byte)5
#define Z_MIN_PIN    (byte)17
#define Z_MAX_PIN    (byte)16

#define E_STEP_PIN   (byte)11
#define E_DIR_PIN    (byte)12
#define E_ENABLE_PIN (byte)-1

#define LED_PIN      (byte)-1
#define FAN_PIN      (byte)-1
#define PS_ON_PIN    (byte)15
#define KILL_PIN     (byte)-1

#define HEATER_0_PIN (byte)6
#define TEMP_0_PIN   (byte)0    // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!






/****************************************************************************************
* Sanguino/RepRap Motherboard with direct-drive extruders
*
*                        ATMega644P
*
*                        +---\/---+
*            (D 0) PB0  1|        |40  PA0 (AI 0 / D31)
*            (D 1) PB1  2|        |39  PA1 (AI 1 / D30)
*       INT2 (D 2) PB2  3|        |38  PA2 (AI 2 / D29)
*        PWM (D 3) PB3  4|        |37  PA3 (AI 3 / D28)
*        PWM (D 4) PB4  5|        |36  PA4 (AI 4 / D27)
*       MOSI (D 5) PB5  6|        |35  PA5 (AI 5 / D26)
*       MISO (D 6) PB6  7|        |34  PA6 (AI 6 / D25)
*        SCK (D 7) PB7  8|        |33  PA7 (AI 7 / D24)
*                  RST  9|        |32  AREF
*                  VCC 10|        |31  GND 
*                  GND 11|        |30  AVCC
*                XTAL2 12|        |29  PC7 (D 23)
*                XTAL1 13|        |28  PC6 (D 22)
*       RX0 (D 8)  PD0 14|        |27  PC5 (D 21) TDI
*       TX0 (D 9)  PD1 15|        |26  PC4 (D 20) TDO
*  INT0 RX1 (D 10) PD2 16|        |25  PC3 (D 19) TMS
*  INT1 TX1 (D 11) PD3 17|        |24  PC2 (D 18) TCK
*       PWM (D 12) PD4 18|        |23  PC1 (D 17) SDA
*       PWM (D 13) PD5 19|        |22  PC0 (D 16) SCL
*       PWM (D 14) PD6 20|        |21  PD7 (D 15) PWM
*                        +--------+
*
****************************************************************************************/
#elif MOTHERBOARD == 1
#ifndef __AVR_ATmega644P__
#error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif

#define X_STEP_PIN   (byte)15
#define X_DIR_PIN    (byte)18
#define X_ENABLE_PIN (byte)19
#define X_MIN_PIN    (byte)20
#define X_MAX_PIN    (byte)21

#define Y_STEP_PIN   (byte)23
#define Y_DIR_PIN    (byte)22
#define Y_ENABLE_PIN (byte)19
#define Y_MIN_PIN    (byte)25
#define Y_MAX_PIN    (byte)26

#define Z_STEP_PIN   (byte)29
#define Z_DIR_PIN    (byte)30
#define Z_ENABLE_PIN (byte)31
#define Z_MIN_PIN    (byte)2
#define Z_MAX_PIN    (byte)1

#define E_STEP_PIN   (byte)12
#define E_DIR_PIN    (byte)16
#define E_ENABLE_PIN (byte)3

#define LED_PIN      (byte)0
#define FAN_PIN      (byte)-1
#define PS_ON_PIN    (byte)-1
#define KILL_PIN     (byte)-1

#define HEATER_0_PIN (byte)14
#define TEMP_0_PIN   (byte)4 //D27   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!

/*  Unused (1) (2) (3) 4 5 6 7 8 9 10 11 12 13 (14) (15) (16) 17 (18) (19) (20) (21) (22) (23) 24 (25) (26) (27) 28 (29) (30) (31)  */






/****************************************************************************************
* RepRap Motherboard  ****---NOOOOOO RS485/EXTRUDER CONTROLLER!!!!!!!!!!!!!!!!!---*******
*
****************************************************************************************/
#elif MOTHERBOARD == 2
#ifndef __AVR_ATmega644P__
#error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif

#define X_STEP_PIN      15
#define X_DIR_PIN       18
#define X_ENABLE_PIN    19
#define X_MIN_PIN       20
#define X_MAX_PIN       21

#define Y_STEP_PIN      23
#define Y_DIR_PIN       22
#define Y_ENABLE_PIN    24
#define Y_MIN_PIN       25
#define Y_MAX_PIN       26

#define Z_STEP_PINN     27
#define Z_DIR_PINN      28
#define Z_ENABLE_PIN    29
#define Z_MIN_PIN       30
#define Z_MAX_PIN       31

#define E_STEP_PIN      17
#define E_DIR_PIN       16
#define E_ENABLE_PIN (byte)-1

#define LED_PIN          0

#define SD_CARD_WRITE    2
#define SD_CARD_DETECT   3
#define SD_CARD_SELECT   4

//our RS485 pins
#define TX_ENABLE_PIN	12
#define RX_ENABLE_PIN	13

//pin for controlling the PSU.
#define PS_ON_PIN       14

#define FAN_PIN      (byte)-1
#define KILL_PIN     (byte)-1

#define HEATER_0_PIN (byte)-1
#define TEMP_0_PIN   (byte)-1    // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!






/****************************************************************************************
* Arduino Mega pin assignment
*
****************************************************************************************/
#elif MOTHERBOARD == 3
#ifndef __AVR_ATmega1280__
#error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif

#define X_STEP_PIN   (byte)22
#define X_DIR_PIN    (byte)23
#define X_ENABLE_PIN (byte)24
#define X_MIN_PIN    (byte)2
#define X_MAX_PIN    (byte)3

#define Y_STEP_PIN   (byte)25
#define Y_DIR_PIN    (byte)26
#define Y_ENABLE_PIN (byte)27
#define Y_MIN_PIN    (byte)18
#define Y_MAX_PIN    (byte)19

#define Z_STEP_PIN   (byte)28
#define Z_DIR_PIN    (byte)29
#define Z_ENABLE_PIN (byte)30
#define Z_MIN_PIN    (byte)20
#define Z_MAX_PIN    (byte)21

#define E_STEP_PIN   (byte)4
#define E_DIR_PIN    (byte)31
#define E_ENABLE_PIN (byte)-1

#define LED_PIN      (byte)-1
#define FAN_PIN      (byte)-1
#define PS_ON_PIN    (byte)10
#define KILL_PIN     (byte)-1

#define HEATER_0_PIN (byte)6
#define TEMP_0_PIN   (byte)0    // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!






/****************************************************************************************
* Duemilanove w/ ATMega328P pin assignment
*
****************************************************************************************/
#elif MOTHERBOARD == 4
#ifndef __AVR_ATmega328P__
#error Oops!  Make sure you have 'Arduino Duemilanove w/ ATMega328' selected from the 'Tools -> Boards' menu.
#endif

#define X_STEP_PIN   (byte)19
#define X_DIR_PIN    (byte)18
#define X_ENABLE_PIN (byte)-1
#define X_MIN_PIN    (byte)17
#define X_MAX_PIN    (byte)-1

#define Y_STEP_PIN   (byte)10
#define Y_DIR_PIN    (byte)7
#define Y_ENABLE_PIN (byte)-1
#define Y_MIN_PIN    (byte)8
#define Y_MAX_PIN    (byte)-1

#define Z_STEP_PIN   (byte)13
#define Z_DIR_PIN    (byte)3
#define Z_ENABLE_PIN (byte)2
#define Z_MIN_PIN    (byte)4
#define Z_MAX_PIN    (byte)-1

//#define BASE_HEATER_PIN   (byte)1
//#define POWER_SUPPLY_PIN (byte)16

#define E_STEP_PIN   (byte)11
#define E_DIR_PIN    (byte)12
#define E_ENABLE_PIN (byte)-1

#define LED_PIN      (byte)-1
#define FAN_PIN      (byte)5
#define PS_ON_PIN    (byte)-1
#define KILL_PIN     (byte)-1

#define HEATER_0_PIN (byte)6
#define TEMP_0_PIN   (byte)0    // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!






#else

#error Unknown MOTHERBOARD value in parameters.h

#endif

#endif