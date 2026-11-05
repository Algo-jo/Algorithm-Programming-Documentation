#include <stdio.h>

int function(int N){
    if(N == 1) return 1; // base case

    // recursion
    if(N % 2 == 1) return function(N-1) + function(N+1);
    if(N % 2 == 0) return function(N/2);
}

int main(){
    int testcase;
    int N = 0;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        scanf("%d", &N);
        printf("Case #%d: %d\n", i+1, function(N));
    }
    return 0;
}