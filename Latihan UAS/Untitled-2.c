#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = fopen("testdatas.in", "r");
    int tc;
    char inisial[50][50] = {0};
    char arti[50][50] = {0};
    fscanf(fp, "%d\n", &tc);
    
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%[^#]#%s\n", inisial[i], arti[i]);
    }
    // for(int i = 0; i < tc; i++){
    //     printf("%s %s\n", inisial[i], arti[i]);
    // }
    int testing = 0;
    char str[50];
    fscanf(fp, "%d\n", &testing);
    fscanf(fp, "%[^\n]\n", str);
    printf("%s\n", str);
    char *token = strtok(str, " ");

    while(token != NULL){
        int found = 0;
        for(int j = 0; j < tc; j++){
            if(strcmp(token, inisial[j]) == 0){
                printf("%s", arti[j]);
                found = 1;
                break;
            }
        }
        if(found == 0) printf("%s", token);
        token = strtok(NULL, " ");
        printf("%c", (token == NULL) ? '\n' : ' ');
    }
    return 0;
}

// char *token = strtok(str, " ");
// token = strtok(NULL, " ");

