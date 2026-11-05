#include <stdio.h>
int main(){
    int name[30];
    scanf("%[^\n]", name); getchar();
    
    printf("Happy Birthday to %s.\n", name);

    return 0;
}