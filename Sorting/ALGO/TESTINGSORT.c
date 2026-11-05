#include <stdio.h>
#include <string.h>

int main(){
    int array[] = {10, 7, -4, 3, 6, 29};
    int size = sizeof(array) / sizeof(array[0]);
    // // int array[] = {7, 9, 4, 6, 1};

    // for(int i = 0; i < size; i++){
    //     for(int j = size - 1; j > i; j--){
    //         if(array[j] < array[j-1]){
    //             int temp = array[j-1];
    //             array[j-1] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    // }
    // for(int i = 0; i < size; i++){
    //     printf("%d ", array[i]);
    // }
    // puts("");

    // for(int i = 0; i < size; i++){
    //     int min = i;

    //     for(int j = size - 1; j > i; j--){
    //         if(array[min] > array[j]){
    //             min = j;
    //         }
    //     }
    //     int temp = array[i];
    //     array[i] = array[min];
    //     array[min] = temp;

    // }

    // for(int i = 0; i < size; i++){
    //     for(int j = size - 1; j > i; j--){
    //         if(array[j] < array[j-1]){
    //             int temp = array[j-1];
    //             array[j-1] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    // }

    // for(int i = 0; i < size; i++){
    //     int min = i;
    //     for(int j = size - 1; j > i; j--){
    //         if(array[min] > array[j]){
    //             min = j;
    //         }
    //     }
    //     int temp = array[i];
    //     array[i] = array[min];
    //     array[min] = temp;
    // }

    // for(int i = 0; i < size; i++){
    //     int key = array[i];
    //     int j = i - 1;
    //     while(j >= 0 && array[j] > key){
    //         array[j+1] = array[j];
    //         j--;
    //     }
    //     array[j + 1] = key;
    // }

    // for(int i = 0; i < size; i++){
    //     int min = i;
    //     for(int j = size - 1; j > i; j--){
    //         if(array[j] < array[min]){
    //             min = j;
    //         }
    //     }
    //     int temp = array[min];
    //     array[min] = array[i];
    //     array[i] = temp;
    // }
    // for(int i = 0; i < size; i++){

    //     int min = i;
    //     for(int j = size - 1; j > i; j--){
    //         if(array[j] < array[min]){
    //             min = j;
    //         }
    //     }
    //     int temp = array[i];
    //     array[i] = array[min];
    //     array[min] = temp;
    // }



    // for(int i = 0; i < size; i++){
    //     for(int j = size - 1; j > i; j--){
    //         if(array[j] < array[j-1]){
    //             int temp = array[j-1];
    //             array[j-1] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    // }

    // for(int i = 0; i < size; i++){

    //     int min = i;
    //     for(int j = size - 1; j > i + 1; j--){
    //         if(array[j] < array[j-1]){
    //             min = j;
    //         }
    //     }
    //     if(min != i){
    //         int temp = array[min];
    //         array[min] = array[i];
    //         array[i] = temp;
    //     }
    // }

    for(int i = 0; i < size; i++){
        int key = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }


    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}