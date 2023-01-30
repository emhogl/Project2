#include <stdio.h>
#include <stdlib.h>

#include<math.h>
#include "Questions.h"



void add_vectors(double vector1[],double vector2[],double vector3[],int size)
{
    /*vector3 should store the sum of vector1 and vector2. 
	You may assume that all three arrays have the size equal to n
	*/
	//write your code below

	int i; //i is the variable for index
	for (i = 0; i < size; i++) { //the index of a vector starts at 0 and moves up until one less than the size of the vector
		vector3[i] = vector1[i] + vector2[i] ; //vectors 1 and 2, at the same index, are added and assigned to the same index of vector 3
	}
}


double scalar_prod(double vector1[],double vector2[],int size)
{
	// this is the variable holding the scalar product of the two vectors
    double prod=0;

	//write your code below to calculate the prod value
	int i; //i is the variable for index
    for (i = 0; i < size; i++) { //the index of a vector starts at 0 and moves up until one less than the size of the vector
    		prod += (vector1[i] * vector2[i]) ; //each corresponding element of vectors 1 and 2 are multiplied and added to the variable "prod"
    	}
	
	// return the result
    return prod;
}

double norm2(double vector1[], int size)
{
	//this is the variable holding the L2 norm of the passed vector
    double L2;
	
    
	//write your code here
	// you should call function scalar_prod().
	
    L2 = sqrt(scalar_prod(vector1, vector1, size)) ; //the square root of the scalar product of vector1 with itself is the norm

	//finally, return the L2 norm 
    return L2;
}
