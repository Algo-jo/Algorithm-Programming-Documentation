#include <stdio.h>
#include <string.h>

struct x{
    char kode[50];
    char nama[50];
}data[200];

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int tc;
    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%s %s\n", data[i].kode, data[i].nama);
    }
    
    int n = 0;
    char target[50] = {0};
    fscanf(fp, "%d\n", &n);
    for(int i = 0; i < n; i++){
        int found = -1;
        fscanf(fp, "%s\n", target);
        printf("Case #%d: ", i + 1);
        for(int j = 0; j < tc; j++){
            if(strcmp(target, data[j].kode) == 0){
                printf("%s\n", data[j].nama);
                found = 1;
                break;
            }
        }
        if(found != 1) printf("N/A\n");
    }
    return 0;

}