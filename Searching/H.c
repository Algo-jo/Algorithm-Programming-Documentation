#include <stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);

    long long int enemy_power[120];
    for(int i = 0; i < testcase; i++){
        scanf("%lld", &enemy_power[i]);
    }

    long long your_power;
    scanf("%lld", &your_power);

    for(int i = 0; i < testcase; i++){
        for(int j = testcase - 1; j > i; j--){
            if(enemy_power[j - 1] > enemy_power[j]){
                long long temp = enemy_power[j];
                enemy_power[j] = enemy_power[j - 1];
                enemy_power[j - 1] = temp;
            }
        }
    }


    long long int win = 0;
    for(int j = 0; j < testcase; j++){
        if(enemy_power[j] <= your_power){
            win++;
            your_power = your_power - enemy_power[j];
        }
    }
    printf("%lld\n", win);

    return 0;
}