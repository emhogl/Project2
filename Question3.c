#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"

void diag_scan(int mat [][N3], int arr []) {
	
	int row=0, col=0; //row is the variable for row index; col is the variable for column index
	int initial; //initial is the variable for
	int index=0; //index is the variable for
	int cap = 2*N3-1; //cap is the number of iterations required


	for (initial = 0; initial <= cap; initial++) { //the initial value of the row changes throughout the program
		col = 0; //column always starts at 0
		for (row=initial; row >= 0; row--) {
			if (row < N3 && col < N3) { //as long as the row and column index are less than the size
				arr[index] = mat[row][col] ; //the matrix value at that row and column are assigned to the next value in the array
				index ++; //index increases by 1 each iteration
			}
			col++; //column index increases by 1 each iteration in which the initial row value changes
		}
	}

}
