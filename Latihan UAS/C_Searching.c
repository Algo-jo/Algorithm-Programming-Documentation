#include <stdio.h>

int main(){
    int n, tc, arr[100000] = {0};
    scanf("%d %d", &n, &tc);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int target = 0;
    for(int i = 0; i < tc; i++){
        scanf("%d", &target);
        for(int j = 0; j < n; j++){
            if(arr[j] == target) arr[j] = -1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j > i; j--){
            if(arr[j] < arr[j - 1]){
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    // for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    if(arr[n - 1] != 0)printf("Maximum number is %d\n", arr[n - 1]);
    else printf("Maximum number is -1\n");
    return 0;
}