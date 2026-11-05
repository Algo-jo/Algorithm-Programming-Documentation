#include <stdio.h>
#include <string.h>

void merging(int kons[], char array[][120], int left, int mid, int right){
    int a = left, b = mid + 1, c = 0;
    int tempKons[right - left + 1];
    char tempArr[right - left + 1][120];

    while(a <= mid && b <= right){
        if(kons[a] > kons[b]){
            tempKons[c] = kons[a];
            strcpy(tempArr[c], array[a]);
            c++; a++; 
        }else if(kons[a] < kons[b]){
            tempKons[c] = kons[b];
            strcpy(tempArr[c], array[b]);
            c++; b++;
        }else{
            if(strcmp(array[a], array[b]) < 0){
                tempKons[c] = kons[a];
                strcpy(tempArr[c], array[a]);
                c++; a++;
            }else{
                tempKons[c] = kons[b];
                strcpy(tempArr[c], array[b]);
                c++; b++;
            }
        }
    }
    while(a <= mid){
        tempKons[c] = kons[a];
        strcpy(tempArr[c], array[a]);
        c++; a++;
    }
    while(b <= right){
        tempKons[c] = kons[b];
        strcpy(tempArr[c], array[b]);
        c++; b++;
    }
    for(int d = left; d <= right; d++){
        kons[d] = tempKons[d - left];
        strcpy(array[d], tempArr[d - left]);
    }
}

void mergeSort(int kons[], char array[][120], int left, int right){
    if(left >= right) return;
    int mid = left + (right - left) / 2;

    mergeSort(kons, array, left, mid);
    mergeSort(kons, array, mid + 1, right);
    merging(kons, array, left, mid, right);
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m); getchar();
    char array[120][120] = {0};
    int storage[120][120] = {0};
    int konsonan[120] = {0};
    for(int i = 0; i < n; i++){
        scanf("%s", &array[i]); getchar();

        for(int j = 0; j < m; j++){
            if(array[i][j] != 'a' && array[i][j] != 'i' &&
            array[i][j] != 'u' && array[i][j] != 'e' && array[i][j] != 'o'){
                storage[i][array[i][j] - 'a'] = 1;
            }
        }
        for(int j = 0; j < 26; j++){
            if(storage[i][j] == 1) konsonan[i]++;
        } 
    }
    mergeSort(konsonan, array, 0, m - 1);
    for(int i = 0; i < n; i++){
        printf("%s\n", array[i]);
    }
    return 0;
}