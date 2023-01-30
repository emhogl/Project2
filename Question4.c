#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Questions.h"

void letter_freq(const char word[], int freq[]){
	int i=0; //i is the variable for index of the const char array
	int index; //index is the variable for the index of the frequency array
	int letter; //letter is the variable assigned to the string entry at a given index

	while (word[i] != '\0') { //execution of next block occurs for every character other than '\0' in the string

		letter = word[i]; //assign the letter at that index to the variable "letter"
		if ('A' <= letter && letter <= 'Z'){ //block executes if the letter is a capital letter
			index = letter - 'A' ; //identifies the proper index for that letter
			freq[index] +=  1; //frequency of that letter increases by 1

		}
		else if ('a' <= letter && letter <= 'z') { //block executes if the letter is a lowercase letter
			index = letter -'a' ; //identifies the proper index for that letter
			freq[index] +=  1; //frequency of that letter increases by 1

		}
		i += 1 ; //index increases by 1
	}

   
}
