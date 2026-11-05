#include <stdio.h>
#include <string.h>

int main(){
    int testcase, size;
    scanf("%d %d", &testcase, &size); getchar();

    char array[testcase + 5][size + 5];
    
    for(int i = 0; i < testcase; i++){
        scanf("%s", array[i]);
    }
    for(int i = 0; i < size; i++){

    char lastChar = array[i][size - 1];
        for(int j = size - 1; j > 0; j--){
            array[i][j] = array[i][j - 1];
        }
        array[i][0] = lastChar;
    }
    // for(int i = 0; i < testcase; i++){
    //     int min = i;

    //     for(int j = i + 1; j < testcase; j++){
    //         if(strcmp(array[j], array[min]) < 0){
    //             min = j;
    //         }
    //     }
    //     if(min != i){
    //         char temp[size];
    //         strcpy(temp, array[i]);
    //         strcpy(array[i], array[min]);
    //         strcpy(array[min], temp);
    //     }
    // }

    for(int k = 0; k < testcase; k++){
        printf("%s\n", array[k]);
    }
    return 0;
}