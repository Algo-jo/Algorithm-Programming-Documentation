#include <stdio.h>

void merging(int arr[], int left, int mid, int right){
    int a = left, b = mid + 1, c = 0;
    int temp[right - left + 1];

    while(a <= mid && b <= right){
        if(arr[a] < arr[b]){
            temp[c] = arr[a];
            c++; a++;
        }else{
            temp[c] = arr[b];
            c++; b++;
        }
    }
    while(a <= mid){
        temp[c] = arr[a];
        c++; a++;
    }
    while(b <= right){
        temp[c] = arr[b];
        c++; b++;
    }
    for(int d = left; d <= right; d++){
        arr[d] = temp[d - left];
    }
}

void mergeSort(int arr[], int left, int right){
    if(left >= right) return;
    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merging(arr, left, mid, right);
}

int main(){
    int tc;
    int arr[100050] = {0};
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, tc - 1);
    // for(int i = 0; i < tc; i++){
    //     printf("%d ", arr[i]);
    // }
    int temp, max = 0;
    for(int i = 0; i < tc - 1; i++){
        temp = (arr[i]*-1) + arr[i+1];
        if(temp >= max){
            max = temp;
        }
    }
    int flag = 1;
    for(int i = 0; i < tc - 1; i++){

        if((arr[i]*-1) + arr[i+1] == max){
            if(flag == 0) printf(" ");
            printf("%d %d", arr[i], arr[i + 1]);
            flag = 0;
        }
    }
    printf("\n");
    return 0;
}