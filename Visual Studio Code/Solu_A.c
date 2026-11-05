#include <stdio.h>
int main(){
    int damage;
    int count;
    int bonus = 0;
    scanf("%d", &count);

    damage = 100 * count;
    for(int i = 1; i < count; i++){
        bonus = bonus + 50;
    }
    printf("%d", damage + bonus);
    return 0;
}