#include<stdio.h>

int main(int argc, char *argv[]){
	
	int i=0;
	
	if(argc == 1){
		
		printf("You only have one argument. You suck.\n");
	}else if (argc>1&&argc<4){ //Is only a comprobation 
		
		printf("Here's your arguments:\n");  
		
		for(i=0; i<argc;i++){
			printf("%s",argv[i]); //Prints all the arguments until the fourth argument
		}
		printf("\n"); //is a space 
		
	}else{
		printf("You have too many arguments. You suck.\n"); //if something doesn't happens, this action will happen
	}
	
	return 0;
}


/*  

1th extra credit 
Operator && and
Operator || or 
Operator ! Not
operator != Not equal 
Greater than a > b 
less than a < b 
Greater than or equal to a >= b
Less than or equal to a <= b

2nd extra credit 
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc == 1) {
        printf("You only have one argument. You suck.\n");
    } else if (argc & 1) {
        printf("Here's your arguments:\n");

        for (i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }

        printf("\n");
    } else {
        printf("You have too many arguments. You suck.\n");
    }

    return 0;
}

3rd extra credit 
exercise 10
#include <stdio.h>

int main (int argc, char *argv[])
{
    int i = 0;
    
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 4;

    for (i = 0; i < num_states; i++) {
        if (i == 2) {
            break;
        }

        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
exercise 11
#include <stdio.h>

int main(int argc, char *argv[])
{
    

    int i = 0;
    while (i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 4;

    // watch for this
    i = 0;
    while (i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;

        if (i == 2) {
            break;
        }
    }

    return 0;
}
4th extra credit 
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc == 1) {
        printf("You don't have any argument.\n");
    } else if (argc == 2) {
        printf("You only have one argument. You suck.\n");
    } else if (argc > 1 && argc < 4) {
        printf("Here's your arguments:\n");

        for (i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }

        printf("\n");
    } else {
        printf("You have too many arguments. You suck.\n");
    }

    return 0;
}

*/
