#include <stdio.h>

int main(){
    int amount;
    scanf("%d", &amount);
    long long enemy_power[amount + 1];

    for(int i = 0; i < amount; i++){
        scanf("%lld", &enemy_power[i]);
    }

    long long your_power = 0;
    scanf("%lld", &your_power);

    for(int i = 0; i < amount; i++){
        for(int j = amount - 1; j > i; j--){
            if(enemy_power[j - 1] > enemy_power[j]){
                long long temp = enemy_power[j - 1];
                enemy_power[j - 1] = enemy_power[j];
                enemy_power[j] = temp;
            }
        }
    }
    // for(int i = 0; i < amount; i++){
    //     printf("%lld ", enemy_power[i]);
    // }
    long long count = 0;
    for(int i = 0; i < amount; i++){
        if(enemy_power[i] <= your_power){
            count++;
            your_power -= enemy_power[i];
        }
    }
    printf("%lld\n", count);

    return 0;
}