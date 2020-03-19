#include <stdio.h>

int main(int argc, char *argv[]){
	
	int bugs= 100;         // Is only the declaration of the variables
	double bug_rate = 1.2; 
	
	printf("You have %d bugs at the imaginary rate of %f.\n",bugs,bug_rate);
	
	unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L; // "Long is for create a big number 
	printf("The entire universe has %ld bugs.\n", universe_of_defects); //"%ld" is a modifier and the only thing that it does is print a long number
	
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);
	
	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n", part_of_universe); // "%e" is only for scientific notation
	
	// This makes no sense, just a demo of something weird
	
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%.\n", care_percentage);
	
	return 0;
	
}


/* First extra credit 
	[Warning] integer constant is too large for it's type 
	[Warning] this decimal constant is unsigned inly in ISO C90
	[Warning] overflow in implicit constant conversion [-Woverflow]
	
	Second extra credit 
	I thought that what prints these large variables is the "% ld", because it makes the decimal numbers large
	
	Third extra credit
	It is the same value, only it does not keep its sign
	
	Fourth extra credit 
	A variable you declare unsigned will always use positive integer values, never negative.
	
	Fifth extra credit 
	Because you are converting all the values that are characters to integer values with which you can do mathematical operations
	
	
	
*/  
