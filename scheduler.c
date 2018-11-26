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
	job_t j;

	int jobNumber;

	if (mode == 0) {
		printf("Then mode is FCFS\n");
		for (int i = 0; i < 6; i++) {
			j = *(job_t*) jobs->head;
			jobNumber = (j).number;
			printf("%d \n", jobNumber);

		}
	}



	return j;
}
