#include <stdio.h>
#include <string.h>
int main(){
    char kalimat[101] = {0};
    char kurang = 0;
    scanf("%[^\n]", &kalimat); getchar();
    scanf("%c", &kurang); getchar();
    
    int length = strlen(kalimat);
    for(int i = 0; i < length; i++){
        if(kalimat[i] != kurang){
            printf("%c", kalimat[i]);
        }
    }
    printf("\n");
    return 0;
}