#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int randomnumber=(rand()%100)+1;
    int no_of_guesses=0;
    int guessed;
   
    do{
         printf("GUESS THE NUMBER\n");
         scanf("%d",&guessed);
         if(guessed>randomnumber){
            printf("LOWER NUMBER PLEASE!\n");
         }
         else if(guessed<randomnumber){
            printf("HIGHER NUMBER PLEASE!\n");}
         else{ printf("CONGRATS\n");}   
         no_of_guesses++;
    }while(guessed!=randomnumber);

    printf("YOU GUESSED THE NUMBER IN %d GUESSES",no_of_guesses);

    return 0;
}