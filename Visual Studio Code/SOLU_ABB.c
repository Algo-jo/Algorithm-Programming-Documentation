#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    long long totalDamage = 0;  
    int baseDamage = 100;  
    int bonus = 0;  
    
    for (int i = 0; i < N; i++) {
        bonus += 50;
        totalDamage = baseDamage + bonus;    
    }
    
    printf("%lld\n", totalDamage);
    return 0;
}