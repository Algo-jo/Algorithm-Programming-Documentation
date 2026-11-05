#include <stdio.h>
int main(){
    int test;
    scanf("%d", &test);
    int angka;
    int total = 0;

    for(int i = 1; i <= test; i++){
        scanf("%d", &angka);

        total += angka;
    }
    printf("%d\n", total);
    // 15 = 1 + 5 = 6
    // 29 = 2 + 9 = 11 = 1 + 1 = 2
    
    int newSum = 100;
    while(newSum >= 10){
        int new1 = 0, new2 = 0;
        newSum = 0;

        new1 = total / 10;
        new2 = total % 10;
        newSum = new1 + new2;
        total = newSum;
    }
    printf("%d", newSum);
    return 0;
}