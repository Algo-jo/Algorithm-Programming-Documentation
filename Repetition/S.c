#include <stdio.h>

int main(){
    int length, power = 0;
    int bibi = 0, count = 0;
    scanf("%d %d", &length, &power);
    for(int i = 1; i <= length; i++){
        scanf("%d", &bibi);
        if(bibi < power){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}