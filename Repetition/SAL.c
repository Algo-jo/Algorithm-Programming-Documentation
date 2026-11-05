#include <stdio.h>
int main(){

    int num_weapon, num_dragon;
    int weapon_power = 0, dragon_power = 0, highest_weapon = 0, highest_dragon = 0;
    scanf("%d %d", &num_weapon, &num_dragon); getchar();

    for(int i = 1; i <= num_weapon; i++){
        scanf("%d", &weapon_power); getchar();
        if(weapon_power > highest_weapon){
            highest_weapon = weapon_power;
        }
    }
    for(int j = 1; j <= num_dragon; j++){
        scanf("%d", &dragon_power); getchar();
        if(dragon_power > highest_dragon){
            highest_dragon = dragon_power;
        }
    }
    if(highest_weapon > highest_dragon){
        printf("The dark secret was true\n");
    }
    else{
        printf("Secret debunked\n");
    }
    return 0;
}