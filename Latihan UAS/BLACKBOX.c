#include <stdio.h>
#include <string.h>

int partition(char nama[][100], int value[], int left, int right) {
    int i = left - 1;
    int pivot = value[right];
    char pivotS[100];
    strcpy(pivotS, nama[right]);

    for (int j = left; j < right; j++) {
        if (value[j] > pivot || (value[j] == pivot && strcmp(nama[j], pivotS) < 0)) {
            i++;
            // Swap values
            int temp = value[i];
            value[i] = value[j];
            value[j] = temp;

            // Swap names
            char tempS[100];
            strcpy(tempS, nama[i]);
            strcpy(nama[i], nama[j]);
            strcpy(nama[j], tempS);
        }
    }
    i++;
    // Swap pivot with the element at index i
    int temp = value[i];
    value[i] = value[right];
    value[right] = temp;

    char tempS[100];
    strcpy(tempS, nama[i]);
    strcpy(nama[i], nama[right]);
    strcpy(nama[right], tempS);

    return i;
}

void quickSort(char nama[][100], int value[], int left, int right) {
    if (left >= right) return;

    int pivot = partition(nama, value, left, right);
    quickSort(nama, value, left, pivot - 1);
    quickSort(nama, value, pivot + 1, right);
}

int binarySearch(char nama[], int value, char namas[][100], int values[], int count) {
    int left = 0, right = count - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int compare = strcmp(nama, namas[mid]);

        if (compare == 0) {
            if (value < values[mid]) {
                return 69; // Found a duplicate with a lower value
            } else {
                return mid; // Found a duplicate with a higher value
            }
        } else if (compare < 0) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return 420; // Not found
}

int main() {
    int n;
    scanf("%d", &n); getchar();
    
    char nama[1000][100];
    int value[1000];
    char data[1000][100];
    int datas[1000];
    int valid[1000] = {0}; // Array to mark valid entries
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %d", nama[i], &value[i]); getchar();

        int res = binarySearch(nama[i], value[i], data, datas, count);
        if (res == 69) continue; // Ignore lower-value duplicate
        if (res >= 0) {
            valid[res] = 0; // Mark the existing entry as invalid
        }

        // Add new valid data
        strcpy(data[count], nama[i]);
        datas[count] = value[i];
        valid[count] = 1; // Mark as valid
        count++;
    }

    // Collect only valid entries for sorting
    char filteredNama[1000][100];
    int filteredValues[1000];
    int filteredCount = 0;

    for (int i = 0; i < count; i++) {
        if (valid[i]) {
            strcpy(filteredNama[filteredCount], data[i]);
            filteredValues[filteredCount] = datas[i];
            filteredCount++;
        }
    }

    // Sort valid entries
    quickSort(filteredNama, filteredValues, 0, filteredCount - 1);

    // Output sorted values
    for (int i = 0; i < filteredCount; i++) {
        printf("%s %d\n", filteredNama[i], filteredValues[i]);
    }

    return 0;
}
