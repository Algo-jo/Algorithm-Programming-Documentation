#include <stdio.h>

void combineSort(int array[], int left, int mid, int right){
    int i, j, k;
    i = left;
    j = mid + 1;
    k = 0;
    int temp[right - left + 1];

    while(i <= mid && j <= right){
        if(array[i] < array[j]){
            temp[k] = array[i];
            k++; i++;
        }
        else{
            temp[k] = array[j];
            k++; j++;
        }
    }
    while(i <= mid){
        temp[k] = array[i];
        k++; i++;
    }
    while(j <= right){
        temp[k] = array[j];
        k++; j++;
    }

    for(int l = left; l <= right; l++){
        array[l] = temp[l - left];
    }
}

void mergeSort(int array[], int left, int right){
    if(left >= right) return;
    int mid = (left + right) / 2;

    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    combineSort(array, left, mid, right);
}

void mean(int array[], int amount){
    double total = 0;
    for(int i = 0; i < amount; i++){
        total += array[i];
    }
    printf("Mean : %.2lf\n", total / amount);
}

void median(int array[], int amount){
    // int median = (amount + 1) / 2;
    // printf("Median : %d.00\n", array[median]);

    int median1 = amount / 2;
    int median2 = (amount + 1) / 2;
    double total = (double) array[median1] + array[median2];
    printf("Median : %.2lf\n", total / 2);
}

int main(){
    int testcase;
    scanf("%d", &testcase);

    for(int i = 0; i < testcase; i++){
        int amount;
        scanf("%d", &amount);

        int array[5010] = {0};
        for(int j = 0; j < amount; j++){
            scanf("%d", &array[j]);
        }
        mergeSort(array, 0, amount - 1);
        
        printf("Case #%d:\n", i + 1);
        mean(array, amount);
        median(array, amount - 1);
    }
}