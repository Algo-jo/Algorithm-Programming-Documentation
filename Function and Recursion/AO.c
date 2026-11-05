#include <stdio.h>
#include <string.h>
int main(){

    int testcase, len;
    char array[150] = {0};
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        scanf("%d", &len); getchar();
        for(int j = 0; j < len; j++){
            scanf("%c", &array[j]);
        }
        getchar();

        printf("Case #%d: ", i+1);
        for(int k = 0; k < len; k++){
            if(array[k] >= 'a' && array[k] <= 'z'){
                printf("%c", array[k]);
            }
        }
        printf("\n");
        len = 0;
    }
    return 0;
}