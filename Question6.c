#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void efficient(const int source[], int val[], int pos[], int size){

	int i, index=0; //variable "i" is the index for the source array; variable "index" is the index for the pos and val arrays

	for (i=0; i<size; i++) { //the index of the source array starts at 0 and moves up until one less than the size of the array
		if (source[i] != 0) { //if the entry is not 0, then include the value and position of this entry in the val and pos arrays
			pos[index] = i ;
			val[index] = source[i] ;
			index++ ; //increase the index by 1

		}
	}

}

void reconstruct(int source[], int m, const int val[], const int pos[], int n){

	int i, index; //variable "i" is the index for the source array; variable "index" is the index for the pos and val arrays

	for (i=0; i<m; i++) { //the index of the source array starts at 0 and moves up until one less than the size of array source
		source[i] = 0 ; //initialize all values to 0
	}
	for (index=0; index<n; index++) { //assign all values at their corresponding position to the source array
		source[pos[index]] = val[index] ;
	}

}
