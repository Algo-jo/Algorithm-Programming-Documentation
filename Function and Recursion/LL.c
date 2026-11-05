#include <stdio.h>

int fibo(int index, int f0, int f1){
    if(index == 0) return f0;
    else if(index == 1) return f1;
    else return fibo(index - 1, f0, f1) - fibo(index - 2, f0, f1);
}

int main(){
    int testcase, f0, f1, index;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        scanf("%d %d %d", &index, &f0, &f1);
        printf("Case #%d: %d\n", i + 1, fibo(index, f0, f1));
    }
}