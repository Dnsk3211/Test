#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int searchedNum = 0;
    int userNum = 0;
    char userAnswerExit;

    for(;;){
        srand(time(NULL));
        searchedNum = rand()%10;
        printf("You have three attempts to guess the number\n");
        int i;

        for (i = 0; i < 3; i++){

            printf("Enter positive number(0-9): ");
            userNum = getche();

            while (!strchr ("1234567890", userNum)) {
                fflush (stdin);
                printf("\nwrong!\nEnter positive number(0-9): ");
                userNum = getche();
            }

            if(userNum < searchedNum){
                printf("\nBigger!\n\n");
            }

            if(userNum > searchedNum){
                printf("\nLower!\n\n");
            }

            if (userNum == searchedNum){
                printf("\nYahoooo! You win!\n");
                break;
            }
        }
        printf("\n++++GAME OVER++++\n");
        for(;;){
            printf("\nLet's play again(y/n)? ");
            char tempAnswerExit = getche(" %s", &userAnswerExit);
            if (tempAnswerExit == 'n'){
                return 0;
            }
            if (tempAnswerExit == 'y'){
                system ("cls");
                break;
            }
            if (tempAnswerExit != 'y'){
                printf("\n   wrong answer.\n If you want to continue play, enter \"y\". To exit, enter \"n\"");
            }
        }
    }
}
