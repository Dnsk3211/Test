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

        int i;


        for (i = 0; i < 3; i++){
            printf("Enter positive number(0-9): ");
            int y=scanf("%d", &userNum);

            while (y!=1||userNum<0) {
                fflush (stdin);
                printf("wrong!\nEnter positive number(0-9): ");
                y=scanf("%d", &userNum);
            }

            if (userNum<0){
                printf("\nOops, your number is negative!\n");
                continue;
            }

            if(userNum<searchedNum){
                printf("Bigger!\n");
            }

            if(userNum>searchedNum){
                printf("Lower!\n");
            }
            if (userNum==searchedNum){
            printf("\nYahoooo! You win!\n");
            break;
            }
        }
        for(;;){
            printf("\nLet's play again(y/n)? ");
            scanf(" %s", &answer);
            if (answer == 'n'){
            return 0;
            }
            if (answer == 'y'){
            break;
            }
            if (answer != 'y'){
            printf("wrong answer.\n If you want to continue play, enter \"y\". To exit, enter \"n\"");
            continue;
            }
        }



    }

}
