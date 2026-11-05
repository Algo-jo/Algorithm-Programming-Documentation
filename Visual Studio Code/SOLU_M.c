#include <stdio.h>
int main(){

    int punya, semua;
    double persen;

    scanf("%d %d", &punya, &semua);
    persen = (double)punya / semua;
    printf("%.2lf%%\n", persen * 100);
    return 0;
}