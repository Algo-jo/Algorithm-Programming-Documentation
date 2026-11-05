#include <stdio.h>
#include <string.h>

int main(){
    FILE *file = fopen("testdata.in", "r");

    int testcase = 0;
    fscanf(file, "%d\n", &testcase);
    
    int amount = 0;
    int code[1050];
    char name[1050][45];
    while(fscanf(file, "%d#%[^\n]\n", &code[amount], name[amount]) == 2){
        amount++;
    }
    for(int i = 0; i < amount; i++){
        int min = i;
        for(int j = amount - 1; j > i; j--){
            if(strcmp(name[j], name[min]) < 0){
                min = j;
            }
        }
        if(min != i){
            char temp[45];
            strcpy(temp, name[i]);
            strcpy(name[i], name[min]);
            strcpy(name[min], temp);

            int tempA = code[i];
            code[i] = code[min];
            code[min] = tempA;
        }
    }
    for(int k = 0; k < amount; k++){
        printf("%d %s\n", code[k], name[k]);
    }
    fclose(file);
    return 0;
}