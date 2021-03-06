/*
 * timer.h
 *
 * Created: 4/10/2020 12:09:28 PM
 *  Author: Davo Pleteau
 */ 

#define clockCyclesPerMicrosecond() (16000000 / 1000000L)
#define clockCyclesToMicroseconds(a) ( (a) / clockCyclesPerMicrosecond() )
#define microsecondsToClockCycles(a) ( (a) * clockCyclesPerMicrosecond() )
#define MAX_INT32_VAL	0xFFFFFFFF

#ifndef TIMER_H_
#define TIMER_H_

/************************************************************************/
/*							Includes/Constants	 	                    */
/************************************************************************/
#include "avr\io.h"

/************************************************************************/
/*							Public Interfaces    	                    */
/************************************************************************/
void startMillisTimer();
void stopMillisTimer();
void updateMillis();
uint32_t getMillis();
void milli_delay(uint32_t milliseconds);
void micro_delay(uint32_t micro);

#endif /* TIMER_H_ */