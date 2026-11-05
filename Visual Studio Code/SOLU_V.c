#include <stdio.h>
int main(){

    int T;
    int a, b, c;

    if (T==3){
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        double ream1, fahren1, kelvin1;
        ream1 = (double)4/5 * a;
        fahren1 = (double)9/5 * a;
        kelvin1 = (double)273 + a;

        double ream2, fahren2, kelvin2;
        ream2 = (double)4/5 * b;
        fahren2 = (double)9/5 * b;
        kelvin2 = (double)273 + b;

        double ream3, fahren3, kelvin3;
        ream3 = (double)4/5 * c;
        fahren3 = (double)9/5 * c;
        kelvin3 = (double)273 + c;

        printf("%.2lf %.2lf %.2lf\n", ream1, fahren1, kelvin1);
        printf("%.2lf %.2lf %.2lf\n", ream2, fahren2, kelvin2);
        printf("%.2lf %.2lf %.2lf\n", ream3, fahren3, kelvin3);

    }
    return 0;
}