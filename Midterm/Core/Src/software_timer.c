#include "software_timer.h"

#define TICK 10

int timer_flag = 0;
int timer_counter = 0;

int timerRed_flag = 0;
int timerRed_counter = 0;

void setTimerRed(int dur) {
	timerRed_counter = dur / TICK;
	timerRed_flag = 0;
}

void setTimer(int dur) {
	timer_counter = dur / TICK;
	timer_flag = 0;
}

void timerRun() {
	if (timer_counter > 0) {
		timer_counter--;
		if (timer_counter == 0)
			timer_flag = 1;
	}
	if (timerRed_counter > 0) {
		timerRed_counter--;
		if (timerRed_counter == 0)
			timerRed_flag = 1;
	}
}


