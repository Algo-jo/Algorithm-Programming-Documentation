#include <stdio.h>

int main(){
    FILE *file = fopen("testdata.in", "r");
    int testcase;
    fscanf(file, "%d\n", &testcase);
    for(int i = 0; i < testcase; i++){
        int tumpukan = 0;
        fscanf(file, "%d\n", &tumpukan);

        int array[200] = {0};
        for(int j = 0; j < tumpukan; j++){
            fscanf(file, "%d", &array[j]);
        }

        int totalLuas = 0;

        // Hitung jumlah balok
        for(int a = 0; a < tumpukan; a++){
            totalLuas += array[a];
        }
        int totalKeliling = 0;

        // Jumlah sisi atas, bawah, kiri, kanan
        totalKeliling = array[0] + array[tumpukan - 1] + (tumpukan * 2);
        int selisih = 0;

        // Itung selisih (dapetin keliling di dalam)
        for(int a = 0; a < tumpukan - 1; a++){
            selisih = array[a] - array[a + 1];
            if(selisih < 0) selisih *= - 1;

            totalKeliling += selisih;
        }
        printf("Case #%d: %d %d\n", i + 1, totalKeliling * 2, totalLuas * 4);
    }


    return 0;
}