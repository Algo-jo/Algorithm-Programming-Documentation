#include <stdio.h>

int binarysearch(int target, int array[], int size){
    int left = 0;
    int right = size - 1;
    int result = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(target == array[mid]){
            return mid;
        }
        else if(target < array[mid]){
            right = mid - 1;
        }
        else if(target > array[mid]){
            left = mid + 1;
        }
    }
    return -1;
}


int main(){
    // linear search
    // int array[] = {1, 2, 6, 7, 8, 8, 10, 20, 8};
    // int size = sizeof(array) / sizeof(array[0]);

    // int target = 20;
    // for(int i = 0; i < size; i++){
    //     if(array[i] == target){
    //         printf("%d is found on array %d", array[i], i);
    //         break;
    //     }
    // }

    int array[] = {1, 2, 3, 4, 5, 6, 9, 9, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int target = 9;
    int hasil = binarysearch(target, array, size);
    if(hasil != - 1){
        printf("%d is found on index %d ", target, hasil);
    }

    return 0;
}