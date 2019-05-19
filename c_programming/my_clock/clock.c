#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include "alarm.h"


int main (void) {
   time_t eTime;			// time from Epoch
   struct tm *locTime;		// structure holding readable time info
   char option; 
   
   printf("Date:\t\tCurrent time:\t\tAlarm time:\tAtarm state:\n");
   while(1) {
   		/* get time from epoch and recalculate it to local time */
   		eTime = time( NULL );
   		locTime = localtime( &eTime );
   		
   		/* printing the time */
   		printf(	
		   		"\r%4d-%02d-%02d\t%02d:%02d:%02d\t\t%02d:%02d\t\t%s", 
				(*locTime).tm_year+1900, (*locTime).tm_mon+1, (*locTime).tm_mday,
		   		(*locTime).tm_hour, (*locTime).tm_min, (*locTime).tm_sec,
		   		alarmTime.tm_hour, alarmTime.tm_min,
		   		getAlarmStatus()
		);
   		fflush(stdout);
   		
   		if(kbhit()) {
   			option = getch();
   			if(option=='a') setAlarm(11, 25);
		   }
		
   		alarm(locTime);
   }
   
   return(0);
}

/*
TODO ideas:
- set alarm time
- display 'hello message'
- save/read hello message to/from file
*/
