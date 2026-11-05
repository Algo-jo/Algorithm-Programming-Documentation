#include <stdio.h>

int kelipatan3 = 0;
int fibo(int N){

    if(N == 0) return 1;
    if(N == 1) return 2;
    
    if(N % 3 == 0){
        kelipatan3++;
    }
    if(N % 5 == 0){
        return N * 2;
    }

    else return fibo(N - 1) + N + fibo(N - 2) + (N - 2);
}

int main(){
    int testcase, N;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%d", &N);

        int hasil = fibo(N);

        printf("Case #%d: %d %d\n", i, hasil, kelipatan3);
        kelipatan3 = 0;
    }
}