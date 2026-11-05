#include <stdio.h>

int main(){
    int tc;
    long long arr[300] = {0};
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%lld", &arr[i]);
    }
    for(int i = 0; i < tc; i++){
        for(int j = tc - 1; j > i; j--){
            if(arr[j] < arr[j - 1]){
                long long temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    // for(int i = 0; i < tc; i++){
    //     printf("%lld ", arr[i]);
    // }
    long long power = 0;
    int count = 0;
    scanf("%lld", &power);
    for(int i = 0; i < tc; i++){
        if(power >= arr[i]){
            power -= arr[i];
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}