#include <stdio.h>
#include <string.h>

int main(){
    char kalimat[5][100];
    for(int i = 0; i < 5; i++){
        scanf("%s", kalimat[i]);
    }
    int mostLength = 0;
    for(int i = 0; i < 5; i++){
        int length = strlen(kalimat[i]);
        if(length > mostLength){
            mostLength = length;
        }
    }
    for(int j = 0; j < 5; j++){
        printf("%*s|%s\n", mostLength, kalimat[j], kalimat[j]);
    }
    return 0;
}