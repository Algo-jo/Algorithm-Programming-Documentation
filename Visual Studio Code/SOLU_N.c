#include <stdio.h>
int main(){

    int before, after;
    double percent;

    scanf("%d %d", &before, &after);
    percent = (double)after / before * 100.0;
    printf("%.2lf%%\n", 100.0 - percent);
    return 0;
}