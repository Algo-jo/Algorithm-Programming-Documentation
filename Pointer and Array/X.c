#include <stdio.h>

int main(){
    int t;
    long long total;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int m, n, amount[600] = {0}, maks = 0;
        scanf("%d %d", &m, &n);

        for(int j = 0; j < m; j++){
            for(int k = 0; k < n; k++){
                scanf("%d", &amount[k]);
                if(maks < amount[k]){
                    maks = amount[k];
                }
            }
            total += maks;
            maks = 0;
        }
        printf("Case #%d: %lld\n", i + 1, total);
        total = 0;
    }
    return 0;
}