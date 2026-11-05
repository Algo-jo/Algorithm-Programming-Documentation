#include <stdio.h>

int jojonacci(int n){
    if(n % 2 == 1) return 1;
    if(n == 0) return 0;
    if(n == 1 || n == 2 || n == 3) return 1;
    else return jojonacci(n - 1) + jojonacci(n - 2);
}

int main(){
    int N;
    scanf("%d", &N);
    int res = jojonacci(N);
    printf("%d\n", res);
    return 0;
}