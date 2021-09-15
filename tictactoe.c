// the uniqitous tic tac toe game, enjoy

#include<stdio.h>

int main(void){

    char play,gameboard[]={"123456789"},mark;
    char p1[20],p2[20];
    char test;
    _Bool gameover = 1;
    int pos;

    printf("Shall we play a game of tic tac toe? enter Y or N.\n");
    scanf("%c",play);


    if (play == 'Y')
    {
        printf("Please enter player one's name\n");
        scanf("%s",p1);

        printf("Please enter player two's name\n");
        scanf("%s",p2);

    }

    while(play == 'Y')
        {
            while (gameover)
            {
                printf(" %c | %c | %c\n", gameboard[0], gameboard[1], gameboard[2]);
                printf("-------------\n");
                printf(" %c | %c | %c\n", gameboard[3], gameboard[4], gameboard[5]);
                printf("-------------\n");
                printf(" %c | %c | %c\n\n",gameboard[6], gameboard[7], gameboard[8]);

                printf("what position on the board would you like to take 1 - 9?\n");
                scanf("%d",&pos);

                printf("Current Player, are you Xs or Os?\n");
                scanf("%c",mark);

               

                gameboard[pos-1] = mark;

                printf(" %c | %c | %c\n",gameboard[0], gameboard[1], gameboard[2]);
                printf("-------------\n");
                printf(" %c | %c | %c\n",gameboard[3], gameboard[4], gameboard[5]);
                printf("-------------\n");
                printf(" %c | %c | %c\n\n",gameboard[6], gameboard[7], gameboard[8]);

                printf("Do we have a winner? Y or N?");
                scanf("%c",test);
                
                if (test == 'Y')
                    gameover = 0;
            }

        printf("Shall we play another game of tic tac toe? enter Y or N.\n"); //another game?
        scanf("%c",play);
        }
    // end game

 

    printf("Thanks for playing, goodbye :) \n");
    return 0;
}
