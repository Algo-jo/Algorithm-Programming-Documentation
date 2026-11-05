#include <stdio.h>
#include <string.h>

int partition(char arr[][100], int value[], int left, int right){
    int a = left - 1;
    int b;
    int pivot = value[right];
    char pivotS[100] = {0};
    strcpy(pivotS, arr[right]);

    for(b = left; b < right; b++){
        if(value[b] < pivot){
            a++;
            int temp = value[a];
            value[a] = value[b];
            value[b] = temp;

            char tempS[100] = {0};
            strcpy(tempS, arr[a]);
            strcpy(arr[a], arr[b]);
            strcpy(arr[b], tempS);
        } else if(value[b] == pivot){
            if(strcmp(arr[b], pivotS) < 0){
                a++;
                int temp = value[a];
                value[a] = value[b];
                value[b] = temp;

                char tempS[100] = {0};
                strcpy(tempS, arr[a]);
                strcpy(arr[a], arr[b]);
                strcpy(arr[b], tempS);
            }
        }
    }
    a++;
    int temp = value[a];
    value[a] = value[b];
    value[b] = temp;

    char tempS[100] = {0};
    strcpy(tempS, arr[a]);
    strcpy(arr[a], arr[b]);
    strcpy(arr[b], tempS);
    return a;
}

void quickSort(char arr[][100], int value[], int left, int right){
    if(left >= right) return;

    int pivot = partition(arr, value, left, right);
    quickSort(arr, value, left, pivot - 1);
    quickSort(arr, value, pivot + 1, right);
}

int main(){
    int tc, value[100000], n;
    char str[10000][100] = {0};
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &n); getchar();

        for(int j = 0; j < n; j++){
            scanf("%[^#]#%d", str[j], &value[j]); getchar();
        }
        quickSort(str, value, 0, n - 1);

        printf("Case #%d:\n", i + 1);
        for(int j = 0; j < n; j++){
            printf("%s - %d\n", str[j], value[j]);
        }
    }
    return 0;
}