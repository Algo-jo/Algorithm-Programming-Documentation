#include <stdio.h>
#include <string.h>
int main(){
    char kata[101];
        scanf("%s", &kata);

    int userLength = strlen(kata);
    int valid = 0;
    if(userLength > 8 && userLength < 33){
        for(int i = 0; i < userLength; i++){
            if(kata[i] >= 'A' && kata[i] <= 'Z'){
                valid++;
                break;
            }
        }
        for(int i = 0; i < userLength; i++){
            if(kata[i] >= 'a' && kata[i] <= 'z'){
                valid++;
                break;
            }
        }
        for(int i = 0; i < userLength; i++){
            if(kata[i] >= '0' && kata[i] <= '9'){
                valid++;
                break;
            }
        }
        for(int i = 0; i < userLength; i++){
            if(kata[i] >= 33 && kata[i] <= 47 || kata[i] >= 58 && kata[i] <= 64 
            || kata[i] >= 91 && kata[i] <= 96){
                valid++;
                break;
            }
        }
        if(valid == 1) printf("Password Anda Weak\n");
        if(valid == 2) printf("Password Anda Mediocre\n");
        if(valid == 3) printf("Password Anda Strong\n");
        if(valid == 4) printf("Password Anda Super Stronggg\n");

        }
    else printf("INVALID Password\n");
}