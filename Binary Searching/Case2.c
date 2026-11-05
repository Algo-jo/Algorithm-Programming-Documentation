#include <stdio.h>
#include <string.h>

struct x{
    char username[100];
    char gmail[100];
    char password[100];
}data[100];

int count = 0;

void insert(struct x data[]){
    int len, valid = 1, Evalid = 0, huruf = -1, angka = -1;
    do{
        printf("Insert your username[6 chars] : ");
        scanf("%s", data[count].username); getchar();
        len = strlen(data[count].username);
    }while(len < 6);
    do{
        printf("Insert your password[alphanumeric] : ");
        scanf("%s", data[count].password); getchar();
        len = strlen(data[count].password);

        valid = 1;
        for(int i = 0; i < len; i++){
            if(data[count].password[i] >= 'a' && data[count].password[i] <= 'z'){
                huruf = 1;
            }
            else if(data[count].password[i] >= '0' && data[count].password[i] <= '9'){
                angka = 1;
            }
            else{
                valid = -1;
                break;
            }
        }
        // printf("%d %d\n", huruf, angka);
    }while(huruf != 1 || angka != 1);

    do{
        printf("Insert your email : ");
        scanf("%s", data[count].gmail); getchar();
        len = strlen(data[count].gmail);
        Evalid = 0;
        for(int i = 0; i < len; i++){
            if(data[count].gmail[i] == '@'){
                if(i < len - 1 && data[count].gmail[i + 1] != '.'){
                    Evalid++;
                }
                break;
            }
        }
        if(data[count].gmail[len - 1] == 'm'){
            if(data[count].gmail[len - 2] == 'o'){
                if(data[count].gmail[len - 3] == 'c'){
                    if(data[count].gmail[len - 4] == '.'){
                        Evalid++;
                    }
                }
            }
        }
    }while(Evalid != 2);
}

void print(struct x data[]){
    if(count == 0) printf("No data.\n");
    else{
        for(int i = 0; i < count; i++){
            printf("Username : %s, Password : %s, Email : %s\n", data[i].username,
            data[i].password, data[i].gmail);
        }
    }
}

int main(){
    int option;
    do{
        printf("1. Insert Data\n");
        printf("2. View All Data\n");
        printf("3. Exit\n");
        printf("Choose an Option : ");
        scanf("%d", &option); getchar();
        switch(option){
            case 1:{
                insert(data);
                count++;
                break;
            }
            case 2:{
                print(data);
                break;
            }
            case 3:{
                printf("TY\n");
                break;
            }
        }
    }while(option != 3);
    return 0;
}