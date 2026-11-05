#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int tc, test;
    char kode[120][30] = {0}, nama[120][30] = {0};

    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%s %s\n", kode[i], nama[i]);
    }
    fscanf(fp, "%d\n", &test);

    for(int i = 0; i < test; i++){
        char target[30] = {0}, x = -1, flag = -1;
        fscanf(fp, "%s\n", target);
        for(int j = 0; j < tc; j++){
            if(strcmp(target, kode[j]) == 0){
                x = j;
                flag = 1;
                break;
            }
        }
        printf("Case #%d: ", i + 1);
        printf("%s\n", (flag == 1) ? nama[x] : "N/A");
    }
    return 0;
}