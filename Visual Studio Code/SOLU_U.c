#include <stdio.h>
int main(){

    int T, a, c, e;
    long long int b, d, f;
    double rota1, rota2, rota3;
    scanf("%d", &T);
    if (T==3){
        scanf("%d %lld", &a, &b); getchar();
        scanf("%d %lld", &c, &d); getchar();
        scanf("%d %lld", &e, &f); getchar();

        rota1 = (double)(a*b)/360.00;
        rota2 = (double)(c*d)/360.00;
        rota3 = (double)(e*f)/360.00;

        printf("%.2lf\n", rota1);
        printf("%.2lf\n", rota2);
        printf("%.2lf\n", rota3);
        }
    return 0;
    }
