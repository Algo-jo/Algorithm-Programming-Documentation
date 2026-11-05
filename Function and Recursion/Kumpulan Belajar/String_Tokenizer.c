#include <stdio.h>
#include <string.h>

int main(){
    char str[] = {"Hello Semuanya Namaku Budi"};
    char *token = strtok(str, " ");
    
    while(token != NULL){
        printf("%s", token);

        token = strtok(NULL, " ");
        printf("%c", (token != NULL) ? ' ' : '\n');
        // if(token != NULL) printf(" ");
        // else printf("\n");
    }
    return 0;
}