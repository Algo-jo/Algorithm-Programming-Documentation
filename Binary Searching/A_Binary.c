#include <stdio.h>

int binarySearch(int target, int arr[], int right){
    int left = 0;
    int result = -10;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == target){
            result = mid;
            right = mid - 1;
        }
        else if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return result;
}

int main(){
    int n, tc, arr[100050] = {0}, target, res[100050] = {0};
    scanf("%d %d", &n, &tc);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < tc; i++){
        scanf("%d", &target);
        res[i] = binarySearch(target, arr, n - 1);
    }
    for(int i = 0; i < tc; i++){
        if(res[i] == -10) printf("-1\n");
        else printf("%d\n", res[i] + 1);
    }
    return 0;
}