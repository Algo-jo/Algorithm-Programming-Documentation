#include <stdio.h>
#include <string.h>

struct data{
    char name[120];
    int cons;
}x[120];

void merging(struct data arr[], int left, int mid, int right){
    int a = left, b = mid + 1, c = 0;
    int temp[right - left + 1];

    while(a <= mid && b <= right){
        if(arr[a].cons < arr[b].cons){
            temp[c] = arr[a];
            c++; a++;
        }
        else if(arr[b].cons < arr[a].cons){
            temp[c] = arr[b];
        }
    }
}

void mergeSort(struct data arr[], int left, int right){
    if(left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merging(arr, left, mid, right);
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m); getchar();
    for(int i = 0; i < n; i++){
        scanf("%s", x[i].name); getchar();
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(x[i].name[j] != 'a' && x[i].name[j] != 'i' && x[i].name[j] != 'u' && 
            x[i].name[j] != 'e' && x[i].name[j] != 'o'){
                x[i].cons++;
            }
        }
    }
    mergeSort(x, 0, m - 1);
    // for(int i = 0; i < n; i++){
    //     printf("%d\n", x[i].cons);
    // }
}