#include <stdio.h>
int main(){

    int N;
    long long int X;
    scanf("%d", &N);
    X = (long long)1 << N;
    
    printf("%lld\n", X - 1);
    return 0;
}