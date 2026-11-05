#include <stdio.h>
#include <string.h>

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int amount = 0;
        scanf("%d", &amount); getchar();

        char nama[120][50] = {0};
        int nilai[120] = {0};
        for(int j = 0; j < amount; j++){
            scanf("%[^#]#%d", nama[j], &nilai[j]); getchar();
        }

        for(int k = 0; k < amount; k++){
            for(int l = amount - 1; l > k; l--){
                if(nilai[l] < nilai[l - 1]){
                    int tempNilai = nilai[l];
                    nilai[l] = nilai[l - 1];
                    nilai[l - 1] = tempNilai;

                    char tempNama[60];
                    strcpy(tempNama, nama[l]);
                    strcpy(nama[l], nama[l - 1]);
                    strcpy(nama[l - 1], tempNama);
                }
                else if(nilai[l] == nilai[l - 1]){
                    if(strcmp(nama[l], nama[l-1]) < 0){
                        int tempNilai = nilai[l];
                        nilai[l] = nilai[l - 1];
                        nilai[l - 1] = tempNilai;

                        char tempNama[60];
                        strcpy(tempNama, nama[l]);
                        strcpy(nama[l], nama[l - 1]);
                        strcpy(nama[l - 1], tempNama);
                    }
                }
            }
        }
        printf("Case #%d:\n", i + 1);
        for(int k = 0; k < amount; k++){
            printf("%s - %d\n", nama[k], nilai[k]);
        }
    }
    return 0;
}