#include <stdio.h>
#include <string.h>

struct data{
    char nama[50];
    int suhu;
    int suhuCelcius;
    char derajat[5];
}kota[50];

int main(){
    FILE *fp = fopen("testdatas.in", "r");
    int tc;
    fscanf(fp, "%d\n", &tc);

    for(int i = 0; i < tc; i++){
        fscanf(fp, "%[^#]#%d#%s\n", kota[i].nama, &kota[i].suhu, &kota[i].derajat);
        if(strcmp(kota[i].derajat, "F") == 0){
            kota[i].suhu = (kota[i].suhu - 32) * 5/9;
        }
    }
    
    for(int j = 0; j < tc; j++){
        for(int k = tc - 1; k > j; k--){
            if(kota[k].suhu < kota[k - 1].suhu){
                int temp = kota[k].suhu;
                kota[k].suhu = kota[j].suhu;
                kota[j].suhu = temp;

                char temp1[50];
                strcpy(temp1, kota[k].nama);
                strcpy(kota[k].nama, kota[j].nama);
                strcpy(kota[j].nama, temp1);

                char tempD[5];
                strcpy(tempD, kota[k].derajat);
                strcpy(kota[k].derajat, kota[j].derajat);
                strcpy(kota[j].derajat, tempD);
            } else if(kota[k].suhu == kota[k - 1].suhu){
                if(strcmp(kota[k].nama, kota[k - 1].nama) < 0){
                    int temp = kota[k].suhu;
                    kota[k].suhu = kota[j].suhu;
                    kota[j].suhu = temp;

                    char temp1[50];
                    strcpy(temp1, kota[k].nama);
                    strcpy(kota[k].nama, kota[j].nama);
                    strcpy(kota[j].nama, temp1);

                    char tempD[5];
                    strcpy(tempD, kota[k].derajat);
                    strcpy(kota[k].derajat, kota[j].derajat);
                    strcpy(kota[j].derajat, tempD);
                }
            }
        }
    }
    for(int j = 0; j < tc; j++){
        if(strcmp(kota[j].derajat, "F") == 0){
            printf("%s %d %s\n", kota[j].nama, (kota[j].suhu * 9/5) + 32, "F");
        }
        else{
            printf("%s %d %s\n", kota[j].nama, kota[j].suhu, kota[j].derajat);
        }
    }
    return 0;
}