#include <stdio.h>

void merging(int arr[], int left, int mid, int right){
    int a = left, b = mid + 1, c = 0;
    int temp[right - left + 1];

    while(a <= mid && b <= right){
        if(arr[a] < arr[b]){
            temp[c] = arr[a];
            c++; a++;
        }else{
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

int main(){
    int arr[] = {1, 5, 3, 2, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
