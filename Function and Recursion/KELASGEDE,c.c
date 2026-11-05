#include <stdio.h>

void printz(int a){ // --> penampung nilai
    for(int i = 0; i < a; i++){
        printf("%d ", i);
    }
}

int main(){
    int n = 10;

    printz(n);
    return 0;
}