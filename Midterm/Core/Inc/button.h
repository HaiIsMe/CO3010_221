#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE 	SET
#define PRESSED_STATE 	RESET

#define RESET_BUTTON	0
#define INC_BUTTON		1
#define DEC_BUTTON		2

#define ONE_SECOND		100
#define THREE_SECOND	300

extern int button_flag[3];

int isButtonPressed(int index);

void subKeyProcess(int index);

void getInputKey();

#endif /* INC_BUTTON_H_ */
