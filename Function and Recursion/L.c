#include <stdio.h>

int counter;
int Fibo(int N){
    counter++;
    if(N == 0) return 1;
    if(N == 1) return 1;

    return Fibo(N-1) + Fibo(N-2);
    // F5 = F4 + F3
    //      F3 + F2 + F1 + F0
    //      F2 + F1 + F0 + F1 + F1 + F0 + F1 + 1
    //      F1 + F0 + 1 + 1 + 1 + 1 + 1 + 1
    //      1 + 1 + 6
    //      8
}

int main(){

    int N = 5;
    counter = 0;
    printf("%d\n", Fibo(N));
    printf("%d\n", counter);

    return 0;
}