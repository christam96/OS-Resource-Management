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
	int counter = 0;

	/********************************************************************
	* Mode 0: First Come First Serve (FCFS)
	* Use linked list function to grab the first element of jobs list
	*********************************************************************/
	if (mode == 0) {
			j = (job_t*) dequeue(jobs);
	}

	/******************************************************************** * Mode 1: Last In First Out (LIFO)
	* Use linked list function to get the list element of jobs list
	********************************************************************/

	if (mode == 1) {
			j = (job_t*) pop(jobs);
	}

	/********************************************************************
	* Mode 2: Shortest Job First (SJF)
	* Each time this function is called, it will search the list for the job with the shortest required time in the current version of the list. Once found, it will dequeue and send return back to simulate.c
	********************************************************************/
	if (mode == 2) {
		tempJob1 = (job_t*) dequeue(jobs);
		while (counter < jobs->size) {
			tempJob2 = (job_t*) dequeue(jobs);
			if (tempJob2->required_time < tempJob1->required_time) {;
				enqueue(jobs, tempJob1);
				tempJob1 = tempJob2;
			} else {
				enqueue(jobs, tempJob2);
			}
			counter++;
		}
		j = tempJob1;
	}

	/******************************************************************* * Mode 3: Round Robin (RR)
	* In an order similar to FCFS, use the linked list function to get the first element of the jobs list. Implementation for RR scheduling will happen inside simulate.c, namely where the program must respect the time quantum during the job execution and enqueue it back into the list if work is still left to be done after its CPU share
	********************************************************************/
	if (mode == 3) {
		j = (job_t*) dequeue(jobs);
	}

	return j;
}
