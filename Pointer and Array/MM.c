#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int array[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &array[i][j]);
        }
    }

    int error = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = j + 1; k < n; k++){
                if(array[i][j] == array[i][k] || array[j][i] == array[k][i]){
                    error = 1;
                }
            }
        }
    }
    if(error == 1) printf("Nay\n");
    else printf("Yay\n");
    return 0;
}