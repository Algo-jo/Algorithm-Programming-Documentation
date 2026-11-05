#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);

    for(int i = 0; i < testcase; i++){
    char kalimat[101] = {0};
    int mulai = 0, akhir = 0;
        scanf("%s %d %d", kalimat, &mulai, &akhir);

        for(int j = mulai; j <= akhir; j++){
            printf("%c", kalimat[j]);
            if(j == akhir) printf("\n");
        }
    }
    return 0;
}