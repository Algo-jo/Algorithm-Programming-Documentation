#include <stdio.h>

void bubbleSort(int array[], int size){
    for(int i = 0; i < size; i++){
        for(int j = size - 1; j > i; j--){
            if(array[j] < array[j - 1]){
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }
}

void sortArray(int array[5][5]){
    for(int i = 0; i < 5; i++){
        bubbleSort(array[i], 5);
    }
}

void printArray(int array[5][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main(){ 
    int array[5][5] = {2, 3, 4, 5, 6,
                       3, 4, 5, 6, 7,
                       4, 5, 6, 7, 8, 
                       5, 6, 7, 8, 9, 
                       6, 7, 8, 9, 10};

    sortArray(array);
    printArray(array);
}