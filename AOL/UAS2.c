#include <stdio.h>
int count  = 0;
int fibo(int n){
    if(n == 0) return 1;
    if(n == 1) return 2;
    if(n == 3 || n == 4) count++;
    if(n % 3 == 0) return fibo(n - n / 3) + 1;
    else return fibo(n - 1) + n + fibo(n - 2) + 1;
}

int main(){
    int tc, n;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &n);
        int res = fibo(n);
        printf("%d %d\n", res, count);
        count = 0;
    }

    return 0;
}