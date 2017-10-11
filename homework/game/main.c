#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int searchedNum=0;
    int userNum=0;
    char answer;

    for(;;){
        srand(time(NULL));
        searchedNum = rand()%10;
        printf("You have three attempts to guess the number\n");
        int i;
        for (i = 0; i < 3; i++){
            printf("Enter positive number(0-9): ");
            int y=scanf("%d", &userNum);

            while (y!=1||userNum<0) {
                fflush (stdin);
                printf("\n    Wrong!\n\nEnter positive number(0-9): ");
                y=scanf("%d", &userNum);
            }

            if(userNum<searchedNum){
                printf("\nBigger!\n\n");
            }

            if(userNum>searchedNum){
                printf("\nLower!\n\n");
            }

            if (userNum==searchedNum){
            printf("\nYahoooo! You win!\n");
            break;
            }
        }

        for(;;){
            printf("\n++++GAME OVER++++\nLet's play again(y/n)? ");
            scanf(" %s", &answer);
            if (answer == 'n'){
            return 0;
            }
            if (answer == 'y'){
            system ("cls");
            break;
            }
            if (answer != 'y'){
            printf("wrong answer.\n If you want to continue play, enter \"y\". To exit, enter \"n\"");
            continue;
            }
        }
    }
}
