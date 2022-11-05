#include "button.h"

int keyReg0[3] = {NORMAL_STATE,NORMAL_STATE, NORMAL_STATE},
	keyReg1[3] = {NORMAL_STATE,NORMAL_STATE, NORMAL_STATE},
	keyReg2[3] = {NORMAL_STATE,NORMAL_STATE, NORMAL_STATE},
	keyReg3[3] = {NORMAL_STATE,NORMAL_STATE, NORMAL_STATE},
	button_flag[3] = {0,0,0},
	timeForPress[3] = {300,300,300};

int isButtonPressed(int index) {
	if (button_flag[index] == 1) {
		button_flag[0] = 0;
		button_flag[1] = 0;
		button_flag[2] = 0;
		return 1;
	} else
		return 0;
}

void subKeyProcess(int index){
	button_flag[index] = 1;
}

void getInputKey() {
	for (int i = 0; i < 3; i++) {
		keyReg0[i] = keyReg1[i];
		keyReg1[i] = keyReg2[i];
		switch (i) {
		case RESET_BUTTON:
			keyReg2[i] = HAL_GPIO_ReadPin(RES0_GPIO_Port, RES0_Pin);
			break;
		case INC_BUTTON:
			keyReg2[i] = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);
			break;
		case DEC_BUTTON:
			keyReg2[i] = HAL_GPIO_ReadPin(DEC_GPIO_Port, DEC_Pin);
		default:
			break;
		}

		if ((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i])) {
			if (keyReg2[i] != keyReg3[i]) {
				keyReg3[i] = keyReg2[i];
				if (keyReg2[i] == PRESSED_STATE) {
					subKeyProcess(i);
				} else {
					timeForPress[i] = THREE_SECOND;
				}
			} else {
				timeForPress[i]--;
				if (timeForPress[i] == 0) {
					keyReg3[i] = !keyReg2[i];
					timeForPress[i] = ONE_SECOND;
				}
			}
		}
	}
}
