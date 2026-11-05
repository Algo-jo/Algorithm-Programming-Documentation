#include <stdio.h>
int main(){
    int box;
    scanf("%d", &box);

    for(int i = 1; i <= box; i++){
        for(int j = 1; j <= box; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}