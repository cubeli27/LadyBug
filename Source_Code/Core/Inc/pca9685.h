/*
 * pca9685.h
 *
 *  Created on: Dec 17, 2023
 *      Author: Jurin PC
 *      Based on https://github.com/pms67/HadesFCS
 */

#ifndef PCA9685_H_
#define PCA9685_H_

#include "stm32f1xx_hal.h" //stm32 f1 series used in LadyBug v1.1
//#include "stm32f0xx_hal.h" //LadyBug v1.0
//#include "stm32g0xx_hal.h" //Nucleo

// ----------------------------ADRESS--------------------------------//
//#define PCA9685_I2C_ADDR (0x40 << 1) // default i2c adress of the pca9685
#define PCA9685_I2C_ADDR (0x41 << 1) // default i2c adress for LadyBug v1.1
//#define PCA9685_I2C_ADDR (0x43 << 1) // solder jump (A1) soldered; i2c adress for LadyBug v1.1
#define PCA9685_I2C_TIMEOUT 100	//uint32_t Timeout of hal_i2c
#define PCA9685_OSC_FREQ 25000000	//25 MHz internal

/* Registers */
#define PCA9685_REG_MODE1 0x00
#define PCA9685_REG_MODE2 0x01
#define PCA9685_REG_DATA  0x06
#define PCA9685_REG_PRSCL 0xFE

#define pwmFreq 50	//50 Hz most servos

typedef struct {
	I2C_HandleTypeDef *I2Chandle;
	uint8_t preScale;
	uint16_t setting[12];
} PCA9685;

void PCA9685_Init(PCA9685 *pca, I2C_HandleTypeDef *I2Chandle);
void PCA9685_SetMicros(PCA9685 *pca, uint8_t channel, uint16_t micros);
void PCA9685_SetPWM(PCA9685 *pca, uint8_t channel, uint16_t on, uint16_t off);

#endif
