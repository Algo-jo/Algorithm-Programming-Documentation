#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    file = fopen("testdata.in", "r");

    int testcase;
    fscanf(file, "%d", &testcase);

    char nim[1005][15];
    char nama[1005][25];
    for(int i = 0; i < testcase; i++){
        fscanf(file, "%s %s", nim[i], nama[i]);
    }

    for(int i = 0; i < testcase - 1; i++){
        int min = i;
        for(int j = testcase - 1; j > i; j--){
            if(strcmp(nim[j], nim[min]) < 0){
                min = j;
            }
        }
        if(min != i){
            char temp[15];
            strcpy(temp, nim[min]);
            strcpy(nim[min], nim[i]);
            strcpy(nim[i], temp);

            char temp1[25];
            strcpy(temp1, nama[min]);
            strcpy(nama[min], nama[i]);
            strcpy(nama[i], temp1);
        }
    }
    for(int i = 0; i < testcase; i++){
        printf("%s %s\n", nim[i], nama[i]);
    }
    fclose(file);
    return 0 ;
}