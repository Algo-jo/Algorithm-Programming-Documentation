#include <stdio.h>
#include <string.h>

void merging(int array[], int left, int mid, int right, char nama[][25]) {
    int a = left, b = mid + 1, c = 0;
    int temp[right - left + 1];
    char temporary[right - left + 1][25];

    while(a <= mid && b <= right) {
        if(array[a] < array[b]) {
            temp[c] = array[a];
            strcpy(temporary[c], nama[a]);
            c++; a++;
        } else if(array[a] > array[b]) {
            temp[c] = array[b];
            strcpy(temporary[c], nama[b]);
            c++; b++;
        } else {  // Handle equal values for stable sorting
            temp[c] = array[a];
            strcpy(temporary[c], nama[a]);
            c++; a++;
        }
    }

    while(a <= mid) {
        temp[c] = array[a];
        strcpy(temporary[c], nama[a]);
        c++; a++;
    }

    while(b <= right) {
        temp[c] = array[b];
        strcpy(temporary[c], nama[b]);
        c++; b++;
    }

    for(int x = left; x <= right; x++) {
        array[x] = temp[x - left];
        strcpy(nama[x], temporary[x - left]);
    }
}

void mergeSort(int array[], int left, int right, char nama[][25]) {
    if(left >= right) return;

    int mid = (left + right) / 2;
    mergeSort(array, left, mid, nama);
    mergeSort(array, mid + 1, right, nama);
    merging(array, left, mid, right, nama);
}

int main() {
    int testcase;
    scanf("%d", &testcase);

    char nama[90050][25];
    int nilai[90050];
    for(int i = 0; i < testcase; i++) {
        scanf("%24s %d", nama[i], &nilai[i]);  // Prevent buffer overflow
    }

    mergeSort(nilai, 0, testcase - 1, nama);

    for(int i = 0; i < testcase; i++) {
        printf("%s %d\n", nama[i], nilai[i]);  // Output both names and scores
    }

    return 0;
}
