#include <stdio.h>

int fibo(int n, char s0, char s1){
    if(n == 0){
        printf("%c", s0);
        return 0;
    }
    if(n == 1){
        printf("%c", s1);
        return 0;
    }
    else return fibo(n - 1, s0, s1) + fibo(n - 2, s0, s1);
}

int main(){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int n = 0;
        char s0, s1;
        scanf("%d %c %c", &n, &s0, &s1);
        printf("Case #%d: ", i + 1);
        fibo(n, s0, s1);
        puts("");
    }
    return 0;
}