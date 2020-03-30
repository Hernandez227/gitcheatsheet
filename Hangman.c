 #include<stdio.h>
#include<string.h>

int main() {
    char frase[60],rep[100],temporal[100];
    char pal;
    int lenght,i,k,start,hits=0,temp=0,opportunities=5;
    int repeat=0,win=0;
   
    printf("The hangman game\n");
    printf("Introduce the word that you want to guess\n");
    gets(frase);
   
    system("cls");
   	lenght = 0;  start = 0; k = 0;
   
    rep[0] = ' ';
    rep[1] = '\0';
   
   
    do {
                system("cls");
        temp=0;
   
        if(start == 0) {
         for(i=0;i<strlen(frase);i++) {
          if(frase[i] == ' ') {
            temporal[i] = ' ';
             lenght++;
          }
          else {
             temporal[i] = '_';       
             lenght++;
          }
         }
        }
   
        start = 1;
       
        temporal[lenght] = '\0';
       
        for(i=0;i<strlen(rep);i++) {
           if(rep[i] == pal) {
            repeat = 1;
            break;
          }
          else {
           repeat = 0;
         }
        }
       
        if(repeat == 0) {
         for(i=0;i<strlen(frase);i++) {
                    if(frase[i] == pal) {
             temporal[i] = pal;
              hits++;
              temp=1;
            }
          }
        }
       
        if(repeat == 0) {
         if(temp == 0) {
           opportunities = opportunities - 1;
         }
        }
        else {
         printf("Is this character\n");
         
        }
       
     
       
        for(i=0;i<strlen(temporal);i++) {
         printf(" %c ",temporal[i]);
        }
       
        if(strcmp(frase,temporal) == 0) {
            win = 1;
            break;
        }
       
        printf("Letras Acertadas:\n%d",hits);
        printf("Remaining opportunities:\n %d",opportunities);
   
        rep[k] = pal;
        k++;
       
        if (opportunities==0)
        {
           break;
        }
     
        printf("Introduce a letter\n");
        scanf("\n%c",&pal);
      
    }while(opportunities!= 0);
   
   
    if(win) {
                
        printf("Yes, you win :3.\n");
    }
    else {
            
        printf("You're a loseeeer.\n");
    }
    system("PAUSE");
    return 0;

}  
