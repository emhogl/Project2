#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"
#include "math.h"


int is_diag_dom(int mat[][N2]){

    //this is the flag that is returned to tell whether the mat is diagonally
	int isDiag=0;
	
	//write your code below
	//Return 1 if the matrix is diagonally dominant and 0 otherwise
	int row; //row is the variable for row index
	int col; //col is the variable for column index
	int add=0; //add is the variable holding the sum of the absolute value of the non-diagonal row entries
	int count=0; //count is the variable holding the number of rows where the absolute value of the diagonal entry is greater than the sum of the absolute value of the non-diagonal row entries
	int compare; //compare is the variable holding the absolute value of the diagonal entry of a given row
	
	for (row=0; row<N2; row++) { //the index of the row starts at 0 and moves up until one less than the size of the row
		for (col=0; col<N2; col++) { //the index of the column starts at 0 and moves up until one less than the size of the column
			if (row != col) { //as long as the row and column values are not equivalent (i.e. not a diagonal entry), then add the absolute value of that entry to the variable "add"
				add += fabs(mat[row][col]) ;
			}
			else if (row == col) { //if the row and column values are equivalent (i.e. a diagonal entry), assign the absolute value of that entry to variable "compare"
				compare = fabs(mat[row][col]) ;
			}
		}
		if (compare > add) { //if the absolute value of the diagonal entry is greater than the sum of the absolute value of the other entries, than add one to variable "count"
			count = count + 1 ;
		}
		add = 0; //assign add back to 0 for the next iteration
	}
	if (count == N2) { //if variable "count" equals the number of rows, then the matrix is diagonally dominant
		isDiag = 1; //assign flag to 1 if the matrix is diagonally dominant
	}

    return isDiag;
}
