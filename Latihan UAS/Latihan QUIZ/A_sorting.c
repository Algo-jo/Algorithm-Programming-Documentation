#include <stdio.h>

void merging(int array[], int left, int mid, int right){
    int a, b, c;
    a = left;
    b = mid + 1;
    c = 0;
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
    while(a<= mid){
        temp[c] = array[a];
        c++; a++;
    }
    while(b <= right){
        temp[c] = array[b];
        c++; b++;
    }
    for(int x = left; x <= right; x++){
        array[x] = temp[x - left];
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
    scanf("%d", &amount);

    int array[100050];
    for(int i = 0; i < amount; i++){
        scanf("%d", &array[i]);
    }
    mergeSort(array, 0, amount - 1);
    
    int maks = 0;
    int selisih = 0;

    for(int j = 0; j < amount - 1; j++){
        selisih = array[j] - array[j + 1];
        if(selisih < 0) selisih *= -1;

        if(maks < selisih){
            maks = selisih;
        }
    }

    int spasi = -1;
    for(int j = 0; j < amount - 1; j++){
            if((array[j] * -1) - (array[j] * -1) == maks){
                if(spasi == 1) printf(" ");
                    printf("%d %d", array[j], array[j + 1]);
                    spasi = 1;
            }
            else if((array[j] * -1) + array[j + 1] == maks){
                if(spasi == 1) printf(" ");
                printf("%d %d", array[j], array[j + 1]);
                spasi = 1;
            }
            else if((array[j + 1]) - array[j] == maks){
                if(spasi == 1) printf(" ");
                printf("%d %d", array[j + 1], array[j]);
                spasi = 1;
            }
    }
    printf("\n");
    return 0;
}