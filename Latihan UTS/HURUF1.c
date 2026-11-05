#include <stdio.h>
#include <string.h>

int main(){

    int ukuran;
    char kalimat[101] = {0};
    
    scanf("%d %s", &ukuran, &kalimat);
    printf("%c%c\n", kalimat[ukuran-1], kalimat[0]);

    // 3 ABC
    //   0 1 2
    scanf("%d %s", &ukuran, &kalimat);
    printf("%c%c\n", kalimat[ukuran-1], kalimat[0]);

    scanf("%d %s", &ukuran, &kalimat);
    printf("%c%c\n", kalimat[ukuran-1], kalimat[0]);
    return 0;
}