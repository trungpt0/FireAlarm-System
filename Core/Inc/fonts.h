/*
 * fonts.h
 *
 *  Created on: May 11, 2024
 *      Author: Trung
 */

#ifndef INC_FONTS_H_
#define INC_FONTS_H_ 120

#ifdef __cplusplus
extern C {
#endif

#include "stm32f1xx_hal.h"
#include "string.h"

/**
 * @brief Font structure used on my LCD
 */
typedef struct {
	uint8_t FontWidth;
	uint8_t FontHeight;
	const uint16_t *data;
} FontDef_t;

/**
 * @brief String length and height
 */
typedef struct {
	uint16_t Length;
	uint16_t Height;
} FONTS_SIZE_t;

extern FontDef_t Font_7x10;
extern FontDef_t Font_11x18;
extern FontDef_t Font_16x26;

char* FONTS_GetStringSize(char* str, FONTS_SIZE_t* SizeStruct, FontDef_t* Font);

#ifdef __cplusplus
}
#endif

#endif /* INC_FONTS_H_ */
