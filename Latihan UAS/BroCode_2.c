#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));
    int min, max;
    int remaining;
    
    printf("Insert the range of your guess\n");
    printf("Min: ");
    scanf("%d", &min);
    printf("Max: ");
    scanf("%d", &max);
    printf("Insert your amount of attempts: ");
    scanf("%d", &remaining);

    int Guess = -1;
    int TotalRemaining = remaining;
    char answer[10];
    int count = 0;

    while(strcmp(answer, "no") != 0){
        int TheNumber = rand() % max + min;

        count = 0;
        remaining = TotalRemaining;
        printf("\n=====================\n");
        printf("Guess the Number: ");
        scanf("%d", &Guess);
        puts("");
        count++;

        while(Guess != TheNumber && remaining != 1){
            if(Guess < TheNumber){
                remaining--;
                count++;

                printf("The number is higher!\n");
                printf("Guess remaining: %d\n", remaining);
                printf("Guess: ");
            }
            else{
                remaining--;
                count++;

                printf("The number is lower!\n");
                printf("Guess remaining: %d\n", remaining);
                printf("Guess: ");
            }
            scanf("%d", &Guess);
            puts("");
        }
        if(remaining == 1){
            printf("Oops! You LOST\n");
            printf("The answer: %d\n", TheNumber);
        }
        else{
            printf("Congrats! The number is %d\n", TheNumber);
            printf("Guessing Attempts: %d/%d\n", count, TotalRemaining);
        }
            printf("Play Again? (yes/no)\n");
            scanf("%s", &answer);
    }
    return 0;
}