#include<stdio.h>

int main(int argc, char *argv[]){
	int i=0;
	
	//go through each string in argv
	for(i=1; i<argc; i++){
		printf("arg %d: %s\n",i,argv[i]);
	}
	//let's make our own array of strings 
	char *states[]={
		"California", "Oregon",
		"Washington", "Texas"};
		
	int num_states=4; 
	
	for(i=0; i<num_states; i++){
		printf("state %d: %s\n", i, states[i]);
	}
	return 0;
}
/*
1th extra credit 

2nd extra credit 
a comma (,) operator, which is mainly used in this statement. 
This operator allows two expressions to appear 
in situations where only one expression would ordinarily be used.
3rd extra credit 
The term null, null, or DG is often used in computing to refer to nothing. 
In programming, null turns out to be a special value applied to a pointer (or reference) 
used to indicate that it is not pointing to a valid object or data.
4th extra credit 
I think, you can't do the reverse of this exercise :)



  */ 

