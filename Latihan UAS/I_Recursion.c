#include <stdio.h>

int fibo(int n, int *count){
    (*count)++;
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fibo(n - 1, count) + fibo(n - 2, count);
}

int main(){
    int tc, n;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int count = 0;
        scanf("%d", &n);
        fibo(n, &count);
        printf("Case #%d: %d\n", i + 1, count);
    }
    return 0;
}