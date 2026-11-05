#include <stdio.h>
int main(){

    int naik, turun, diam;
    scanf("%d %d %d", &naik, &turun, &diam);

    if(diam - naik == turun - diam && naik <= diam && turun >= diam){
        printf("%d\n", diam - naik);
    }
    else printf("-1\n");
    return 0;
}
