#include <stdio.h>
#include <ctype.h>

int main(){
    char question[][100] = {"1. What year did the C language debut?",
                            "2. Who is credited wht creating C?",
                            "3. What is the predecessor of C?"};

    char option[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                        "A. Michael Jackson", "B. Tyler the Creator", "C. Will Smith", "D. Brock Lesnar",
                        "A. C", "B. C++", "C. C#", "D. HTML"};

    char answer[3] = {'B', 'A', 'B'};
    int size = sizeof(question) / sizeof(question[0]);

    char guess;
    int score;
    for(int i = 0; i < size; i++){  
        printf("%s\n", question[i]);
        
        for(int j = i * 4; j < (i * 4) + 4; j++){
            printf("%s\n", option[j]);
        }
        printf("Whats your answer?: ");
        scanf("%c", &guess); getchar();
        
        guess = toupper(guess);
        if(guess == answer[i]){
            printf("You're right!\n\n");
            score++;
        }
        else printf("Sorry but you're.. WRONG\n\n");
    }
    printf("Your final score: %d/3\n", score);

    return 0;
}