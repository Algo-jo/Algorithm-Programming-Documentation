#include <stdio.h>

void merging(int array[], int left, int mid, int right){
    int a = left, b = mid + 1, c = 0;
    int temp[right - left + 1];

    while(a <= mid && b <= right){
        if(array[a] < array[b]){
            temp[c] = array[a];
            c++; a++;
        }
        else{
            temp[c] = array[b];
            c++; b++;
        }
    }
    while(a <= mid){
        temp[c] = array[a];
        c++; a++;
    }
    while(b <= right){
        temp[c] = array[b];
        c++; b++;
    }
    for(int d = left; d <= right; d++){
        array[d] = temp[d - left];
    }
}

void mergeSort(int array[], int left, int right){
    if(left >= right) return;
    int mid = (left + right) / 2;

    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    merging(array, left, mid, right);
}

int binarySearch(int array[], int target, int right){
    int left = 0;
    while(left <= right){
        int mid = (left + right) / 2;
        if(target == array[mid]){
            return mid + 1;
        }
        else if(target < array[mid]){
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return -1;
}

int main(){
    int tc, testing, array[100050] = {0};
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &array[i]);
    }
    mergeSort(array, 0, tc - 1);
    // for(int i = 0; i < tc; i++){
    //     printf("%d ", array[i]);
    // }

    scanf("%d", &testing);
    int target[100050] = {0};
    for(int i = 0; i < testing; i++){
        scanf("%d", &target[i]);
        target[i] = binarySearch(array, target[i], tc - 1);
    }
    for(int i = 0; i < testing; i++){
        printf("%d\n", target[i]);
    }
}