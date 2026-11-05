#include <stdio.h>
int main(){

    double length, width, height, rumus_alas, rumus_badan;
    scanf("%lf %lf %lf", &length, &width, &height);
    rumus_alas = width * height;
    rumus_badan = width * length * 3;

    printf("%.3lf\n", rumus_alas + rumus_badan);
    return 0;
}