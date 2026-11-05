#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int min, max, life;
    printf("Please input the minimum and maximum number that you'd like to play: ");
    scanf("%d %d", &min, &max);
    printf("Pleae input your live: ");
    scanf("%d", &life);
    int guess;
    int random = rand() % max + min;
    printf("\nGuess the number: ");
    scanf("%d", &guess);
    life--;

    while(guess != random){
        printf("Wrong Answer! ");
        if(guess < random) printf("The number is higher!\n\n");
        else printf("The number is lower!\n\n");
        printf("Guess the number: ");
        scanf("%d", &guess);
        life--;

        if(life == 0) break;
    }
    if(life == 0) printf("YOU LOSE\nThe number is %d\n", random);
    else{
        printf("You GUESS the number! The number is %d\n", random);
        printf("Life remaining: %d\n", life);
    }
    return 0;
}