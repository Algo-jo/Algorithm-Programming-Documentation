#include <stdio.h>
#include <string.h>

int main(){

    int testcase;
    char kalimat[1001];
    scanf("%d", &testcase); getchar();
    for(int i = 0; i < testcase; i++){
        scanf("%[^\n]", kalimat); getchar();

        int length = strlen(kalimat);
        printf("Case #%d: ", i + 1);
        for(int j = 0; j < length; j++){
            if(kalimat[j] != 'a' && kalimat[j] != 'i' && kalimat[j] != 'u' && kalimat[j] != 'e' &&
                kalimat[j] != 'o' && kalimat[j] != 'A' && kalimat[j] != 'I' && kalimat[j] != 'U' &&
                kalimat[j] != 'E' && kalimat[j] != 'O'){
                    printf("%c", kalimat[j]);
            }
        }
        printf("\n");
    }
    return 0;
}