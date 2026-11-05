#include <stdio.h>
int main(){
    double a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3, T;
    scanf("%lf", &T); getchar();
    if (T == 3){
        scanf("%lf %lf %lf %lf", &a1, &b1, &c1, &d1); getchar();
        scanf("%lf %lf %lf %lf", &a2, &b2, &c2, &d2); getchar();
        scanf("%lf %lf %lf %lf", &a3, &b3, &c3, &d3); getchar();
        double jumlah1 = (double)(a1/1 * 2) + (double)(b1/2 * 4) + (double)(c1 / 3 * 4) + (double)(d1/4 * 2);
        double jumlah2 = (double)(a2/1 * 2) + (double)(b2/2 * 4) + (double)(c2 / 3 * 4) + (double)(d2/4 * 2);
        double jumlah3 = (double)(a3/1 * 2) + (double)(b3/2 * 4) + (double)(c3 / 3 * 4) + (double)(d3/4 * 2);
        printf("%.2lf\n", jumlah1);
        printf("%.2lf\n", jumlah2);
        printf("%.2lf\n", jumlah3);
    }
    return 0;
}