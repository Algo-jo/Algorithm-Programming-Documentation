#include <stdio.h>

long long int fibo(long long int n, long long int f0, long long int f1){
    if(n == 0) return f0;
    if(n == 1) return f1;
    else return fibo(n - 1, f0, f1) - fibo(n - 2, f0, f1);
}

int main(){
    int tc, n, f0, f1;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d %d %d", &n, &f0, &f1);
        long long int res = fibo(n, f0, f1);
        printf("Case #%d: %lld\n", i + 1, res);
    }
    return 0;
}