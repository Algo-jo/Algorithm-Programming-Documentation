#include <stdio.h>

int main(){

    int mulai, jumlah;
    int i;

    scanf("%d %d", &mulai, &jumlah); getchar();
    int maksimal = mulai + jumlah;

    for (i = mulai; i <= maksimal; i++ ) {
        printf("%d\n", i);
    }
    return 0;
}