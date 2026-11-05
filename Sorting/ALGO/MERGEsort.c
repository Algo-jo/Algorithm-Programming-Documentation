#include <stdio.h>

void gabung_gabungin(int arr[], int left, int mid, int right){
    int panah1 = left;
    int panah2 = mid + 1;
    int panahHasil = 0;

    int arrHasil[right - left + 1];

    while(panah1 <= mid && panah2 <= right){
        if(arr[panah1] < arr[panah2]){
            arrHasil[panahHasil] = arr[panah1];
            panah1++;
            panahHasil++;
        }
        else{
            arrHasil[panahHasil] = arr[panah2];
            panah2++;
            panahHasil++;
        }
    }
    while(panah2 <= right){
        arrHasil[panahHasil] = arr[panah2];
        panah2++;
        panahHasil++;

    }
    while(panah1 <= mid){
        arrHasil[panahHasil] = arr[panah1];
        panah1++;
        panahHasil++;
    }
    for(int p = left; p <= right; p++){
        arr[p] = arrHasil[p-left];
    }
}

void pisah_pisahin(int arr[], int left, int right){
    if(left >= right) return;
    int mid = (left + right) / 2;


    pisah_pisahin(arr, left, mid);
    pisah_pisahin(arr, mid+1, right);
    gabung_gabungin(arr, left, mid, right);
}

int main(){
    int arr[] = {2, 30, 1, 6, 8, 3, 1, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    pisah_pisahin(arr, 0, size - 1);

    for(int i = 0; i < size ; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}