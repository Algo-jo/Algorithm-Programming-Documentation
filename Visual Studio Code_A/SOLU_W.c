#include <stdio.h>
int main(){
    int angka1, angka2, angka3;
    scanf("%d", &angka1); getchar();
    scanf("%d", &angka2); getchar();
    scanf("%d", &angka3); getchar();

    printf("%d\n", angka1 % 100 / 10);
    printf("%d\n", angka2 % 100 / 10);
    printf("%d\n", angka3 % 100 / 10);
    
    return 0;
}