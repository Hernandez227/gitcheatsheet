#include<stdio.h>

int main(int argc,char *argv[]){
	
	int numbers[4]={0}; //This is an array that contains four numbers
	char name[4]={'a'}; // This an array that contains four chars
	
	//first, print them out raw 
	
	printf("numbers %d %d %d %d\n",
		numbers[0],numbers[1],
		numbers[2],numbers[3]); //The only thing that it does is print the number 0
	
	printf("Name each: %c %c %c %c\n",
		name[0],name[1],
		name[2],name[3]); //The only thing that it does is print the word a
		
	printf("Name:%s\n",name); //Is the same that the previous array
		
	//Setup the numbers 
	
	numbers[0]=1;
	numbers[1]=2;
	numbers[2]=3;
	numbers[3]=4;
	
	//Setup the numbers 
	
	name[0]='Z';
	name[1]='e';
	name[2]='d';
	name[3]='\0';
	
	//Then print them out initialized
	
	printf("Numbers: %d %d %d %d\n",
		numbers[0],numbers[1],
		numbers[2],numbers[3]);
		
	printf("name each: %c %c %c %c\n",
		name[0],name[1],
		name[2],name[3]);	
	
	//Print the name like a string 
	printf("name: %s\n",name);
	//Another way to use name 
	
	
	
	char *another = "Zed";
	
	printf("another: %s\n", another);
	printf("another each %c %c %c %c\n",
		another[0],another[1],
		another[2],another[3]);
		
return 0;	

/*     
1st extra credit
[Error] 'a' undeclared (first use in this function) and is the same in the others arrays
	numbers[0]=a;
	numbers[1]=b;
	numbers[2]=c;
	numbers[3]=d;
2nd extra credit
In this, I didn't see any warning or error 
	name[0]=1;
	name[1]=2;
	name[2]=3;
	name[3]=4;

Is the same that the previous exercise, when I changed "char" to "int", nothing doesn´t happens
3th extra credit 
Each for each thing, with a for cycle, with printf
4th extra credit
I don't know teacher :(
5th
[Error] conflicting types for 'name'
char *name;
	printf("name:%s\n",name);
	printf("name each %c %c %c %c\n",
		name[0],name[1],
		name[2],name[3]);



*/






}
