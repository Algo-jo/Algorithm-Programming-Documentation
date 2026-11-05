#include <stdio.h>

void tree(int arr[], int n, int index, int sum){
    if(index >= n) return;
    sum += arr[index];
    if((2*index) + 1 >= n && (2*index) + 2 >= n){
        printf("%d\n", sum);
        return;
    }
    tree(arr, n, (2*index) + 1, sum);
    tree(arr, n, (2*index) + 2, sum);
}

int main(){
    int tc, n;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int arr[120] = {0};
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
        }
        printf("Case #%d:\n", i + 1);
        tree(arr, n, 0, 0);
    }
    return 0;
}