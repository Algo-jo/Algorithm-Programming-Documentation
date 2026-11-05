#include <stdio.h>

int fibo(int k, int s0, int s1){
    if(k == 0) return s0;
    if(k == 1) return s1;
    else return fibo(k - 1, s0, s1) + fibo(k - 2, s0, s1);
}

int main(){
    int f0, f1, k;
    scanf("%d %d", &f0, &f1);
    scanf("%d", &k);
    printf("%d\n", fibo(k, f0, f1));
    return 0;
}