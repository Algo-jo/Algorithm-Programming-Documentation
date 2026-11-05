#include <stdio.h>

int total;
int penjumlahan(int jumlah){
    total += jumlah;

    return total;
}
int main(){
    int jumlah;
    int testcase, angka;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        scanf("%d", &angka);
        for(int j = 0; j < angka; j++){
            scanf("%d", &jumlah);
            penjumlahan(jumlah);
        }
        printf("Case #%d: %d\n", i + 1, total);
        total = 0;

    }
    return 0;
}