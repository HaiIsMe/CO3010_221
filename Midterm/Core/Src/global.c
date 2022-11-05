#include "global.h"

static uint8_t LED7_SEG[10] = { 0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8,
		0x80, 0x90 };

int status = INIT;

int num = 9;

void toggleRed() {
	if (timerRed_flag == 1) {
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		setTimerRed(one_second);
	}
}

void turn7Seg(int index) {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, ((LED7_SEG[index] >> 0) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, ((LED7_SEG[index] >> 1) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, ((LED7_SEG[index] >> 2) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, ((LED7_SEG[index] >> 3) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, ((LED7_SEG[index] >> 4) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, ((LED7_SEG[index] >> 5) & 0x01));
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, ((LED7_SEG[index] >> 6) & 0x01));
}


