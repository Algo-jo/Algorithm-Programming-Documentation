#include <stdio.h>

int banyak = 0;
int jojo = 0, lili = 0;

long long int function(long long int N){
    if(N == 1){
        if(banyak % 2 == 1){
            return jojo = -1;
        }
        else if(banyak % 2 == 0){
            return lili = -1;
        }
    }

    banyak++;
    if(N % 2 == 0) return function(N / 2);
    if(N % 2 == 1) return function((N * 3) + 1);
}


int main(){
    int testcase;
    long long int N;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        jojo = 0, lili = 0, banyak = 0;

        scanf("%lld", &N);
        function(N);

        printf("Case #%d: ", i + 1);
        if(jojo == -1){
            printf("Jojo\n");
        }
        else if(lili == -1){
            printf("Lili\n");
        }
    }
    return 0;
}