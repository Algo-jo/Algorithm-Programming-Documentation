#include <stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        int jumlahMeja = 0, kapasitasPerut = 0, porsiSekarang = 0, porsiMaks = 0, sisaPerut = 0;
        scanf("%d %d %d", &jumlahMeja, &kapasitasPerut, &porsiSekarang);

        porsiMaks = porsiSekarang;
        
        int porsiMeja = 0;
        for(int j = 1; j <= jumlahMeja; j++){
            scanf("%d", &porsiMeja);

            if(porsiMeja > porsiMaks){
                if(kapasitasPerut >= porsiMeja){
                    porsiMaks = porsiMeja;
                }
            }
        }
        printf("Case #%d: %d\n", i, porsiMaks);
    }


    return 0;
}