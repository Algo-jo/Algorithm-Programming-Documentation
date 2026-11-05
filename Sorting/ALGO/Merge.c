#include <stdio.h>

void merging(int array[], int left, int mid, int right){
    int a, b, c;
    a = left;
    b = mid + 1;
    c = 0;
    int temp[right - left + 1];

    while(a <= mid && b <= right){
        if(array[a] < array[b]){
            temp[c] = array[a];
            c++; a++;
        }
        else if(array[b] < array[a]){
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
    for(int i = left; i <= right; i++){
        array[i] = temp[i - left];
    }
}


void mergeSort(int array[], int left, int right){
    if(left >= right) return;
    int mid = (left + right) / 2;

    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    merging(array, left, mid, right);
}

int main(){
    int array[] = {1, 7, 4, 6, 2, -10};
    int size = sizeof(array) / sizeof(array[0]);

    // mergeSort(array, 0, size - 1);
    // for(int i = 0; i < size; i++){
    //     printf("%d ", array[i]);
    // }

    // for(int i = 0; i < size; i++){
    //     int min = i;
    //     for(int j = size - 1; j > i; j--){
    //         if(array[j] < array[min]){
    //             min = j;
    //         }
    //     }
    //     if(min != i){
    //         int temp = array[i];
    //         array[i] = array[min];
    //         array[min] = temp;
    //     }
    // }

    for(int i = 0; i < size; i++){
        int c = array[i];
        int j = i - 1;
        while(j >= 0 && array[j] > c){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = c;
    }

    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    return 0;
}