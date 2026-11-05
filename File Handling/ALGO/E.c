#include <stdio.h>

int main(){
    FILE *file;
    long long int testcase;

    file = fopen("testdata.in", "r");
    fscanf(file, "%lld\n", &testcase);

    for(int i = 0; i < testcase; i++){
        long long int tumpukan = 0;
        fscanf(file, "%lld\n", &tumpukan);

        long long int array[150] = {0};
        for(int j = 0; j < tumpukan; j++){
            fscanf(file, "%lld", &array[j]);
        }

        long long int totalLuas = 0;
        for(int b = 0; b < tumpukan; b++){
            totalLuas += array[b];
        }
        totalLuas = totalLuas * 4;

        long long int totalKeliling = 0;
        totalKeliling = array[0] + array[tumpukan - 1] + tumpukan * 2;

        long long int sisi[150] = {0};
        long long int tampung = 0;
        for(int x = 0; x < tumpukan - 1; x++){
            sisi[x] = array[x] - array[x + 1];
            if(sisi[x] < 0){
                sisi[x] *= -1;
            }

            tampung += sisi[x];
        }
        totalKeliling = totalKeliling + tampung;
        printf("Case #%d: %lld %lld\n", i + 1, totalKeliling * 2, totalLuas);
    }
    fclose(file);
    return 0;
}