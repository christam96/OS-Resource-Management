/******************************************************************************
*
* Name: 	Zaid Albirawi
* Email: 	zalbiraw@uwo.ca
*
* scheduler.c
*
******************************************************************************/

#include "scheduler.h"

int countJobsScheduled = 0;

job_t *get_next_job(int mode, d_linked_list_t* jobs) {
	job_t *j;

	if (countJobsScheduled == jobs->size) {
		j = NULL;
	}

	// Mode 0: First Come First Serve (FCFS)
	//
	if (mode == 0) {
			j = (job_t*) dequeue(jobs);
			countJobsScheduled++;
	}

	// Mode 1: Last In First Out (LIFO)
	if (mode == 1) {
			j = (job_t*) pop(jobs);
			countJobsScheduled++;
	}

	// Mode 2: Shortest Job First (SJF)





	return j;
}
