#include <stdio.h>
int main(){
    long long int damage;
    long long int count;
    int bonus = 0;
    scanf("%lld", &count);
    long long int another, multi;

    if(count <= 2){
        multi = count - 1;
    }
    else {
        multi = count;
    }
    damage = 100 * count;
    bonus = 50 * multi;
    
    printf("%lld\n", damage + bonus);
    return 0;
}
n x 100 + 50 x (n - 1) / 2