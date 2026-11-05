#include <stdio.h>
#include <string.h>

struct siswa{
    char nama[150];
    char nim[150];
}data[150];

int main(){
    FILE *file = fopen("testdata.in", "r");
    int testcase;
    
    fscanf(file, "%d\n", &testcase);
    for(int i = 0; i < testcase; i++){
        fscanf(file, "%s %s\n", data[i].nim, data[i].nama);
    }
    int testing = 0;
    fscanf(file, "%d\n", &testing);

    char target[150][20];
    for(int j = 0; j < testing; j++){
        fscanf(file, "%s\n", target[j]);
      
    }

    for(int x = 0; x < testing; x++){
    int ada = -1;
        for(int y = 0; y < testcase; y++){
            if(strcmp(target[x], data[y].nim) == 0){
                printf("Case #%d: %s\n", x + 1, data[y].nama);
                ada = 1;
            }
        }
        if(ada == -1) printf("Case #%d: N/A\n", x + 1);
    }

    return 0;
}