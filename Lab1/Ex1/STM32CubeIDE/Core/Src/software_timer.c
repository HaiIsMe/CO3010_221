#include "software_timer.h"

int timer_counter = 0;
int timer_flag = 0;
int TIMER_CYCLE = 10;

void setTimer(int duration)
{
	timer_counter = duration / TIMER_CYCLE;
	timer_flag = 0;
}
void timerRun()
{
	if (timer_counter > 0)
	{
		timer_counter--;
		if (timer_counter == 0)
		{
			timer_flag = 1;
		}
	}
}
