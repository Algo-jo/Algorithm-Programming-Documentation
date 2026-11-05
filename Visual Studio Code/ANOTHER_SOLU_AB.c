#include <stdio.h>
int main(){
    int num_attack;
    int total_damage;
    long long int total = 0;
    scanf("%d", &num_attack);
    for(int i = 1; i <= num_attack; i++){
        total_damage = 100 + 50 * (i - 1);
        total += total_damage;
    }
    printf("%lld\n", total);
    return 0;
}