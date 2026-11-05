#include <stdio.h>

long long int fibo(int n){
    if(n == 1 || n == 2) return 1;

    else return fibo(n - 2) + fibo(n - 1);
}

int main(){
    // f(n) = f(n-2) + f(n-1)
    // base
    // if(n == 1 || n == 2) return 1

    // reduction 
    //return fibo(n-2) + fibo(n-1)
    int n;
    int i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
    printf("Fibo dari %d adalah: %lld\n", i, fibo(i));
    }

    return 0;
}