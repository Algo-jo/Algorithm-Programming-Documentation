#include <stdio.h>
#include <string.h>

struct word{
    char shortWord[60];
    char longWord[60];
}data[120];

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int nt;
    fscanf(fp, "%d\n", &nt);

    for(int tc = 0; tc < nt; tc++){
        fscanf(fp, "%[^#]#%[^\n]\n", data[tc].shortWord, data[tc].longWord);
    }
    int ntc;
    char str[120];
    fscanf(fp, "%d\n", &ntc);
    for(int t = 0; t < ntc; t++){
        fscanf(fp, "%[^\n]\n", str);
        printf("Case #%d:\n", t + 1);

        char *token = strtok(str, " ");
        while(token != NULL){
        int found = 0;
            for(int i = 0; i < nt; i++){
                if(strcmp(token, data[i].shortWord) == 0){
                    printf("%s", data[i].longWord);
                    found = 1;
                    break;
                }
            }
            if(!found){
                printf("%s", token);
            }
            token = strtok(NULL, " ");
            printf("%c", (token == NULL) ? '\n' : ' ');
        }
    }
    fclose(fp);
    return 0;
}