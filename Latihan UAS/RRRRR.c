#include <stdio.h>
#include <string.h>

void merging(int value[], int left, int mid, int right, char arr[][120]) {
    int a = left, b = mid + 1, c = 0;
    int tempValue[right - left + 1];
    char tempStrings[right - left + 1][120];

    while(a <= mid && b <= right){
        if(value[a] > value[b]){
            tempValue[c] = value[a];
            strcpy(tempStrings[c], arr[a]);
            c++; a++;
        }
        else if(value[a] < value[b]){
            tempValue[c] = value[b];
            strcpy(tempStrings[c], arr[b]);
            c++; b++;
        }
        else{
            if(strcmp(arr[a], arr[b]) < 0){
                tempValue[c] = value[a];
                strcpy(tempStrings[c], arr[a]);
                c++; a++;
            }
            else{
                tempValue[c] = value[b];
                strcpy(tempStrings[c], arr[b]);
                c++; b++; 
            }
        }
    }
        while(a <= mid){
            tempValue[c] = value[a];
            strcpy(tempStrings[c], arr[a]);
            c++; a++;
        }
        while(b <= right){
            tempValue[c] = value[b];
            strcpy(tempStrings[c], arr[b]);
            c++; b++;
        }
        for(int d = left; d <= right; d++){
            value[d] = tempValue[d - left];
            strcpy(arr[d], tempStrings[d - left]);
        }
    }


void mergeSort(int value[], int left, int right, char arr[][120]) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;

    mergeSort(value, left, mid, arr);
    mergeSort(value, mid + 1, right, arr);
    merging(value, left, mid, right, arr);
}

int main() {
    int n;
    scanf("%d", &n); // Read number of strings
    getchar();
    char array[120][120] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%s", array[i]); getchar();
    }
    
    char storage[120][26] = {0}; // Initialize storage to zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < strlen(array[i]); j++) { // Use strlen to avoid out-of-bounds
            if (array[i][j] != 'a' && array[i][j] != 'i' &&
                array[i][j] != 'u' && array[i][j] != 'e' && array[i][j] != 'o') {
                storage[i][array[i][j] - 'a'] = 1; // Mark consonants
            }
        }
    }
    int value[n]; // Use n instead of 120
    for (int i = 0; i < n; i++) {
        value[i] = 0; // Initialize value array
        for (int j = 0; j < 26; j++) {
            if (storage[i][j] == 1) {
                value[i]++; // Count consonants
            }
        }
    }
    
    mergeSort(value, 0, n - 1, array); //
    for(int i = 0; i < n; i++){
        printf("%s\n", array[i]);
    }
    return 0;
}