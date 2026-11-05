#include <stdio.h>
#include <string.h>

int main(){
    char kalimat[101];
    scanf("%s", kalimat);

    int length = strlen(kalimat);
    for(int i = length - 1; i >= 0; i--){
        printf("%c", kalimat[i]);
    }
    return 0;
}