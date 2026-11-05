#include <stdio.h>

int count = 0;
int recursion(int n){
    if(n == 0) return 1;
    if(n == 1) return 2;

    if(n % 3 == 0){
        count++;
    }
    if(n % 5 == 0) return n *= 2;
    else return recursion(n - 1) + n + recursion(n - 2) + n - 2;
}

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int N = 0;
        scanf("%d", &N);

        int hasil = recursion(N);
        printf("Case #%d: %d %d\n", i + 1, hasil, count);
        count = 0;
    }
}