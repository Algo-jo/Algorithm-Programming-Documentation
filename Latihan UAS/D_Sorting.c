#include <stdio.h>
#include <string.h>

struct x{
    char nama[1050];
    char artis[1050];
    int view;
}data[100];

void arrange(int j){
    int tempView = data[j].view;
    data[j].view = data[j-1].view;
    data[j-1].view = tempView;

    char tempNama[1050] = {0};
    strcpy(tempNama, data[j].nama);
    strcpy(data[j].nama, data[j-1].nama);
    strcpy(data[j-1].nama, tempNama);

    char tempArtis[1050] = {0};
    strcpy(tempArtis, data[j].artis);
    strcpy(data[j].artis, data[j-1].artis);
    strcpy(data[j-1].artis, tempArtis);
}

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int tc = 0;
    while(fscanf(fp, "%[^#]#%[^#]#%d\n", data[tc].nama, data[tc].artis, &data[tc].view) == 3){
        tc++;
    }
    for(int i = 0; i < tc; i++){
        for(int j = tc - 1; j > i; j--){
            if(data[j].view > data[j-1].view){
                arrange(j);
            }else if(data[j].view == data[j-1].view){
                if(strcmp(data[j].nama, data[j-1].nama) < 0){
                    arrange(j);
                }
            }
        }
    }
    for(int i = 0; i < tc; i++){
        printf("%s by %s - %d\n", data[i].nama, data[i].artis, data[i].view);
    }
    fclose(fp);
    return 0;
}