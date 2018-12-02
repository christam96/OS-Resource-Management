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
	job_t *tempJob1, *tempJob2;

	// Mode 0: First Come First Serve (FCFS)
	//
	if (mode == 0) {
			j = (job_t*) dequeue(jobs);
	}

	// Mode 1: Last In First Out (LIFO)
	if (mode == 1) {
			j = (job_t*) pop(jobs);
	}

	// Mode 2: Shortest Job First (SJF)
	if (mode == 2) {
		tempJob1 = (job_t*) dequeue(jobs);
		for (int i=0; i<jobs->size; i++) {
			printf("size: %d", jobs->size);
			tempJob2 = (job_t*) dequeue(jobs);
			if (tempJob2->required_time < tempJob1->required_time ) {
				enqueue(jobs, tempJob1);
				tempJob1 = tempJob2;
			}
		}
		j = tempJob1;
	}







	return j;
}
