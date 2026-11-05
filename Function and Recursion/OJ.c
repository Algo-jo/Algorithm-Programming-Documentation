#include <stdio.h>

int counter;

int F(int N){
    if(N % 3 == 0) counter++;

    if(N == 0) return 1;
    if(N == 1) return 2;
    
    if(N % 5 == 0) return N * 2;
    return F(N - 1) + N + F(N - 2) + N - 2;
}
int main(){

    int T, N;
    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d", &N);
        counter = 0;
        int res = F(N);
        printf("Case #%d: %d %d\n", i + 1, res, counter);
    }
}