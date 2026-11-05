#include <stdio.h>
int main(){
    int radius, height, test;
    scanf("%d", &test);

    for(int i = 1; i <= test; i++){
        scanf("%d %d", &radius, &height);

        double surface = 2 * 3.14 * radius * (radius + height);

        printf("Case #%d: %.2lf\n", i, surface);
    }
    return 0;
}