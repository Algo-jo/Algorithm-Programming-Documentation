#include <stdio.h>
int main(){
    int testcase, size;

    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%d", &size);
    }
    for(int x = 1; x <= testcase; x++){
        for(int j = 1; j <= size; j++){
                for(int k = 1; k <= size * 2 - 1; k++){
                    if(k >= size - j + 1 && k <= size + j - 1){
                        printf("*");
                    }
                    else printf(" ");
                }
                printf("\n");
            }
    }
    return 0;
}