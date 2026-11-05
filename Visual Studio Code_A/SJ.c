#include <stdio.h>
int main(){

    int test, banyak, j;
    long long int jumlah;
    scanf("%d", &test); 

    for(int i = 1; i <= test; i++){
        long long int total = 0;
        banyak = 0;
        scanf("%d", &banyak);

        for(j = 1; j <= banyak; j++){
            scanf("%d", &jumlah); 
            total += jumlah;
            }
        printf("Case #%d: %lld\n", i, total);
    }
    return 0;
}