#include <stdio.h>
#include <string.h>

struct x{
    int kode;
    char nama[50];
}data[1050];

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int tc;
    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%d#%[^\n]\n", &data[i].kode, data[i].nama);
    }
    for(int i = 0; i < tc; i++){
        for(int j = tc - 1; j > i; j--){
            if(strcmp(data[j - 1].nama, data[j].nama) > 0){
                char temp[50] = {0};
                strcpy(temp, data[j-1].nama);
                strcpy(data[j-1].nama, data[j].nama);
                strcpy(data[j].nama, temp);

                int tempo = data[j-1].kode;
                data[j-1].kode = data[j].kode;
                data[j].kode = tempo;
            }
        }
    }
    for(int i = 0; i < tc; i++){
        printf("%d %s\n", data[i].kode, data[i].nama);
    }
    fclose(fp);
    return 0;
}