#include <stdio.h>
#include <string.h>

struct x{
    char nama[50];
    int nilai;
}data[1050];

int main(){
    int tc, n;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &n); getchar();

        for(int j = 0; j < n; j++){
            scanf("%[^#]#%d", data[j].nama, &data[j].nilai); getchar();
        }
        for(int a = 0; a < n; a++){
            for(int b = n - 1; b > a; b--){
                if(data[b].nilai > data[b - 1].nilai){
                    int temp = data[b].nilai;
                    data[b].nilai = data[b - 1].nilai;
                    data[b - 1].nilai = temp;

                    char tempNama[50] = {0};
                    strcpy(tempNama, data[b].nama);
                    strcpy(data[b].nama, data[b - 1].nama);
                    strcpy(data[b - 1].nama, tempNama);
                } else if(data[b].nilai == data[b - 1].nilai){
                    if(strcmp(data[b].nama, data[b - 1].nama) < 0){
                        int temp = data[b].nilai;
                        data[b].nilai = data[b - 1].nilai;
                        data[b - 1].nilai = temp;

                        char tempNama[50] = {0};
                        strcpy(tempNama, data[b].nama);
                        strcpy(data[b].nama, data[b - 1].nama);
                        strcpy(data[b - 1].nama, tempNama);
                    }
                }
            }
        }
        
        char target[50] = {0};
        int found = -1;
        scanf("%s", target); getchar();
        for(int a = 0; a < n; a++){
            if(strcmp(target, data[a].nama) == 0){
                found = a;
            }
        }
        printf("Case #%d: %d\n", i + 1, found + 1);
    }
    return 0;
}