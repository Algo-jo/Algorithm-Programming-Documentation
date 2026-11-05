#include <stdio.h>
#include <string.h>

struct data{
    char nama[1100];
    double suhu;
    char derajat;

}kota[150];

int main(){
    FILE *file = fopen("testdata.in", "r");
    
    int amount = 0;
    while(fscanf(file, "%[^#]#%lf#%c\n", kota[amount].nama, &kota[amount].suhu, &kota[amount].derajat) == 3){
        amount++;
    }   
    double fahrenStorage[150];
    for(int i = 0; i < amount; i++){
        if(kota[i].derajat == 'F'){
            fahrenStorage[i] = kota[i].suhu;
            kota[i].suhu = (kota[i].suhu - 32) * 5 / 9;
        }
    }

    for(int i = 0; i < amount; i++){
        int min = i;
        for(int j = i; j < amount; j++){
            if(kota[j].suhu < kota[min].suhu){
                min = j;
            }
            else if(kota[j].suhu == kota[min].suhu){
                if(strcmp(kota[j].nama, kota[min].nama) < 0){
                    min = j;
                }
            }
        }
        if(min != i){
            double temp = kota[min].suhu;
            kota[min].suhu = kota[i].suhu;
            kota[i].suhu = temp;

            double fahrenTemp = fahrenStorage[min];
            fahrenStorage[min] = fahrenStorage[i];
            fahrenStorage[i] = fahrenTemp;

            char temporary[1100];
            strcpy(temporary, kota[min].nama);
            strcpy(kota[min].nama, kota[i].nama);
            strcpy(kota[i].nama, temporary);

            char derajatTemp = kota[min].derajat;
            kota[min].derajat = kota[i].derajat;
            kota[i].derajat = derajatTemp;
        }
    }

    for(int j = 0; j < amount; j++){
        if(kota[j].derajat == 'F'){
            printf("%s is %.2lf%c\n", kota[j].nama, fahrenStorage[j], kota[j].derajat);
        }
        else printf("%s is %.2lf%c\n", kota[j].nama, kota[j].suhu, kota[j].derajat);
    }
    fclose(file);
    return 0;
}