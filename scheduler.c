/******************************************************************************
*
* Name: 	Zaid Albirawi
* Email: 	zalbiraw@uwo.ca
*
* scheduler.c
*
******************************************************************************/

#include "scheduler.h"

job_t *get_next_job(int mode, d_linked_list_t* jobs) {
	job_t *j;

	int jobNumber;

	if (mode == 0) {
		printf("Then mode is FCFS\n");
		for (int i = 0; i < 6; i++) {
			printf("%s \n", jobs[i]);

	}



	return j;
}
