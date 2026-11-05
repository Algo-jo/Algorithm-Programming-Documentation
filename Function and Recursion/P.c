#include <stdio.h>

int function(int A){
    if(A == 0) return 0;

    if(A <= 2) return 1;
    else if(A % 2 == 1) return 1;

    else return function(A-1) + function(A-2);
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%d\n", function(N));

    return 0;
}