#include <stdio.h>
int main(){
    int T, percent1, percent2, percent3, number1, number2, number3;
    scanf("%d", &T);
    if (T==3){
        scanf("%d %d", &percent1, &number1);
        scanf("%d %d", &percent2, &number2);
        scanf("%d %d", &percent3, &number3);
        printf("%.2lf\n", (double) percent1/100 * number1);
        printf("%.2lf\n", (double) percent2/100 * number2);
        printf("%.2lf\n", (double) percent3/100 * number3);
    }
    return 0;
}