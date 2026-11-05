#include <stdio.h>

void printz(int a){ // --> penampung nilai
    for(int i = 0; i < a; i++){
        printf("%d ", i);
    }
}

int minimums(int a, int b){
    if(a<b){
        return a;
    }
    else return b;
}

int main(){
    int n = 10;

    printz(n);
    puts("");

    int x = 10, y = 20, res;
    // res = minimums(x, y);
    // printf("%d", res);
    printf("%d\n", minimums(x, y));
    return 0;
}