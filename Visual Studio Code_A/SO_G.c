#include <stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    long long int LHS = (long long int) a * b;
    long long int RHS = (long long int) c - d;

    if (LHS == RHS){
        printf("True\n");
    }
    else if(LHS != RHS){
        printf("False\n");
    }
    return 0;
}