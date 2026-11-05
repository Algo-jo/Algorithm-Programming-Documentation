#include <stdio.h>
#include <string.h>

void merging(int array[], int left, int mid, int right, char arr[][120]){
    int a = left, b = mid + 1, c = 0;
    char temp[right - left + 1];

    while(a <= mid && b <= right){
        if(array[a] < array[b]){
            temp[c] = arr[a];
            c++; a++;
        }
        else if(array[a] > array[b]){
            temp[c] = arr[b];
            c++; b++;
        }
        else{
            if(strcmp(array[a], array[b]) < 0){
                temp[c] = arr[a];
                c++; a++;
            }
            else{
                temp[c] = arr[b];
                c++; b++;
            }
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
        array[d] = temp[d - left];
    }
}

void mergeSort(int array[], int left, int right, char arr[][120]){
    if(left >= right) return;
    int mid = left + (right - left) / 2;

    mergeSort(array, left, mid, arr);
    mergeSort(array, mid + 1, right, arr);
    merging(array, left, mid, right, arr);
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m); getchar();
    char array[n][120];
    for(int i = 0; i < n; i++){
        scanf("%s", array[i]); getchar();
    }
    char storage[120][26] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(array[i][j] != 'a' && array[i][j] != 'i' &&
            array[i][j] != 'u' && array[i][j] != 'e' && array[i][j] != 'o'){
                storage[i][array[i][j] - 'a'] = 1;
            }
        }
    }
    int value[120] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 26; j++){
            if(storage[i][j] == 1){
                value[i]++;
            }
        }
    }
    mergeSort(value, 0, n - 1, array);
    for(int i = 0; i < n; i++){
        printf("%s\n", array[i]);
    }
    return 0;
}