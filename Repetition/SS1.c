#include <stdio.h>
int main(){

    int jumlah, kekuatan_bibi, kekuatan_balon, total = 0;
    scanf("%d %d", &jumlah, &kekuatan_bibi);
    for(int i = 1; i <= jumlah; i++){
        scanf("%d", &kekuatan_balon);
        if(kekuatan_balon < kekuatan_bibi){
            total++;
        }
    }
    printf("%d\n", total);
    return 0;
}