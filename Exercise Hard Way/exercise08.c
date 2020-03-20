#include<stdio.h>

int main(int argc, char *argv[]){
	
	
	int areas[]={10,12,13,14,20}; //This is the size of each number
	char name[]= "Zed"; //This a name 
	char full_name[]={ 
	'Z','e','d',
	' ','A','.',' ',
	'S','h','a','w','\0' 
	};
	
	printf("The size of an int: %ld\n",sizeof(int)); //In this, you can see the size of the storage that the arrays is store it
	printf("The size of areas (int[]): %ld\n",sizeof(areas)); //Is the same that the previous printf
	printf("The number of ints in areas: %ld\n", sizeof(areas)/sizeof(int));
	printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);
	
	printf("The size of a char %ld\n", sizeof(char));
	printf("The size of name(char[]): %ld\n", sizeof(name)); 
	printf("The number of chars: %ld\n", sizeof(name)/sizeof(char)); // Is counting the number of chars in the variable "name"
	
	printf("The size of full_name (char[]): %ld\n", sizeof(full_name)/ sizeof(char)); //Is counting the number of char in the variable "full_name"
	printf("The number of chars: %ld\n",sizeof(full_name)/sizeof(char)); // Is the same that in the previous printf
	
	printf("name=\"%s\" and full_name=\"%s\"\n",name, full_name); //Is printing the chars in the variable "full_name"
	
	return 0;	
}


/*  Extra credit 

	1th extra credit 
	int areas[0]=10;
	int areas[1]=12;
	int areas[2]=13;
	int areas[3]=14;
	int areas[4]=20;

	2nd extra credit
	
	char name[0]="Z";
	char name[1]="e";
	char name[2]="d";
	char name[3]="\0";
	
	char full_name[0]="Z";
	char full_name[1]="e";
	char full_name[2]="d";
	char full_name[3]=" ";
	char full_name[4]="A";
	char full_name[5]=".";
	char full_name[6]=" ";
	char full_name[7]="S";
	char full_name[8]="h";
	char full_name[9]="a";
	char full_name[10]="w";
	char full_name[11]="\0";
	
	3rd extra credit 
	
    char areas[0]=name[0];
	
	4th extra credit 
	The size of a word is thus CPU-specific. Many different word sizes have been used,
	including 6-, 8-, 12-, 16-, 18-, 24-, 32-, 36-, 39-, 40-, 48-, 60-, and 64-bit.
*/

