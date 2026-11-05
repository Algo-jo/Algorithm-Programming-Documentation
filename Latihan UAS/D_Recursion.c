#include <stdio.h>

int fibo(int n){
    if(n == 1) return 1;
    if(n % 2 == 0) return fibo(n/2);
    if(n % 2 == 1) return fibo(n - 1) + fibo(n + 1);
}

int main(){
    int tc, n;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &n);
        int res = fibo(n);
        printf("Case #%d: %d\n", i + 1, res);
    }
    return 0;
}