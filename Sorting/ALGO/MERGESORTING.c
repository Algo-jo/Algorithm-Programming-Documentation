#include <stdio.h>

void merging(int arr[], int left, int mid, int right){
    int i, j, k;
    i = left;
    j = mid + 1;
    k = 0;
    int temp[right - left + 1];

    while(i <= mid && j <= right){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i <= mid){
        temp[k] = arr[i];
        i++; k++;
    }
    while(j <= right){
        temp[k] = arr[j];
        j++; k++;
    }

    for(int p = left; p <= right; p++){
        arr[p] = temp[p - left];
    }
}

void mergeSort(int arr[], int left, int right){
    if(left >= right) return;
    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merging(arr, left, mid, right);
}

int main(){
    int arr[] = {9, 8, 1, 5, 3, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}