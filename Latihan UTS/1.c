#include <stdio.h>
int main(){

    int number;
    scanf("%d", &number);

    printf("%d", ( 1 << number ) - 1);
    return 0;
}