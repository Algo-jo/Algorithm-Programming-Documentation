#include <stdio.h>
#include <string.h>

void getString(char * str){
    strcpy(str, "Hello Everyone");
}

int main(){
    char str[50];
    getString(str);
    printf("%s\n", str);

    // char choice;
    // scanf("%c", &choice);
    // switch(choice){
    //     case 'a':{
    //         printf("Hello\n");
    //         break;
    //     }
    // }
    return 0;
}