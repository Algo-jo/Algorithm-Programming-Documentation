#include <stdio.h>
#include <string.h>
int main(){
    int jumlahTotal, posisiMain, jumlahAngkot;
    scanf("%d %d %d", &jumlahTotal, &posisiMain, &jumlahAngkot);
    int kapasitasAngkot[12];

    int dapetAngkot = 1;
    int kapTotal = 0;
    int posisiAwal = posisiMain;
    if(posisiMain <= jumlahTotal){
        for(int i = 0; i < jumlahAngkot; i++){
            scanf("%d", &kapasitasAngkot[i]);


            if(kapasitasAngkot[i] >= posisiMain){
                printf("%d\n", dapetAngkot);
                break;
            }
            else if(kapasitasAngkot[i] < posisiMain){
                posisiMain -= kapasitasAngkot[i];
                dapetAngkot++;
            }
            kapTotal += kapasitasAngkot[i];
        }
            if(kapTotal < posisiAwal){
                printf("-1\n");
            }
    }

    return 0;
}