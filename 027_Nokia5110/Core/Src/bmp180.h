/*
 * BMP180.h
 *
 *  Created on: Mar 13, 2023
 *      Author: Ferhat
 */

#ifndef SRC_BMP180_H_
#define SRC_BMP180_H_
#include "stm32f4xx_hal.h"

extern I2C_HandleTypeDef hi2c1;

/* BMP180 Device Address */
#define BMP180_DEVICE_WRITE_REGISTER_ADDRESS 0XEE
#define BMP180_DEVICE_READ_REGISTER_ADDRESS 0XEF

/* BMP180 Calibration Address */
#define BMP180_CALIBRATION_START_ADDRESS 0xAA

/* BMP180 Calibration Value Length */
#define BMP180_CALIBRATION_VALUE_LENGTH 22



void BMP180_Init(void);
void BMP180_GetCalibration(void);
void BMP180_Get_Calibration_Value(void);
void BMP180_GetUncomponsated_Temperature(void);
void BMP180_Get_Temperature(void);
void BMP180_GetUncomponsated_Presure(void);
void BMP180_GetPresure(void);


#endif /* SRC_BMP180_H_ */
