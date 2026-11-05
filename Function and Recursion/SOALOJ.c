#include <stdio.h>

long long int x, y;

long long int F(int N){
    if(N==0) return x;
    if(N==1) return y;

    return F(N-1) + F(N-2);
}
int main(){
    
    int testcase, N;
    scanf("%d", &testcase);

    for(int i = 1; i <= testcase; i++){
        scanf("%d %lld %lld", &N, &x, &y);
        printf("Case #%d: %lld\n", i, N);
    }

    return 0;
}