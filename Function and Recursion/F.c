#include <stdio.h>
#include <string.h>

char balik(char array[]){
    int length = strlen(array);
    for(int j = length - 1; j >= 0; j--){
        printf("%c", array[j]);
    }
}

int main(){
    int testcase;
    scanf("%d", &testcase); getchar();

    for(int i = 0; i < testcase; i++){
        char array[1005] = {0};
        scanf("%[^\n]", array); getchar();
        printf("Case #%d: ", i + 1);
        balik(array);

        printf("\n");
    }
    return 0;
}