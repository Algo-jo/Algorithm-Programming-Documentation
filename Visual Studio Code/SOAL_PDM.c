#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    long long totalDamage = 0;  
    int baseDamage = 100;  
    int bonus = 0;  
    
    for (int i = 0; i < N; i++) {
        totalDamage += baseDamage + bonus;  
        bonus += 50;  
    }
    
    printf("%lld\n", totalDamage);
    return 0;
}