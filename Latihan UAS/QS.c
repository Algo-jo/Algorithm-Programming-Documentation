#include <stdio.h>

int partition(int arr[], int left, int right){
    int i = left - 1;
    int j;
    int pivot = arr[right];
    for(j = left; j < right; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    i++;
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
    return i;
}

void quickSort(int arr[], int left, int right){
    if(left >= right) return;
    int pivot = partition(arr, left, right);

    quickSort(arr, left, pivot - 1);
    quickSort(arr, pivot + 1, right);
}

int main(){
    int arr[] = {5, 4, 1, 10, 2, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}