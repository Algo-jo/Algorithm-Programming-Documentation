#include <stdio.h>
#include <string.h>

struct data{
    char shortword[150];
    char longword[150];
}dictionary[150];

int main(){
    FILE *file = fopen("testdata.in", "r");
    int testcase;
    char *result;
    fscanf(file, "%d\n", &testcase);
    for(int i = 0; i < testcase; i++){
        fscanf(file, "%[^#]#%[^\n]\n", dictionary[i].shortword, dictionary[i].longword);
    }

    int testing;
    fscanf(file, "%d\n", &testing);
    for(int j = 0; j < testing; j++){
        char sentence[150] = {0};
        fscanf(file, "%[^\n]\n", &sentence[j]);

        printf("Case #%d: ", j + 1);
        result = strtok(sentence, " ");
    }
    while(result != NULL){
        int flag = 0;
        for(int x = 0; x < testing; x++){
            if(strcmp(result, dictionary[x].shortword) == 0){
                printf("%s", dictionary[x].longword);
                flag = 1;
                break;
            }
        }
        if(flag == 1) printf("%s\n", result);
        result = strtok(NULL, " ");
        if(result != NULL) printf(" ");
        else printf("\n");
    }
    fclose(file);
    return 0;
}