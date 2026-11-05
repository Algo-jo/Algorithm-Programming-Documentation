#include <stdio.h>
#include <string.h>

int compareSearch(char target[21], char array[][21], int size){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(strcmp(target, array) == 0){
            return 1;
        }
        else if(strcmp(target, array) < 0){
            right = mid - 1;
        }
        else if(strcmp(target, array) > 0){
            left = mid + 1;
        }
    }
    return -1;
}

void merging(int array[], int left, int mid, int right, char nama[][21]){
    int a, b, c;
    a = left;
    b = mid + 1;
    c = 0;
    int temp[right - left + 1];
    char temporary[right - left + 1][25];

    while(a <= mid && b <= right){
        if(array[a] > array[b]){
            temp[c] = array[a];
            strcpy(temporary[c], nama[a]);
            c++; a++;
        }
        else if(array[a] < array[b]){
            temp[c] = array[b];
            strcpy(temporary[c], nama[b]);
            c++; b++;
        }
        else{
            if(strcmp(nama[a], nama[b]) < 0){
                temp[c] = array[a];
                strcpy(temporary[c], nama[a]);
                c++; a++;
            }
            else{
                temp[c] = array[b];
                strcpy(temporary[c], nama[b]);
                c++; b++;
            }
        }
    }
    while(a <= mid){
        temp[c] = array[a];
        strcpy(temporary[c], nama[a]);
        c++; a++;
    }
    while(b <= right){
        temp[c] = array[b];
        strcpy(temporary[c], nama[b]);
        c++; b++;
    }
    for(int x = left; x <= right; x++){
        array[x] = temp[x - left];
        strcpy(nama[x], temporary[x - left]);
    }
}

void mergeSort(int array[], int left, int right, char nama[][21]){
    if(left >= right) return;
    int mid = (left + right) / 2;

    mergeSort(array, left, mid, nama);
    mergeSort(array, mid + 1, right, nama);
    merging(array, left, mid, right, nama);
}

int main(){
    int testcase;
    scanf("%d", &testcase);

    char nama[70050][21];
    int nilai[70050];
    int hasil = -1;
    for(int i = 0; i < testcase; i++){
        scanf("%s %d", nama[i], &nilai[i]);

            hasil = compareSearch(nama[i], nama, i);
            if(hasil == 1){
                printf("Hello\n");
            }
        
    }
    mergeSort(nilai, 0, testcase - 1, nama);

    for(int i = 0; i < testcase; i++){
        if(nilai[i] != 0){
            printf("%s %d\n", nama[i], nilai[i]);
        }
    }
    return 0;
}