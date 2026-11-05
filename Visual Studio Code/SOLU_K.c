#include <stdio.h>
int main() {
    int x;
    double Y;

    scanf("%d %lf", &x, &Y);

    double jumlah = x;
    for (int i = 1; i <= 3; i++) {
        jumlah = jumlah + jumlah * (Y / 100);
    }
    printf("%.2lf\n", jumlah);
    return 0;
}