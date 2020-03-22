#include<stdio.h>
int main(int argc, char *argv[]){
	if(argc !=2){
	printf("ERROR: You need one argument.\n");	//if you don't write an argument in the console 
	//This is how you abort a program
	return 1; 		
	}
	int i=0;
	for(i=0;argv[1][i] !='\0'; i++){ //This part, prints the letter 
		char letter = argv[1][i];
		
		switch(letter){ //In this part, is only checking if is a vowel
			case'a':
			case'A':
				printf("%d: 'A'\n",i);
				break;
			case'e':
			case'E':
				printf("%d: 'E'\n",i);
				break;	
			case'i':
			case'I':
				printf("%d: 'I'\n",i);
				break;
			case'o':
			case'O':
				printf("%d: 'O'\n",i);
				break;
			case'u':
			case'U':
				printf("%d: 'U'\n",i);
				break;		
			case'y':
			case'Y':
				if(i>2){
					//It's only sometimes y
					printf("%d: 'Y'\n",i);
					}
				break;		
			default: 
			printf("%d: %c is not a vowel\n",i,letter);
			
		}
		
		
	}
		
	return 0;
}

/*
1st extra credit 
#include <stdio.h>

char lower(char letter)
{
    if (letter >= 97 && letter <= 122) {
        return letter;
    } else if (letter >= 65 && letter <=90) {
        return letter + 32;
    } else {
        return letter;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        return 1;
    }

    int i = 0;
    for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];
        char lower=Lower(letter);

        switch (lower) {
            case 'a':
                printf("%d: 'A'\n", i);
                break;
            case 'e':
                printf("%d: 'E'\n", i);
                break;
            case 'i':
                printf("%d: 'I'\n", i);
                break;
            case 'o':
                printf("%d: 'O'\n", i);
                break;
            case 'u':
                printf("%d: 'U'\n", i);
                break;
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
}

2nd extra credit 

int i = 0;
    char letter = 0;
    for (i = 0; letter = argv[1][i], letter != '\0'; i++) {
    
3rd extra credit 
I don´t know :(

4th extra credit 
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        return 1;
    }

    int i = 0;
    for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];

        if (letter == 'a' || letter == 'A') {
            printf("%d: 'A'\n", i);
        } else if (letter == 'e' || letter == 'E') {
            printf("%d: 'E'\n", i);
        } else if (letter == 'i' || letter == 'I') {
            printf("%d: 'I'\n", i);
        } else if (letter == 'o' || letter == 'O') {
            printf("%d: 'O'\n", i);
        } else if (letter == 'u' || letter == 'U') {
            printf("%d: 'U'\n", i);
        } else if (letter == 'y' || letter == 'Y') {
            if (i > 2) {
                printf("%d: 'Y'\n", i);
            }
        } else {
            printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
}
Definitely the switch-case is better for great options


5th
If the "break" is out of all the if's,
 then the function may end well, but it will continue executing
 */



