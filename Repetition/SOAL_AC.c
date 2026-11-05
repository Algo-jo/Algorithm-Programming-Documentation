#include <stdio.h>
int main(){

    int t;
    int n, price, min;
    long long int m;

    scanf("%d", &t);
        for(int i = 1; i <= t; i++){
            scanf("%d %lld", &n, &m);
            scanf("%d", &price);
            min = price;

                for(int j = 1; j < n; j++){
                scanf("%d", &price);
                min = (min < price) ? min : price;
                }
                printf("Case #%d: %lld\n", i, m/min);
        }
    return 0;
}