#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    int n[120];
    char arr[120][20] = {0};
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%s %d", &arr[i], &n[i]);
    }
    for(int i = 0; i < tc; i++){
        for(int j = tc - 1; j > i; j--){
            if(n[j] < n[j - 1]){
                int tempN = n[j];
                n[j] = n[j - 1];
                n[j - 1] = tempN;

                char tempArr[30] = {0};
                strcpy(tempArr, arr[j]);
                strcpy(arr[j], arr[j - 1]);
                strcpy(arr[j - 1], tempArr);
            } else if(n[j] == n[j - 1]){
                if(strcmp(arr[j], arr[j - 1]) < 0){
                    int tempN = n[j];
                    n[j] = n[j - 1];
                    n[j - 1] = tempN;

                    char tempArr[30] = {0};
                    strcpy(tempArr, arr[j]);
                    strcpy(arr[j], arr[j - 1]);
                    strcpy(arr[j - 1], tempArr);
                }
            }
        }
    }
    for(int i = 0; i < tc; i++){
        printf("%s\n", arr[i]);
    }
    return 0;
}