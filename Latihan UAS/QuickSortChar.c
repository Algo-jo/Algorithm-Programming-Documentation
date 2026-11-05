#include <stdio.h>
#include <string.h>

int partition(char nama[][100], int left, int right){
    int i = left - 1;
    int j;
    char pivot[100] = {0};
    strcpy(pivot, nama[right]);
    for(j = left; j < right; j++){
        if(strcmp(nama[j], pivot) < 0){
            i++;
            char temp[100] = {0};
            strcpy(temp, nama[j]);
            strcpy(nama[j], nama[i]);
            strcpy(nama[i], temp);
        }
    }
    i++;
    char temp[100] = {0};
    strcpy(temp, nama[j]);
    strcpy(nama[j], nama[i]);
    strcpy(nama[i], temp);
    return i;
}

void quickSort(char nama[][100], int left, int right){
    if(left >= right) return;
    int pivot = partition(nama, left, right);

    quickSort(nama, left, pivot - 1);
    quickSort(nama, pivot + 1, right);
}

int main(){
    char nama[10][100] = {"Budi", "Eko", "Waseso"};
    quickSort(nama, 0, 2);

    for(int i = 0; i < 3; i++){
        printf("%s\n", nama[i]);
    }
}