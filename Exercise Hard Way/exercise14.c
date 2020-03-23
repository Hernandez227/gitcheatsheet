#include <stdio.h>
#include <ctype.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;
    
    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];
        
        if (can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    
    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}


/*   
1st extra credit
not, isn't neccesary the function can_print_it
2nd extra credit
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int can_print_it(char ch);
void print_letters(char arg[], int length);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i], strlen(argv[i]));
    }
}

void print_letters(char arg[], int length)
{
    int i = 0;
    
    for (i = 0; i < length; i++) {
        char ch = arg[i];
        
        if (can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    
    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}

4th extra credit
This is the good way to format it 

int foo(int a, char *p) 
{ 
    return 0; 
}







*/
