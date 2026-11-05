#include <stdio.h>
int main(){
    int a, b, c, d;
    long long int LHS, RHS;
    scanf("%d %d %d %d", &a, &b, &c, &d); getchar();

    LHS = (long long int) a * b;
    RHS = (long long int) c + d;

    if(LHS > RHS)printf("True\n");
    else if(RHS > LHS)printf("False\n");

    return 0;
}