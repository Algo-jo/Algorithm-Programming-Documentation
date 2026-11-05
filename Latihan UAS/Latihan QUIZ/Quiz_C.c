#include <stdio.h>
#include <string.h>

struct mahasiswa {
    char nama[100];
    int nilai;
} data[120];

void merging(struct mahasiswa data[], int left, int mid, int right) {
    int a = left, b = mid + 1, c = 0;
    struct mahasiswa temp[right - left + 1];

    while (a <= mid && b <= right) {
        if (data[a].nilai > data[b].nilai || 
           (data[a].nilai == data[b].nilai && strcmp(data[a].nama, data[b].nama) < 0)) {
            temp[c++] = data[a++];
        } else {
            temp[c++] = data[b++];
        }
    }

    while (a <= mid) temp[c++] = data[a++];
    while (b <= right) temp[c++] = data[b++];

    for (int x = left; x <= right; x++) {
        data[x] = temp[x - left];
    }
}

void mergeSort(struct mahasiswa data[], int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;

    mergeSort(data, left, mid);
    mergeSort(data, mid + 1, right);
    merging(data, left, mid, right);
}

int binarySearch(struct mahasiswa data[], char baseNama[], int baseNilai, int size) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        int comparison = strcmp(baseNama, data[mid].nama);

        if (comparison == 0) {
            if (baseNilai < data[mid].nilai) return -1; // Duplicate with lower value
            else return mid; // Duplicate with higher value, mark mid for removal
        }
        if (comparison < 0) right = mid - 1;
        else left = mid + 1;
    }
    return -2; // Not found
}

int main() {
    int testcase;
    scanf("%d", &testcase);

    int validCount = 0;
    for (int i = 0; i < testcase; i++) {
        struct mahasiswa current;
        scanf("%s %d", current.nama, &current.nilai);

        int foundIndex = binarySearch(data, current.nama, current.nilai, validCount);
        if (foundIndex == -1) continue; // Ignore lower-value duplicate
        if (foundIndex >= 0) data[foundIndex].nilai = -1; // Mark higher-value duplicate as invalid

        data[validCount++] = current; // Add new valid data
    }

    mergeSort(data, 0, validCount - 1);

    // Output sorted values
    for (int i = 0; i < validCount; i++) {
        if (data[i].nilai != -1) {
            printf("%s %d\n", data[i].nama, data[i].nilai);
        }
    }

    return 0;
}
