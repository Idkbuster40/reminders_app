#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
//#include <gtk/gtk.h>
#include "reminders.h"

typedef struct addreminder {
	int date; //Out of 365 (or 366 every leap year), it takes a number, TODO: Add leap year detection.
	char r_day; //The first 7 days are for repeating, the 8th bit decides to repeat or not, like this -> MTWTFSSR = 10010111, where the "R" decides if it repeats or not if it is set. 
	int time; //The time the reminder will trigger at. I want to also make it trigger repeatedly. 
	char reminder; //The reminder text. Should be obvious. Limiting to 128c to prevent issues.
}a_reminder;

//TODO: Rename this and add the actual functioning code later, r/programmerHumor calls.
void must_not_complain() {
	a_reminder *a_rem = (a_reminder*)malloc(sizeof(a_reminder));


	free(a_rem);

}	

void f_reminders() { //The .reminders file placed under /home/<insert_username>/ See below on how this works.
	/* Structure:
	* Date:Day:Time:"Reminder"
	*/
	FILE *reminder_f = fopen("/home/kaktus/.reminders", "r");
	if(!reminder_f) {
		perror("No reminders file found, creating one.");
	FILE *reminder_f = fopen("/home/kaktus/.reminders", "a");
//	FILE *reminder_f = fwrite()
	fprintf(reminder_f, "This is something, please work.");
	//FILE *reminder_f = fputc('\0', reminder_f);
	FILE *reminder_f = fclose(reminder_f);
		//printf(*reminder_f);
	}
}

