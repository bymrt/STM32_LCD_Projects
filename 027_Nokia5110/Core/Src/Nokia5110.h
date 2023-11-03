/*
 * Nokia5110.h
 *
 *  Created on: Mar 14, 2023
 *      Author: Ferhat
 */

#ifndef SRC_NOKIA5110_H_
#define SRC_NOKIA5110_H_

#include "stm32f4xx_hal.h"
#include "stdbool.h"

extern SPI_HandleTypeDef hspi2;
extern DMA_HandleTypeDef hdma_spi2_tx;



bool Nokia5110_Init(void);
void Nokia5110_Reset(void);
bool Nokia5110_Write(uint8_t data, uint8_t mode);
void Nokia5110_BufferWrite(uint8_t data);
void LCD_Write_Char(uint8_t ch) ;
void LCD_Write_String(char *str,uint8_t PosX, uint8_t PosY);
void LCD_Set_Postion(uint8_t PoX, uint8_t PoY);
void LCD_Write_Command(uint8_t cmd);
void LCD_Clear(void);

#endif /* SRC_NOKIA5110_H_ */
