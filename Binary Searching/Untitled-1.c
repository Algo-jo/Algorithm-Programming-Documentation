#include <stdio.h>

void print(int sizeR, int x, int y){
    for(int i = 0; i < sizeR; i++){
        for(int j = 0; j < sizeR; j++){
            if(j == x && i == y) printf("X");
            else if(i == 0 || j == 0 || j == sizeR - 1 || i == sizeR - 1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    char arr[10][10] = {0};
    int sizeR = sizeof(arr) / sizeof(arr[0]);
    int sizeC = sizeof(arr[0]) / sizeof(arr[0][0]);
    int x = 5, y = 5;

    print(sizeR, x, y);

    char move = '\0';
    while(move != 'x'){
        printf("Choose w/a/s/d/x : ");
        scanf("%c", &move); getchar();

        switch(move){
            case 'w':{
                y--;
                print(sizeR, x, y);
                break;
            }
            case 'a':{
                x--;
                print(sizeR, x, y);
                break;
            }
            case 's':{
                y++;
                print(sizeR, x, y);
                break;
            }
            case 'd':{
                x++;
                print(sizeR, x, y);
                break;
            }
        }
    }
    return 0;
}