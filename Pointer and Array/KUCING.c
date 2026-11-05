#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    char kalimat[101];
    int mulai, akhir;
    for(int i = 0; i < testcase; i++){
    scanf("%s %d %d", kalimat, &mulai, &akhir);

    for(int i = mulai; i < akhir; i++){
        printf("%c", kalimat[i]);
    }
    printf("\n");
    }
    return 0;
}