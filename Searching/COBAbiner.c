#include <stdio.h>

int binarySearch(int target, int array[], int size){
    int left = 0;
    int right = size - 1;
    int result = -1;

    while(left <= right){
        int mid = (left + right) / 2;
        if(target == array[mid]){
            result = mid;
            right = mid - 1;
        }
        else if(target < array[mid]){
            right = mid - 1;
        }
        else if(target > array[mid]){
            left = mid + 1;
        }
    }
    return result;
}

int main(){
    int array[] = {1, 2, 3, 3, 4, 10, 5, 1};
    int size = sizeof(array) / sizeof(array[0]);

    int target = 3;
    int hasil;
    hasil = binarySearch(target, array, size);
    if(hasil == -1) printf("Tai\n");
    else printf("%d\n", hasil);


}