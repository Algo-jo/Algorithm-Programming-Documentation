#include <stdio.h>

void merging(int arr[], int left, int mid, int right){
    int a = left, b = mid + 1, c = 0;
    int temp[right - left + 1];

    while(a <= mid && b <= right){
        if(arr[a] < arr[b]){
            temp[c] = arr[a];
            c++; a++;
        }
        else{
            temp[c] = arr[b];
            c++; b++;
        }
    }
    while(a <= mid){
        temp[c] = arr[a];
        c++; a++;
    }
    while(b <= right){
        temp[c] = arr[b];
        c++; b++;
    }
    for(int d = left; d <= right; d++){
        arr[d] = temp[d - left];
    }
}

void mergeSort(int arr[], int left, int right){
    if(left >= right) return;
    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merging(arr, left, mid, right);
}

int binarySearch(int target, int arr[], int right, int left){
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(target == arr[mid]){
            return mid + 1;
        }
        else if(target < arr[mid]){
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return -10;
}

int main(){
    int n, arr[100050] = {0}, tc, target[100050];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, n - 1);
    // for(int i = 0; i < n; i++){
    //     printf("%d ", arr[i]);
    // }

    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &target[i]);
    }
    for(int i = 0; i < tc; i++){
        int res = binarySearch(target[i], arr, n - 1, 0);
        if(res == -10) printf("-1\n");
        else printf("%d\n", res);
    }
    return 0;
}