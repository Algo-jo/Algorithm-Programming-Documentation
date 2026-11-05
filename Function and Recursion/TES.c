#include <stdio.h>
#include <string.h>

int main(){
    int count = 0;
    char nama[10][100] = {0};

    for(int i = 0; i < 5; i++){
    scanf("%[^\n]", nama[count]); getchar();
    count++;
    }
    count = 0;
    printf("%s", nama[0]);
    return 0;
}