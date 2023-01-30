#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void addEff(int val1[], int val2[], int val3[], int pos1[], int pos2[], int pos3[], int k1, int k2){

	int i1=0; //counter variable for vector 1
	int i2=0; //counter variable for vector 2
	int i3=0; //counter variable for vector 3

	while (i1<k1 || i2<k2) { //block iterates as long as i1 OR i2 are less than their corresponding vector's size
		if (i1<k1 && i2<k2) { //block iterates if i1 AND i2 are less than their corresponding vector's size
			if (pos1[i1]<pos2[i2]) { //as long as the position value of vector 1 is less than that of vector 2, vector 1's value and position are assigned to vector 3
				pos3[i3] = pos1[i1];
				val3[i3] = val1[i1];
				i1 +=1; //increase counter variable for vector 1 by 1
				i3 += 1 ; //increase counter variable for vector 3 by 1
			}

			else if (pos1[i1]>pos2[i2]) { //as long as the position value of vector 2 is less than that of vector 1, vector 2's value and position are assigned to vector 3
				pos3[i3] = pos2[i2];
				val3[i3] = val2[i2];
				i2 +=1; //increase counter variable for vector 2 by 1
				i3 += 1 ; //increase counter variable for vector 3 by 1
			}

			else if ((pos1[i1]==pos2[i2]) && (val1[i1]+val2[i2] != 0)) { //if the position for vectors 1 and 2 are the same AND the sum of their values is nonzero, then include the position and sum in vector 3's pos and val arrays
				pos3[i3] = pos1[i1];
				val3[i3] = val1[i1] + val2[i2];
				i1 += 1; //increase counter variable for vector 1 by 1
				i2 += 1; //increase counter variable for vector 2 by 1
				i3 += 1 ; //increase counter variable for vector 3 by 1
			}

			else if ((pos1[i1] == pos2[i2]) && (val1[i1]+val2[i2] == 0)) { //if the position for vectors 1 and 2 are the same BUT the sum of their values equal 0, then skip this entry
				i1 += 1; //increase counter variable for vector 1 by 1
				i2 += 1; //increase counter variable for vector 2 by 1
			}

		}

		else if (i1<k1) { //block iterates if i1 is less than the size of vector 1
			pos3[i3] = pos1[i1];
			val3[i3] = val1[i1];
			i1 += 1; //increase counter variable for vector 1 by 1
			i3 += 1 ; //increase counter variable for vector 3 by 1
		}

		else if (i2<k2) { //block iterates if i2 is less than the size of vector 2
			pos3[i3] = pos2[i2];
			val3[i3] = val2[i2];
			i2 += 1; //increase counter variable for vector 2 by 1
			i3 += 1 ; //increase counter variable for vector 3 by 1
		}
	}

}
