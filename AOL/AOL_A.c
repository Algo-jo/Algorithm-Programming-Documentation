#include <stdio.h>
#include <string.h>

int main(){
    char array[120];
    scanf("%s", array); getchar();

    char arrayNew[120];
    int length = strlen(array);
    int arrLen = length - 1;

    for(int i = 0; i < length; i++){
        arrayNew[i] = array[arrLen - i];
    }
    
    for(int i = 0; i < length; i++){
        if(arrayNew[i] >= 'A' && arrayNew[i] <= 'Z'){
            printf("%c", arrayNew[i] + 32);
        }
        else if(arrayNew[i] >= 'a' && arrayNew[i] <= 'z'){
            printf("%c", arrayNew[i] - 32);
        }
    }
    printf("\n");
    return 0;
}