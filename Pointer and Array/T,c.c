#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        char array[1000] = {0};
        int num[1000] = {0};
        scanf("%s", array);
        int len = strlen(array);
        for(int j = 0; j < len; j++){
            if(array[j] >= 'A' && array[j] <= 'D'){
                num[j] = ('A' - array[j]) * -1;
                array[j] = 'A';
            }
        }
        for(int j = 0; j < len; j++){
            printf("%c", array[j]);
        }
        puts("");
        for(int j = 0; j < len; j++){
            printf("%c", num[j]);
        }
    }
}