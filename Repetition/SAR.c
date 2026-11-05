#include <stdio.h>
int main(){
    int count, size;

    scanf("%d %d", &count, &size);
    for(int i = 1; i <=count; i++){
        int blank = size;

        for(int j = 1; j <= size; j++){
            for(int k = 1; k <= size; k++){
                if(j + k > blank) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}