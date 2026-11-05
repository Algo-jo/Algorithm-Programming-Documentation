#include <stdio.h>
#include <string.h>
int main(){
    char kalimat[3][100];
    int maxLength = 0;

    for(int i = 0; i < 3; i++){
        scanf("%s", kalimat[i]);

        int length = strlen(kalimat[i]);
        if(length > maxLength){
            maxLength = length;
        }
    }
    for(int i = 0; i < 3; i++){
    printf("%-*s %-*s%s\n", 10, kalimat[i], 8, kalimat[i], kalimat[i]);
    }
    return 0;
}