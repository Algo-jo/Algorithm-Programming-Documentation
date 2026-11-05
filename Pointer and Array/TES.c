#include <stdio.h>
#include <string.h>
int main(){

    char num[100];
    scanf("%s", num);

    for(int i = 0; i < strlen(num); i++){
        if(num[i] >= 'A' && num[i] <= 'Z'){
            printf("Asik\n");
            break;
        }
    }   
}