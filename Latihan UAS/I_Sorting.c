#include <stdio.h>

int main(){
    int tc, n;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        long long arr[1000] = {0};
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%lld", &arr[j]);
        }
        for(int a = 0; a < n; a++){
            for(int b = n - 1; b > a; b--){
                if(arr[b] < arr[b - 1]){
                    long long temp = arr[b];
                    arr[b] = arr[b - 1];
                    arr[b - 1] = temp;
                }
            }
        }
        // for(int j = 0; j < n; j++){
        //     printf("%d ", arr[j]);
        // } printf("\n");
        long long maks1 = 0, maks2 = 0;
        long long temps = 0;
        for(int a = 0; a < n / 2 - 1; a++){
            temps = arr[a] - arr[a + 1];
            if(temps < 0) temps *= -1;
            if(temps > maks1) maks1 = temps;
        }
        for(int b = n / 2; b < n - 1; b++){
            temps = arr[b] - arr[b + 1];
            if(temps < 0) temps *= -1;
            // printf("%lld ", temps);
            if(temps > maks2) maks2 = temps;
        }
        // printf("%lld %lld\n", maks1, maks2);
        printf("Case #%d: ", i + 1);
        printf("%lld\n", (maks1 > maks2) ? maks1 : maks2);
    }
    return 0;
}