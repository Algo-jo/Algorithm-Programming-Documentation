#include <stdio.h>

int main(){
    int tc, n;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int arr[6000] = {0};
        long long total = 0;
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
            total += arr[j];
        }
        for(int j = 0; j < n; j++){
            for(int k = n - 1; k > j; k--){
                if(arr[k] < arr[k - 1]){
                    long long int temp = arr[k];
                    arr[k] = arr[k - 1];
                    arr[k - 1] = temp;
                }
            }
        }
        printf("Case #%d:\n", i + 1);
        printf("Mean : %.2lf\n", (double)total / n);
        if(n % 2 == 1)printf("Median : %d.00\n", arr[n/2]);
        else printf("Median : %.2lf\n", (double)(arr[n/2] + arr[n/2-1]) / 2);
    }
    return 0;
}