#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int n, m;
    fscanf(fp, "%d %d\n", &n, &m);
    char str[1000][1000] = {0};
    int i = 0, index = 0, x = 1;
    int value[1005] = {0};
    
    for(int i = 0; i < m; i++){
        fscanf(fp, "%[^\n]\n", str[i]);
        value[i] = x;
        if(strcmp(str[i], "#") == 0){
            x++;
            value[i] = 0;
        }
    }
    int target;
    fscanf(fp, "%d", &target);
    for(int i = 0; i < m; i++){
        if(value[i] == target){
            printf("%s\n", str[i]);
        }
    }
    fclose(fp);
    return 0;
}