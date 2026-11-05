#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int tc;
    char nim[1000][30] = {0}, nama[1000][30] = {0};
    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%s %s\n", &nim[i], &nama[i]);
    }
    for(int i = 0; i < tc; i++){
        for(int j = tc - 1; j > i; j--){
            if(strcmp(nim[j - 1], nim[j]) > 0){
                char nimTemp[30] = {0};
                strcpy(nimTemp, nim[j - 1]);
                strcpy(nim[j - 1], nim[j]);
                strcpy(nim[j], nimTemp);

                char namaTemp[30] = {0};
                strcpy(namaTemp, nama[j - 1]);
                strcpy(nama[j - 1], nama[j]);
                strcpy(nama[j], namaTemp);
            }
        }
    }
    for(int i = 0; i < tc; i++){
        printf("%s %s\n", nim[i], nama[i]);
    }
    fclose(fp);
    return 0;
}