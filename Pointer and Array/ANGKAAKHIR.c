#include <stdio.h>
#include <string.h>

int main(){
    int jumlahAngka;
    scanf("%d", &jumlahAngka);

    int totalAngka = 0;
    for(int i = 0; i < jumlahAngka; i++){
        int angka = 0;
        scanf("%d", &angka);
        totalAngka += angka;
    }
    int newTotal = 20;
    while(newTotal >= 10){
        newTotal = 0;
        int new1 = 0, new2 = 0;

        new1 = totalAngka / 10;
        new2 = totalAngka % 10;
        newTotal += new1 + new2;

        totalAngka = newTotal;
    }
    printf("%d", totalAngka);
    return 0;
}