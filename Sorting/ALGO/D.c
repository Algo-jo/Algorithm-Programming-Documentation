#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    file = fopen("testdata.in", "r");

    char judul[100][1005];
    char artis[100][1005];
    int view[105];

    int amount = 0;
    while(fscanf(file, "%[^#]#%[^#]#%d\n", judul[amount], artis[amount], &view[amount]) == 3){
        amount++;
    }
    
    for(int i = 0; i < amount; i++){

        int min = i;
        for(int j = amount - 1; j > i; j--){
            if(view[j] > view[min]){
                min = j;
            }
            if(view[j] == view[min]){
                if(strcmp(judul[j], judul[j - 1]) < 0){
                    min = j;
                }
            }
        }
        if(min != i){
            int temp = view[i];
            view[i] = view[min];
            view[min] = temp;

            char judultemp[1005];
            strcpy(judultemp, judul[i]);
            strcpy(judul[i], judul[min]);
            strcpy(judul[min], judultemp);

            char artistemp[1005];
            strcpy(artistemp, artis[i]);
            strcpy(artis[i], artis[min]);
            strcpy(artis[min], artistemp);
        }
    }
    for(int i = 0; i < amount; i++){
        printf("%s by %s - %d\n", judul[i], artis[i], view[i]);
    }

    fclose(file);
    return 0;
}