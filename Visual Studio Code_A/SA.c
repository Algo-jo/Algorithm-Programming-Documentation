#include <stdio.h>
int main(){

    int mulai, nambah;
    scanf("%d %d", &mulai, &nambah); getchar();

    for (int i = mulai; i < mulai + nambah; i++){
        printf("%d\n", i);
    }
    return 0;
}