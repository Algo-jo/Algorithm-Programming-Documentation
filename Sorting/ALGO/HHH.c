#include <stdio.h>
#include <string.h>

int size  = 0;
void strsort(char array[][size + 5], int testcase, int size){
    int i = 0, j = 0;
    for(i = 0; i < testcase; i++){
        for(j = testcase - 1; j > i; j--){
            if(strcmp(array[j], array[j - 1]) < 0){
                char temp[size + 5];
                strcpy(temp, array[j]);
                strcpy(array[j], array[j-1]);
                strcpy(array[j-1], temp);
            }
        }
    }
}

void sorting(char array[], int testcase){
    int i = 0, j = 0;
    for(i = 0; i < testcase; i++){
        for(j = testcase  - 1; j > i; j--){
            if(array[j] < array[j - 1]){
                char temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }
}

int main(){
    int testcase;
    scanf("%d %d", &testcase, &size); getchar();
    char array[testcase][size + 5];

    for(int i = 0; i < testcase; i++){
        scanf("%s", array[i]);
    }

    for(int i = 0; i < testcase; i++){
        sorting(array[i], strlen(array[i]));
    }
    for(int i = 0; i < testcase; i++){
        strsort(array, testcase, size);
    }

    for(int i = testcase - 1; i >= 0; i--){
        printf("%s\n", array[i]);
    }



    return 0;
}