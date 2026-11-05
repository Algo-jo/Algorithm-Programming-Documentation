#include <stdio.h>
int fiboCount = 0;

int fibo(int N){

    if(N == 0){
        fiboCount++;
        return 0;
    }
    else if(N <= 1){
        fiboCount++;
        return 1;
    }
    else{
        fiboCount++;
        return fibo(N - 1) + fibo(N - 2);
    }   
}

int main(){
    int testcase, N;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        scanf("%d", &N);
        fibo(N);
        printf("Case #%d: %d\n", i + 1, fiboCount);
        fiboCount = 0;
    }
}