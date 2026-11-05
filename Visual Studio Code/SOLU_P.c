#include <stdio.h>
int main(){

    int a, b, c, d, e, f, g, h;
    double jumlah1, jumlah2, jumlah3, jumlah4;

    scanf("%d %d", &a, &b); getchar();
    scanf("%d %d", &c, &d); getchar();
    scanf("%d %d", &e, &f); getchar();
    scanf("%d %d", &g, &h); getchar();

    jumlah1 = (double) b / (100.0 - a) * 100;
    jumlah2 = (double) d / (100.0 - c) * 100;
    jumlah3 = (double) f / (100.0 - e) * 100;
    jumlah4 = (double) h / (100.0 - g) * 100;
    

    printf("$%.2lf\n", jumlah1);
    printf("$%.2lf\n", jumlah2);
    printf("$%.2lf\n", jumlah3);
    printf("$%.2lf\n", jumlah4);

    return 0;
}