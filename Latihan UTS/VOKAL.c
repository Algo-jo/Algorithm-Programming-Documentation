#include <stdio.h>
#include <string.h>
int main(){

    char kalimat[1000001];
    scanf("%[^\n]", &kalimat); getchar();

    int panjang = strlen(kalimat);
    int vokal = 0, konsonan = 0;
    for(int i = 0; i < panjang; i++){
        if(kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' ||
        kalimat[i] == 'e' || kalimat[i] == 'o'){
            vokal++;
        }
        else if(kalimat[i] != ' '){
            konsonan++;
        }
    }
    printf("Vokal: %d\n", vokal);
    printf("Konsonan: %d\n", konsonan);

    return 0;
}