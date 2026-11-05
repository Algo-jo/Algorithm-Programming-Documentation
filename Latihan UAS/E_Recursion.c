#include <stdio.h>

long long func(long long *b, long long int a[], int n){
    for(int i = 0; i < n; i++){
        *b += a[i];
    }
    return 0;
}

int main(){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int n = 0;
        long long a[1001] = {0};
        long long b = 0;

        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%lld", &a[j]);
        }
        func(&b, a, n);
        printf("Case #%d: %lld\n", i + 1, b);
    }
    return 0;
}