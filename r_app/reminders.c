#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
//#include <gtk/gtk.h>
#include "reminders.h"

typedef struct addreminder {
	int date; //For a specific date it will repeat on. if == 0 then it does not count. It will be handed over to (see below).
	int day; //The first 7 days are for repeating, the 8th bit decides to repeat or not, like this -> MTWTFSSR = 10010111, where the "R" decides if it repeats or not if it is s. 
	int time;
	char reminder;
}a_reminder;

//TODO: Rename this and add the actual functioning code later, r/programmerHumor calls.
void must_not_complain() {
	a_reminder *a_rem = (a_reminder*)malloc(sizeof(a_reminder));


	free(a_rem);

}	
