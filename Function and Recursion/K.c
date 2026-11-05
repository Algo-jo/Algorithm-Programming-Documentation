#include <stdio.h>

int fibo(int f1, int f2, int K){
    if(K == 0) return f1;
    else if(K == 1) return f2;

    else return fibo(f1, f2, K - 1) + fibo(f1, f2, K - 2);
}


int main(){
    int f1, f2, K;
    scanf("%d %d", &f1, &f2);
    scanf("%d", &K);
    printf("%d\n", fibo(f1, f2, K));
    return 0;
}