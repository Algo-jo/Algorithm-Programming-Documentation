#include <stdio.h>
#include <string.h>

int main(){
    int testcase;
    scanf("%d", &testcase); getchar();

    char nama[120][10];
    // for(int a = 0; a < 120; a++){
    //     for(int b = 0; b < 10; b++){
    //         nama[a][b] = 0;
    //     }
    // }
    int durasi[120];
    // for(int a = 0; a < 120; a++){
    //     durasi[a] = 0;
    // }

    for(int i = 0; i < testcase; i++){
        scanf("%s %d", &nama[i], &durasi[i]);
    }
    for(int i = 0; i < testcase; i++){
        int min = i;
        for(int j = i; j < testcase; j++){
            if(durasi[j] < durasi[min]){
                min = j;
            }
            else if(durasi[j] == durasi[min]){
                if(strcmp(nama[j], nama[min]) < 0){
                    min = j;
                }
            }
        }
        if(min != i){
            int temp = durasi[i];
            durasi[i] = durasi[min];
            durasi[min] = temp;

            char tempo[120];
            strcpy(tempo, nama[i]);
            strcpy(nama[i], nama[min]);
            strcpy(nama[min], tempo);
        }
    }
    for(int x = 0; x < testcase; x++){
        printf("%s\n", nama[x]);
    }
    return 0;
}   