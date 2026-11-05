#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase); getchar();

    char kalimat[1001];
    for(int i = 0; i < testcase; i++){
        scanf("%[^\n]", kalimat); getchar();

        int panjang = strlen(kalimat);
        printf("Case #%d: ", i + 1);
        for(int i = 0; i < panjang; i++){
            if(kalimat[i] != 'a' && kalimat[i] != 'i' && kalimat[i] != 'u' && kalimat[i] != 'e' &&
            kalimat[i] != 'o' && kalimat[i] != 'A' && kalimat[i] != 'I' && kalimat[i] != 'U' &&
            kalimat[i] != 'E' && kalimat[i] != 'O'){
                printf("%c", kalimat[i]);
            }
        }
        printf("\n");
    }

    return 0;
}