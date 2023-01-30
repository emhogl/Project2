#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"

int string_length(const char str[]) {
	int exit=0, length=0; //exit is the flag that allows the while loop to end; length is the variable representing the length of the string
	while (exit<1) {
		if (str[length] != '\0') { //counts the length as long as it is not the zero character
			length++; //add 1 to length
		}
		else {
			exit=1;
		}
	}
	return length;
}

void string_copy(const char source[], char destination[], int n){
	
	int length, i; //length represents length of source; i is index running through source and destination character arrays

	length = string_length(source) ; //calling function from above


	for (i=0; i<(n-1); i++) {
		if(i<length){ //as long as the index is within the range of the source string, then the destination copies that entry
			destination[i]=source[i];
		}
		else { //exits for loop
			break;
		}
	}

	destination[n-1]='\0'; //defines last entry to be the zero character
}
