#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    double c = (double) b/a;
    printf("%.4lf%%\n", c * 100);
    return 0;

}