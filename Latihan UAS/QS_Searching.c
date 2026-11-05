#include <stdio.h>
#include <string.h>

int partition(char nama[][1000], int nilai[], int left, int right){
    int i = left - 1;
    int j;
    int pivot = nilai[right];
    char pivots[1000] = {0};
    strcpy(pivots, nama[right]);

    for(j = left; j < right; j++){
        if(nilai[j] < pivot){
            i++;
            int temp = nilai[i];
            nilai[i] = nilai[j];
            nilai[j] = temp;

            char temps[1000] = {0};
            strcpy(temps, nama[i]);
            strcpy(nama[i], nama[j]);
            strcpy(nama[j], temps);
        }
        else if(nilai[j] == pivot){
            if(strcmp(nama[j], pivots) < 0){
                i++;
                int temp = nilai[i];
                nilai[i] = nilai[j];
                nilai[j] = temp;
                char temps[1000] = {0};
                strcpy(temps, nama[i]);
                strcpy(nama[i], nama[j]);
                strcpy(nama[j], temps);
            }
        }
    }
    i++;
    int temp = nilai[i];
    nilai[i] = nilai[j];
    nilai[j] = temp;
    char temps[1000] = {0};
    strcpy(temps, nama[i]);
    strcpy(nama[i], nama[j]);
    strcpy(nama[j], temps);

    return i;
}

void quickSort(char nama[][1000], int nilai[], int left, int right){
    if(left >= right) return;

    int pivot = partition(nama, nilai, left, right);
    quickSort(nama, nilai, left, pivot - 1);
    quickSort(nama, nilai, pivot + 1, right);
}

int main(){
    int n, nilai[1000];
    char nama[100][1000] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s %d", &nama[i], &nilai[i]);
    }
    quickSort(nama, nilai, 0, n - 1);
    for(int i = 0; i < n; i++){
        printf("%s %d\n", nama[i], nilai[i]);
    }
    return 0;
}