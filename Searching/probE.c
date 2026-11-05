#include <stdio.h>

void combining(int array[], int left, int mid, int right){
    int a = left, b = mid + 1, c = 0;
    int temp[right - left + 1];

    while(a <= mid && b <= right){
        if(array[a] < array[b]){
            temp[c] = array[a];
            c++; a++;
        }
        else{
            temp[c] = array[b];
            c++; b++;
        }
    }
    while(a <= mid){
        temp[c] = array[a];
        c++; a++;
    }
    while(b <= right){
        temp[c] = array[b];
        c++; b++;
    }
    for(int d = left; d <= right; d++){
        array[d] = temp[d - left];
    }
}

void mergeSort(int array[], int left, int right){
    if(left >= right) return;
    int mid = (left + right) / 2;

    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    combining(array, left, mid, right);
}

int binarySearch(int target, int array[], int size){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(target == array[mid]){
            return mid; 
        }
        else if(target < array[mid]){
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return -1;
}

int main(){
    int tc;
    int i, j;
    scanf("%d", &tc);
    for(i = 0; i < tc; i++){
        int size;
        int MMR[1000];
        scanf("%d", &size);
        for(j = 0; j < size; j++){
            scanf("%d", &MMR[j]);
        }
        mergeSort(MMR, 0, size - 1);

        int targetMMR;
        scanf("%d", &targetMMR);
        
        int hasil = binarySearch(targetMMR, MMR, size);
        printf("CASE #%d: ", i + 1);

        if(hasil == -1) printf("-1 -1");
        else if(hasil == size - 1) printf("%d %d", MMR[hasil - 1], MMR[hasil]);
        else printf("%d %d", MMR[hasil], MMR[hasil + 1]);
        printf("\n");
    }
    return 0;
}