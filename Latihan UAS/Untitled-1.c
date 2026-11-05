#include <stdio.h>
#include <string.h>

int partition(char matkul[][50], int jam[], int left, int right){
    int i = left - 1;
    int j;
    int pivot = jam[right];
    char pivots[50];
    strcpy(pivots, matkul[right]);
    for(j = left; j < right; j++){
        if(jam[j] < pivot){
            i++;
            int temp = jam[j];
            jam[j]= jam[i];
            jam[i] = temp;

            char temps[50];
            strcpy(temps, matkul[j]);
            strcpy(matkul[j], matkul[i]);
            strcpy(matkul[i], temps);
        } else if(jam[j] == pivot){
            if(strcmp(matkul[j], pivots) < 0){
                i++;
                int temp = jam[j];
                jam[j]= jam[i];
                jam[i] = temp;

                char temps[50];
                strcpy(temps, matkul[j]);
                strcpy(matkul[j], matkul[i]);
                strcpy(matkul[i], temps);
            }
        }
    }
    i++;
    int temp = jam[j];
    jam[j]= jam[i];
    jam[i] = temp;

    char temps[50];
    strcpy(temps, matkul[j]);
    strcpy(matkul[j], matkul[i]);
    strcpy(matkul[i], temps);
    return i;
}

void quickSort(char matkul[][50], int jam[], int left, int right){
    if(left >= right) return;
    int pivot = partition(matkul, jam, left, right);

    quickSort(matkul, jam, left, pivot - 1);
    quickSort(matkul, jam, pivot + 1, right);
}   

int main(){
    int tc;
    char matkul[50][50] = {0};
    int jam[50] = {0};
    scanf("%d", &tc); getchar();

    for(int i = 0; i < tc; i++){
        scanf("%s %d", matkul[i], &jam[i]); getchar();
    }
    quickSort(matkul, jam, 0, tc - 1);
    for(int i = 0; i < tc; i++){
        printf("%s %d\n", matkul[i], jam[i]);
    }
    return 0;
}