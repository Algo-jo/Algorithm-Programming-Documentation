#include <stdio.h>

int fibo(int m, int n){
    if(m == 0 && n == 0) return 1;
    if(m < 0 || n < 0) return 0;
    return fibo(m - 1, n - 1) + fibo(m - 1, n) + fibo(m, n - 1);
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int res = fibo(m, n);
    printf("%d\n", res);
    return 0;
}