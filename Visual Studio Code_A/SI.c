#include <stdio.h>
int main(){

    int enemy, jojo, lili, bibi;
    scanf("%d", &enemy); getchar();
    scanf("%d %d %d", &jojo, &lili, &bibi); getchar();

    int enemy_total = 0;
    int enemy_score = 0; 

    for(int i = 1; i <= enemy; i++){
        scanf("%d", &enemy_score);
        enemy_total += enemy_score;
    }
    double total = (double)(jojo + bibi + lili + enemy_total) / (3 + enemy);

    if(jojo < total)printf("Jojo tidak lolos\n");else printf("Jojo lolos\n");
    if(lili < total)printf("Lili tidak lolos\n");else printf("Lili lolos\n");
    if(bibi < total)printf("Bibi tidak lolos\n");else printf("Bibi lolos\n");
    
    return 0;
}