#include <stdio.h>
#include <string.h>

int main(){
    int jumlahOrang, posisiMain, jumlahAngkot, kapasitasAngkot[12];
    scanf("%d %d %d", &jumlahOrang, &posisiMain, &jumlahAngkot);
    for(int i = 0; i < jumlahAngkot; i++){
        scanf("%d", &kapasitasAngkot[i]);
    }
    // 3 3 3
    // 10 6 3 
    int posisiMainAwal = posisiMain;
    int dapetAngkot = 1;
    int kapasitasTotal = 0;
    for(int j = 0; j < jumlahAngkot; j++){

        if(kapasitasAngkot[j] >= posisiMain){
            printf("%d\n", dapetAngkot);
            break; // --> jika kapasitas angkot akhirnya mencukupi posisi Main
            // break looping dan print, dapat angkot ke berapa
        }
        else if(kapasitasAngkot[j] < posisiMain){
            posisiMain -= kapasitasAngkot[j];
            dapetAngkot++;
            // jika posisi Main masih melebihi kapasitas angkot
            // kurang urutan Main dan tambah angkot ke-i
        }
        kapasitasTotal += kapasitasAngkot[j]; // --> menghitung total kap angkot
        // dimana jika masih kurang, maka Main tidak dapat naik
    }   
        if(kapasitasTotal < posisiMainAwal){
          printf("-1\n");
        }
    
    return 0;
}