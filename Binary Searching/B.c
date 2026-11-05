#include <stdio.h>

long int square(long long N){
    return ((N * (N + 1)) * (2 * N + 1)) / 6;
}

int main(){
    int testcase;
    scanf("%d", &testcase);

    for(int i = 0; i < testcase; i++){
        long long M = 0;
        scanf("%lld", &M);
        long long N = 1;

        long long maks = 0;
        long long jumlah = 0;
        long long left = 1, right = 1000000;

        while(left <= right){
            long long mid = (left + right) / 2;
            long long hasil = square(mid);

            if(hasil <= M){
                jumlah = mid;
                left = mid + 1;
            }
            else right = mid - 1;
        }


        printf("Case #%d: %lld\n", i + 1, jumlah);
    }
    return 0;
}