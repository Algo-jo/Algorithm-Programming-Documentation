#include <stdio.h>
#include <string.h>
int main(){

    // int testcase;
    // scanf("%d", &testcase);
    // for(int i = 0; i < testcase; i++){
    //     char string[101];
    //     int Alfa_storage[26];
    //     char chars;
    //     int valid = 0;

    //     scanf("%s", string);
    //     for(int j = 0; j < strlen(string); j++){
    //         chars = string[j];
    //         Alfa_storage[chars - 'a'] = 1;
    //     }

    //     for(int k = 0; k < 26; k++){
    //         if(Alfa_storage[k] == 1){
    //             valid++;
    //         }
    //     }
    //     if(valid >= 3) printf("UNBREAKABLE\n");
    //     else if(valid < 3) printf("BREAKABLE\n");
    // }
    // return 0;

    // char string[101];
    // scanf("%s", string);

    // int entrance = -1, treasure = -1, exit = -1;
    // for(int i = 0; i < strlen(string); i++){

    //     if(string[i] == '|'){
    //         if(entrance == -1){
    //             entrance = i;
    //         }
    //         else if(exit == -1){
    //             exit = i;
    //         }
    //     }
    //     if(string[i] == '*'){
    //         if(treasure == -1){
    //             treasure = i;
    //         }
    //     }
    // }
    //     if(entrance < treasure && treasure < exit){
    //         printf("TREASURE INSIDE\n");
    //     }
    //     else printf("NO TREASURE INSIDE\n");

    // return 0;

    char alfa[100];
    int alfaStorage[26] = {0};
    int pangram = 0;

    scanf("%s", alfa);
    for(int i = 0; i < strlen(alfa); i++){

        char forSubstract = alfa[i];
        alfaStorage[forSubstract - 'a'] = 1;
    }
    for(int j = 0; j < 26; j++){
        if(alfaStorage[j] == 0){
            pangram = 1;
            break;
        }
    }
    if(pangram == 1) printf("IT IS NOT A PANGRAM\n");
    else printf("ITS A PANGRAM\n");
}