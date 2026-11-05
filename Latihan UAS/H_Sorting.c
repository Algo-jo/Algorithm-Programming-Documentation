#include <stdio.h>
#include <string.h>

int main(){
    int x, y;
    char arr[250][250] = {0};
    scanf("%d %d", &y, &x); getchar();
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            scanf("%c", &arr[i][j]);
        }
        getchar();
    }
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            for(int k = x - 1; k > j; k--){
                if(arr[i][k] < arr[i][k - 1]){
                    char temp = arr[i][k];
                    arr[i][k] = arr[i][k - 1];
                    arr[i][k - 1] = temp;
                }
            }
        }
    }
    for(int i = 0; i < y; i++){
        for(int j = y - 1; j > i; j--){
            if(strcmp(arr[j], arr[j - 1]) > 0){
                char temp[250] = {0};
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j - 1]);
                strcpy(arr[j - 1], temp);
            }
        }
    }
    for(int i = 0; i < y; i++){
        printf("%s\n", arr[i]);
    }

    return 0;
}