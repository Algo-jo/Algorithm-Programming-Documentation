#include <stdio.h>

int main(){

// INPUT
    int number;
    scanf("%d", &number);

    // PROCESS
    if (number % 2 == 0) {
        printf("EVEN\n");
    }
    else {
        printf("ODD\n");
    }
    return 0;
}