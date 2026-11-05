#include <stdio.h>
#include <string.h>

int main(){

    // BUBBLE 
    // int array[] = {1, 9, 4, 6, 2, 3};
    // int size = sizeof(array) / sizeof(array[0]);

    // printf("Before sorting\n");
    // for(int i = 0; i < size; i++){
    //     printf("%d ", array[i]);
    // }
    // printf("\n");

    // for(int i = 0; i < size; i++){
    //     for(int j = 0; j < size; j++){
    //         if(array[j] > array[j + 1]){
    //             int temp = array[j + 1];
    //             array[j + 1] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    // }
    // printf("After sorting:\n");
    // for(int i = 0; i < size; i++){
    //     printf("%d ", array[i]);
    // }
    // printf("\n");


    // SELECTION
    // int array[] = {2, 7, 1, 3};
    // int size = sizeof(array) / sizeof(array[0]);

    // for(int i = 0; i < size; i++){
    //     printf("%d ", array[i]);
    // }
    // puts("");
    // for(int i = 0; i < size; i++){

    //     int min = i;
    //     for(int j = i + 1; j < size; j++)
    //     {
    //         if(array[j] < array[min]){
    //             min = j;
    //         }
    //     }
    //     int temp = array[i];
    //     array[i] = array[min];
    //     array[min] = temp;
    // }
    // for(int i = 0; i < size; i++){
    //     printf("%d ", array[i]);
    // }

    // INSERTION
    int array[] = {4, 5, 2, 3, 1};
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++){
        int key = array[i];
        int j = i - 1;
        while(j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    return 0;
}