#include <stdio.h>

int fibo(int n, int *count){
    if(n == 0) return 1;
    if(n == 1) return 2;
    if(n % 3 == 0) (*count)++;
    if(n % 5 == 0) return n * 2;

    else return fibo(n - 1, count) + n + fibo(n - 2, count) + n - 2;
}

int main(){
    int tc, n;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &n);

        int count = 0;
        int res = fibo(n, &count);
        printf("Case #%d: %d %d\n", i + 1, res, count);
        count = 0;
    }
    return 0;
}