#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "button.h"

#define one_second 	1000
#define ten_second 	10000

#define INIT		3
#define RES 		0
#define INC			1
#define DEC			2
#define COUNTDOWN 	4

extern int status;

extern int num;

void toggleRed();

void turn7Seg(int i);


#endif /* INC_GLOBAL_H_ */
