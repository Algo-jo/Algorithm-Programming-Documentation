#include <stdio.h>


int faktorial(int n){
    // base case --> base knowledge
    if(n == 0 || n == 1){
        return 1;
    }
    else return n * faktorial(n - 1); // --> rumus faktorial
    // reduction step --> rumus
}
int main(){

    int n;
    int i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
    printf("Faktorial dari %d adalah: %d\n", i, faktorial(i));
    }

    return 0;
}