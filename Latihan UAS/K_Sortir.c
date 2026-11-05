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
    int tc, arr[30];
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        for(int j = 1; j <= 25; j++){
            scanf("%d", &arr[j]);
        }
        mergeSort(arr, 1, 25);
        // for(int j = 1; j <= 25; j++){
        //     printf("%d ", arr[j]);
        // }
        int num[10] = {0};
        num[1] = arr[1] / 2;
        num[5] = arr[25] / 2;
        num[2] = arr[2] - num[1];
        num[4] = arr[24] - num[5];
        for(int a = 1; a <= 5; a++){
            if(a == 3) continue;
            for(int b = 1; b <= 5; b++){
                if(b == 3) continue;

                int total = num[a] + num[b];
                for(int c = 1; c <= 25; c++){
                    if(arr[c] == total){
                        arr[c] = -1;
                        break;
                    }
                }
            }
        }
        // for(int a = 1; a <= 25; a++){
        //     printf("%d ", arr[a]);
        // } printf("\n");

        for(int a = 1; a <= 25; a++){
            if(arr[a] != -1){
                num[3] = arr[a] - num[1];
                break;
            }
        }

        int flag  = -1;
        printf("Case #%d: ", i + 1);
        for(int a = 1; a <= 5; a++){
            if(flag == 1) printf(" ");
            flag = -1;
            printf("%d", num[a]);
            flag = 1;
        }
        printf("\n");
        // for(int a = 1; a <= 5; a++){
        //     printf(" %d", num[a]);
        // } printf("\n");
    }
    return 0;
}