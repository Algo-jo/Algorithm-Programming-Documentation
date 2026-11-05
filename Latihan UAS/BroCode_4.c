#include <stdio.h>

int main(){
    int age = 21;
    int *pAge = NULL;
    pAge = &age;

    printf("Address of Age: %p\n", &age);
    printf("Address of pAge: %p\n", pAge);
    printf("Value of Age: %d\n", age);
    printf("Value of pAge: %d\n", *pAge);

    
    return 0;
}