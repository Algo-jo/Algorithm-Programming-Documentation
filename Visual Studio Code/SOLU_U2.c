#include <stdio.h>
int main(){

    int T, a;
    long long int b;
    double rota1;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++){
        scanf("%d %d", &a, &b);
        if (a > 360){
            a = 360;
        }
        rota1 = (double)(a*b)/360.0;
        printf("%.2lf\n", rota1);
    }
    return 0;
    }
