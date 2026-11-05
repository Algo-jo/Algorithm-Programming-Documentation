#include <stdio.h>

int main(){
    FILE *X;
    int a, b;
    X = fopen("testdata.in", "r");
    fscanf(X, "%d %d\n", &a, &b);
    printf("%d\n", a + b);
}