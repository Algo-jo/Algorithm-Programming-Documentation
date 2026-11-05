#include <stdio.h>

int main(){
    int testcase;
    int size;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%d", &size);

        if(size % 2 == 1){
            for(int a = 1; a <= size; a++){
                for(int b = 1; b <= size; b++){
                    if(a == 1 || a == size || b == 1 || b == size) printf("*");
                    else if(a == b) printf("*");
                    else if(a + b == size + 1) printf("*");
                    else printf(" ");
                    if(b == size) printf("\n");
                }
            }
            printf("\n");
        }
    }
    return 0;
}