#include <stdio.h>
#include <string.h>

int partition(char nama[][100], int value[], int left, int right){
    int i = left - 1;
    int j;
    int pivot = value[right];
    char pivotS[100] = {0};
    strcpy(pivotS, nama[right]);

    for(j = left; j < right; j++){
        if(value[j] > pivot){
            i++;
            int temp = value[i];
            value[i] = value[j];
            value[j] = temp;

            char tempS[100] = {0};
            strcpy(tempS, nama[i]);
            strcpy(nama[i], nama[j]);
            strcpy(nama[j], tempS);
        } else if(value[j] == pivot){
            if(strcmp(nama[j], pivotS) < 0){
                i++;
                int temp = value[i];
                value[i] = value[j];
                value[j] = temp;

                char tempS[100] = {0};
                strcpy(tempS, nama[i]);
                strcpy(nama[i], nama[j]);
                strcpy(nama[j], tempS);
            }
        }
    }
    i++;
    int temp = value[i];
    value[i] = value[j];
    value[j] = temp;

    char tempS[100] = {0};
    strcpy(tempS, nama[i]);
    strcpy(nama[i], nama[j]);
    strcpy(nama[j], tempS);
    return i;
}

void quickSort(char nama[][100], int value[], int left, int right){
    if(left >= right) return;

    int pivot = partition(nama, value, left, right);
    quickSort(nama, value, left, pivot - 1);
    quickSort(nama, value, pivot + 1, right);
}

int binarySearch(char nama[], int value, char namas[][100], int values[], int count){
    int left = 0, right = count - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        int compare = strcmp(nama, namas[mid]);
        
        if(compare == 0){
            if(value < values[mid]){
                return 69;
            }
            else return mid;
        }
        else if(compare < 0) right = mid - 1;
        else left = mid + 1;
    }
    return 420;
}

int main(){
    int n, value[10000];
    char nama[1000][100] = {0};
    int count = 0;
    char data[1000][100] = {0};
    int datas[10000];
    scanf("%d", &n); getchar();
    for(int i = 0; i < n; i++){
        scanf("%s %d", nama[i], &value[i]);  getchar();

        int res = binarySearch(nama[i], value[i], nama, value, count);
        if(res == 69) continue;
        if(res >= 0) datas[res] = -1;

        datas[count] = value[i];
        strcpy(data[count], nama[i]);
        count++;
    }
    quickSort(data, datas, 0, n - 1);

    for(int j = 0; j < count; j++){
        if(datas[j] != -1){
            printf("%s %d\n", data[j], datas[j]);
        }
    }
    return 0;
}