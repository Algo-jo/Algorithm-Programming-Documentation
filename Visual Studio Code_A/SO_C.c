#include <stdio.h>
int main(){

    int test;
    scanf("%d", &test); getchar();

    for(int i = 1; i <= test; i++){
        int gojo, bipay;
        scanf("%d %d", &gojo, &bipay); getchar();

        if (gojo > bipay){
            printf("Case #%d: Go-Jo\n", i);
        }
        else if(gojo < bipay){
            printf("Case #%d: Bi-Pay\n", i);
        }
    }
    return 0;
}