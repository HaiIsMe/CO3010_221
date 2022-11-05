#include "fsm_manual.h"

void fsm_manual_run() {
	switch (status) {
	case INIT:
		if (timer_flag == 1) {
			setTimer(one_second);
			status = COUNTDOWN;
		}

		if (isButtonPressed(RES) == 1)
			status = RES;
		else if (isButtonPressed(INC) == 1) {
			setTimer(ten_second);
			status = INC;
		} else if (isButtonPressed(DEC) == 1) {
			setTimer(ten_second);
			status = DEC;
		}
		break;
	case RES:
		num = 0;
		turn7Seg(num);
		if (isButtonPressed(RES) == 1)
			status = RES;
		else if (isButtonPressed(INC) == 1) {
			setTimer(ten_second);
			status = INC;
		} else if (isButtonPressed(DEC) == 1) {
			setTimer(ten_second);
			status = DEC;
		}
		break;
	case INC:
		num = num + 1;
		if (num > 9)
			num = 0;
		turn7Seg(num);

		if (isButtonPressed(RES) == 1)
			status = RES;
		else if (isButtonPressed(INC) == 1) {
			setTimer(ten_second);
			status = INC;
		} else if (isButtonPressed(DEC) == 1) {
			setTimer(ten_second);
			status = DEC;
		} else
			status = INIT;
		break;
	case DEC:
		num = num - 1;
		if (num < 0)
			num = 9;
		turn7Seg(num);

		if (isButtonPressed(RES) == 1)
			status = RES;
		else if (isButtonPressed(INC) == 1) {
			setTimer(ten_second);
			status = INC;
		} else if (isButtonPressed(DEC) == 1) {
			setTimer(ten_second);
			status = DEC;
		} else
			status = INIT;
		break;
	case COUNTDOWN:
		if (timer_flag == 1) {
			num = num - 1;
			if (num < 0)
				num = 0;
			setTimer(one_second);
		}
		turn7Seg(num);

		if (isButtonPressed(RES) == 1)
			status = RES;
		else if (isButtonPressed(INC) == 1) {
			setTimer(ten_second);
			status = INC;
		} else if (isButtonPressed(DEC) == 1) {
			setTimer(ten_second);
			status = DEC;
		}
		break;
	default:
		break;
	}
}


