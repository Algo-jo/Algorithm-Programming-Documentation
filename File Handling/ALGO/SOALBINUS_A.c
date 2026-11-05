#include <stdio.h>
#include <string.h>

struct Orang{
    char nama[300];
    char tanaman[300];

};

int main(){
    FILE *file;
    file = fopen("testdata.in", "r");

    int jumlah;
    fscanf(file, "%d\n", &jumlah);

    struct Orang Data[jumlah];
    for(int i = 0; i < jumlah; i++){
        fscanf(file, "%[^#]#%[^\n]\n", Data[i].nama, Data[i].tanaman);
    }
    
    int pencarian;
    fscanf(file, "%d\n", &pencarian);
    for(int j = 0; j < pencarian; j++){
        char targetNama[200] = {0};
        fscanf(file, "%s\n", &targetNama);

        int ketemu = 0;
        int indexKetemu = 0;
        for(int k = 0; k < jumlah; k++){
           if(strcmp(targetNama, Data[k].nama) == 0){
                ketemu = 1;
                indexKetemu = k;
                break;
           }
        }
        
        if(ketemu == 1){
            printf("Case #%d: %s\n", j + 1, Data[indexKetemu].tanaman);
        }
        else printf("Case #%d: N/A\n", j + 1);
    }

    fclose(file);
    return 0;
}