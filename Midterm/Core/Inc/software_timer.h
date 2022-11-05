#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag;
extern int timerRed_flag;

void setTimerRed(int dur);

void setTimer(int dur);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
