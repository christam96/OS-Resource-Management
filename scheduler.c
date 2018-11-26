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
	




	return j;
}
