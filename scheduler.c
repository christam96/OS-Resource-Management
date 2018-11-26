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

	int jobNumber, required_mem, required_time;

	if (mode == 0) {
		printf("Then mode is FCFS\n");
		for (int i = 0; i < jobs->size; i++) {
			j = (job_t*) dequeue(jobs);
			jobNumber = j->number;
			required_mem = j->required_memory;
			required_time = j->required_time;

			printf("%d %d %d \n", jobNumber, required_mem, required_time);
		}
	}


	return 0;
	//return j;
}
