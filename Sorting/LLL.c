#include <stdio.h>
#include <string.h>

void merging(int array[], int left, int mid, int right){
    int a, b, c;
    a = left;
    b = mid + 1;
    c = 0;
    int temp[right - left + 1];

    while(a <= mid && b <= right){
        if(array[a] < array[b]){
            temp[c] = array[a];
            a++; c++;
        }
        else{
            temp[c] = array[b];
            b++; c++;
        }
    }
    while(a <= mid){
        temp[c] = array[a];
        a++; c++;
    }
    while(b <= right){
        temp[c] = array[b];
        b++; c++;
    }
    for(int z = left; z <= right; z++){
        array[z] = temp[z - left];
    }
}

void mergeSort(int array[], int left, int right){
    if(left >= right) return;
    int mid = (left + right) / 2;

    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    merging(array, left, mid, right);
}

int main(){
    int amount;
    int array[100010];
    scanf("%d", &amount);
    for(int i = 0; i < amount; i++){
        scanf("%d", &array[i]);
    }
                   
    mergeSort(array, 0, amount - 1);

    int rank[100010];
    int tingkat = 1;
    for(int i = 0; i < amount; i++){
        rank[i] = tingkat;
        tingkat++;
    }

    int jumlah;
    scanf("%d", &jumlah);

    int target[100010];
    for(int i = 0; i < jumlah; i++){
        scanf("%d", &target[i]);
    }

    for(int i = 0; i < jumlah; i++){ // melihat semua array
    int gakada = -1;
        for(int j = 0; j < amount; j++){ // mengecek dengan semua target
            if(target[i] == array[j]){
                printf("%d\n", rank[j]);
                gakada = 1;
            }
        }
        if(gakada == -1) printf("-1\n");
    }

    return 0;
}