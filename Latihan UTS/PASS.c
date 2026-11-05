#include <stdio.h>
#include <string.h>
int main(){
    char password[101];
    scanf("%s", password);

    int panjang = strlen(password);
    int criteria = 0;
    if(panjang >= 8 && panjang <= 33){

        // Ngecek ada angka atau enggak
        for(int i = 0; i < panjang; i++){
            if(password[i] >= '0' && password[i] <= '9'){
                criteria++;
                break;
            }
        }
        // Ngecek ada huruf kapital atau enggak
        for(int i = 0; i < panjang; i++){
            if(password[i] >= 'A' && password[i] <= 'Z'){
                criteria++;
                break;
            }
        }
        // Ngecek ada special char atau enggak
        for(int i = 0; i < panjang; i++){
            if(password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' ||
            password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' ||
            password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+'){
                criteria++;
                break;
            }
        }
        if(criteria == 0) printf("Veryyyyyy Weak Password\n");
        else if(criteria == 1) printf("Weak Password\n");
        else if(criteria == 2) printf("Medium Password\n");
        else if(criteria == 3) printf("Strong Password\n");
    }
    else printf("Invalid Password\n");
    return 0;
}