#include <stdio.h>

int main(){
    int tc, n, target, arr[20000] = {0}, count = 0;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d %d", &n, &target);

        for(int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
            if(arr[j] >= target) count++;
        }
        printf("Case #%d: %d\n", i + 1, count);
        count = 0;
    }
    return 0;
}