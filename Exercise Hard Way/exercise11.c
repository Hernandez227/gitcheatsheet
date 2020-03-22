#include<stdio.h>

int main(int argc, char *argv[]){
	
	//go through each string in argv
	
	int i= 0; 
	while(i<argc){
		printf("arg %d: %s\n", i, argv[i]);
		i++;
		}
	//Let's make our own array of strings 
	char *states[]={
	"California","Oregon",
	"Washington", "Texas"
	};
	
	int num_states=4;
	i=0; 
	while(i<num_states){
		printf("state %d: %s",i,states[i]);
		i++;
	}
	return 0;
}


/* 
1th extra credit 
#include <stdio.h>

int main(int argc, char *argv[])
{

    int i = argc - 1;
    while (i >= 0) {
        printf("arg %d: %s\n", i, argv[i]);
        i--;
    }
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };
    int num_states = 4;
    i = num_states - 1;
    while (i >= 0) {
        printf("state %d: %s\n", i, states[i]);
        i--;
    }

    return 0;
}
2nd extra credit 

int num_states = 4;

    i = 0;
    while (i < argc) {
        states[i] = argv[i];
        i++;
    }
3rd extra credit 
I don't know teacher :(

4th extra credit 
No, because the pointer *states pointed at a different memory space







*/
