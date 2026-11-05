#include <stdio.h>
#include <string.h>

struct x{
    char shortWord[120];
    char longWord[120];
}data[120];

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int tc;
    fscanf(fp, "%d\n", &tc);
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%[^#]#%[^\n]\n", data[i].shortWord, data[i].longWord);
    }
    int n;
    char str[120] = {0};
    fscanf(fp, "%d\n", &n);
    for(int i = 0; i < n; i++){
        fscanf(fp, "%[^\n]\n", str);
        printf("Case #%d:\n", i + 1);
        char *token = strtok(str, " ");

        while(token != NULL){
            int found = -1;
            for(int j = 0; j < tc; j++){
                if(strcmp(token, data[j].shortWord) == 0){
                    printf("%s", data[j].longWord);
                    found = 1;
                    break;
                }
            }
            if(found == -1){
                printf("%s", token);
            }
            token = strtok(NULL, " ");
            printf("%c", (token == NULL) ? '\n' : ' ');
        }
    }
    return 0;
}