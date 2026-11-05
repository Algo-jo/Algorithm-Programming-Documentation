#include <stdio.h>
int main(){
    int name[30];
    scanf("%[^\n]", name); getchar();
    
    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", name);

    return 0;
}