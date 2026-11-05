#include <stdio.h>
#include <string.h>
int main(){
    int totalPemain, posisiMain, testing;

    scanf("%d", &totalPemain);
    scanf("%d", &posisiMain);
    scanf("%d", &testing);
        for(int i = 0; i < testing; i++){
            int melewati = 0, dilewati = 0;
            scanf("%d %d", &melewati, &dilewati);

            posisiMain = posisiMain - melewati + dilewati;
            if(posisiMain > totalPemain){
                posisiMain = totalPemain;
            }
            if(posisiMain < 1){
                posisiMain = 1;
            }
        }
    printf("%d\n", posisiMain);
    return 0;
}