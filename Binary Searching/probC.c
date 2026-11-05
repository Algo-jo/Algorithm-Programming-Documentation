#include <stdio.h>

long long binarySearch(long long array[], long long target, int size){
    int left = 0; 
    int right = size - 1;

    while(left <= right){
        int mid = (left + right) / 2;

        if(target == array[mid]){
            return mid;
        }
        else if(target > array[mid]){
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return left;
}

int main(){
    int amount;
    scanf("%d", &amount);
    long long arr[amount];
    long long total[amount];

    for(int i = 0; i < amount; i++){
        scanf("%lld", &arr[i]);

        if(i == 0){
            total[i] = arr[i];
        }
        else total[i] = total[i - 1] + arr[i];
    }

    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        long long target;
        scanf("%lld", &target);

        printf("Case #%d: ", i + 1);
        if(target < total[0]){
            printf("-1\n");
        }
        else {
            long long hasil = binarySearch(total, target, amount);
            printf("%lld\n", hasil + 1);
        }
    }
    return 0;
}