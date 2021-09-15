// GUESS A NUMBER GAME

#include<stdio.h>
#include<math.h>


int main(void){

    int guess=101, number, tries=1;


    srand(time(NULL));  // init random number generator seed
    number = (rand() % 100)+1; // assign random number to number variable

    while(guess != number)
    {
        printf("Guess a number between 1 and 100\n");
        scanf("%d", &guess);
    
        if(guess == number)
        {
            printf("YOU ARE A WINNER!!! it took you %d attempts\n",tries);
            return(0);
        }

        if(guess < number)
        {
            printf("Sorry that guess was too LOW, try again!\n");
            tries++;
        }

        if(guess > number)
        {
            printf("Sorry that guess was too HIGH, try again!\n");
            tries++;
        }

    }
  


return(0);
}