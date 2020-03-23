#include <stdio.h>

int main(int argc, char *argv[])
{
    // create two arrays we care about
    int ages[] = { 23, 43, 12, 89, 2 }; //This is an array that contains the ages 
    char *names[] = { //This is an array that contains the names 
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };
    
    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int); 
    int i = 0;
    
    // first way using indexing
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]); //Only prints the names and the ages 
        
    }
    
    printf("---\n");
    
    // setup the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;
    
    // second way using pointers
    for (i = 0; i < count; i++) {
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    }
    
    printf("---\n");
    
    // third way, pointers are just arrays
    for (i = 0; i < count; i++) {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }
    
    printf("---\n");
    
    // fourth way with pointers in a stuipd conplex way
    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }
    
    return 0;
}






/*
1st extra credit
for (i = 0; i < count; i++) {
    printf("%s has %d years alive.\n", *(names + i), *(ages + i));
}
2nd extra credit 
I don't know how to do this exercise 
3rd extra credit 
#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = {0};
    char name[4] = {'a'};

    int *pointerNumbers = numbers;
    char *pointerName = name;
    
   
    printf("numbers: %d %d %d %d\n", *pointerNumbers, *(pointerNumbers + 1), *(pointerNumbers + 2), *(pointerNumbers + 3));

    printf("name each: %c %c %c %c\n", *pointerName, *(pointerName + 1), *(pointerName + 2), *(pointerName + 3));

    printf("name: %s\n", pointerName);

    
    *pointerNumbers = 1;
    *(pointerNumbers + 1) = 2;
    *(pointerNumbers + 2) = 3;
    *(pointerNumbers + 3) = 4;

    
    *pointerName = 'Z';
    *(pointerName + 1) = 'e';
    *(pointerName + 2) = 'd';
    *(pointerName + 3) = '\0';

   
    printf("numbers: %d %d %d %d\n", *pointerNumbers, *(pointerNumbers + 1), *(pointerNumbers + 2), *(pointerNumbers + 3));

    printf("name each: %c %c %c %c\n", *pointerName, *(pointerName + 1), *(pointerName + 2), *(pointerName + 3));

    printf("name: %s\n", pointerName);

    char *another = "Zed";
   
    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

    return 0;
}
4th extra credit
 
#include <stdio.h>
#include <ctype.h>

int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for (i = 0; i < argc; i++) {
        print_letters(*(argv + i));
    }
}

void print_letters(char arg[])
{
    int i = 0;

    for (i = 0; *(arg + i) != '\0'; i++) {
        char ch = *(arg + i);

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
5th extra credit 
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    int i = 0;
    for (i = 0; i < 5; i++) {
        printf("value: %s, address: %p\n", *(names + i), names + i);
    }

    return 0;
}






 */
