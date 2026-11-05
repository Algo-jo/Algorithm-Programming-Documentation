#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        char array[1005] = {0};
        int num[1005] = {0};
        scanf("%s", array);
        int len = strlen(array);
        for(int j = 0; j < len; j++){
            if(array[j] >= 'A' && array[j] <= 'D'){
                num[j] = ('A' - array[j]) * -1;
                array[j] = 'A';
            }
            if(array[j] >= 'E' && array[j] <= 'H'){
                num[j] = ('E' - array[j]) * -1;
                array[j] = 'E';
            }
            if(array[j] >= 'I' && array[j] <= 'N'){
                num[j] = ('I' - array[j]) * -1;
                array[j] = 'I';
            }
            if(array[j] >= 'O' && array[j] <= 'T'){
                num[j] = ('O' - array[j]) * -1;
                array[j] = 'O';
            }
            if(array[j] >= 'U' && array[j] <= 'Z'){
                num[j] = ('U' - array[j]) * -1;
                array[j] = 'U';
            }
        }
        printf("Case #%d:\n", i + 1);
        for(int j = 0; j < len; j++){
            printf("%c", array[j]);
        }
        printf("\n");
        for(int j = 0; j < len; j++){
            printf("%d", num[j]);
        }
        printf("\n");
    }
    return 0;
}