#include <stdio.h>
#include <string.h>

struct DATA{
    char nama[50];
    char plant[50];
} data[100];

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int tc, test;
    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%[^#]#%[^\n]\n", data[i].nama, data[i].plant);
    }
    fscanf(fp, "%d\n", &test);
    for(int i = 0; i < test; i++){
        char x[50] = {0};
        int found = -1;
        fscanf(fp, "%[^\n]\n", &x);
        printf("Case #%d: ", i + 1);
        for(int j = 0; j < tc; j++){
            if(strcmp(x, data[j].nama) == 0){
                printf("%s\n", data[j].plant);
                found = 1;
                break;
            }
        }
        if(found == -1) printf("N/A\n");
    }
    return 0;
}