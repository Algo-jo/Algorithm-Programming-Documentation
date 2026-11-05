#include <stdio.h>
#include <string.h>

struct mahasiswa{
    char nama[100];
    int nilai;
}data[120], temp;

void merging(struct mahasiswa data[], int left, int mid, int right){
    int a = left, b = mid + 1, c = 0;
    int tempNilai[right - left + 1];
    char tempNama[right - left + 1][100];

    while(a <= mid && b <= right){
        if(data[a].nilai > data[b].nilai){
            tempNilai[c] = data[a].nilai;
            strcpy(tempNama[c], data[a].nama);
            c++; a++;
        }
        else if(data[a].nilai < data[b].nilai){
            tempNilai[c] = data[b].nilai;
            strcpy(tempNama[c], data[b].nama);
            c++; b++;
        }
        else{
            if(strcmp(data[a].nama, data[b].nama) < 0){
                tempNilai[c] = data[a].nilai;
                strcpy(tempNama[c], data[a].nama);
                c++; a++;
            }
            else{
                tempNilai[c] = data[b].nilai;
                strcpy(tempNama[c], data[b].nama);
                c++; b++;
            }
        }
    }
    while(a <= mid){
        tempNilai[c] = data[a].nilai;
        strcpy(tempNama[c], data[a].nama);
        c++; a++;
    }
    while(b <= right){
        tempNilai[c] = data[b].nilai;
        strcpy(tempNama[c], data[b].nama);
        c++; b++;
    }
    for(int x = left; x <= right; x++){
        data[x].nilai = tempNilai[x - left];
        strcpy(data[x].nama, tempNama[x - left]);
    }
}

void mergeSort(struct mahasiswa data[], int left, int right){
    if(left >= right) return;
    int mid = (left + right) / 2;

    mergeSort(data, left, mid);
    mergeSort(data, mid + 1, right);
    merging(data, left, mid, right);
}

int binarySearch(struct mahasiswa data[], char baseNama[], int baseNilai, int size){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        int comparison = strcmp(baseNama, data[mid].nama);
        if(comparison == 0){
            if(baseNilai < data[mid].nilai) return -1;
            else return mid;
        }
        else if(comparison < 0) right = mid - 1;
        else left = mid + 1;
    }
    return -3;
}

int main(){
    int testcase; 
    scanf("%d", &testcase);

    int valid = 0;
    for(int i = 0; i < testcase; i++){
        scanf("%s %d", temp.nama, &temp.nilai);
        
            int found = binarySearch(data, temp.nama, temp.nilai, valid);
            if(found == -1) continue;
            if(found >= 0) data[found].nilai = -1;
            data[valid] = temp;
            valid++;
    }
    mergeSort(data, 0, valid - 1);

    for(int i = 0; i < valid; i++){
        if(data[i].nilai != -1) printf("%s %d\n", data[i].nama, data[i].nilai);
    }
    return 0;
}