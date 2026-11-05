#include <stdio.h>
int main(){

    int proses, hasil, akhir = 1;
    scanf("%d", &proses);
    for(int i = 1; i <= proses; i++){
        akhir = (akhir * 2) + 1;
    }
    printf("%d\n", akhir);
    return 0;
}