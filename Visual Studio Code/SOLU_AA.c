#include <stdio.h>
int main(){
    int assign, mid, final;
    double assign1, mid1, final1;
    scanf("%d %d %d", &assign, &mid, &final);
    
    assign1 = (double) assign * 20 / 100;
    mid1 = (double) mid * 30 / 100;
    final1 = (double) final * 50 / 100;
    printf("%.2f\n", assign1 + mid1 + final1);
    return 0;
}

 