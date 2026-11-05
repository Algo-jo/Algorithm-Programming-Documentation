#include <stdio.h>

int main(){
    int tc, n, x;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int count = 0, arr[1000] = {0};
        scanf("%d %d", &n, &x);

        for(int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
        }
        for(int a = 0; a < n; a++){
            for(int b = n - 1; b > a; b--){
                if(arr[b] < arr[b - 1]){
                    count++;
                    int temp = arr[b];
                    arr[b] = arr[b - 1];
                    arr[b - 1] = temp;
                }
            }
        }
        // for(int c = 0; c < n; c++){
        //     printf("%d ", arr[c]);
        // } 
        printf("Case #%d: %d\n", i + 1, count * x);
    }
}