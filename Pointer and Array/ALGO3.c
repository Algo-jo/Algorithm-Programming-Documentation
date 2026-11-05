#include <stdio.h>
#include <string.h>
int main(){
    // int size;
    // scanf("%d", &size);

    // int arr[size][size];
    // for(int i = 0; i < size; i++){
    //     for(int j = 0; j < size; j++){
    //         scanf("%d", &arr[i][j]); getchar();
    //     }
    // }
    // int operation[size];
    // for(int i = 0; i < size; i++){
    //     operation[i] = 0;
    // }

    // for(int i = 0; i < size; i++){
    //     for(int j = 0; j < size; j++){
    //         operation[j] += arr[j][i];
    //     }
    // }
    // printf("Hasil: ");
    // for(int k = 0; k < size; k++){
    //     printf("%d ", operation[k]);
    // }
    int testcase;
    int jumlah[20];
    scanf("%d", &testcase);

    for(int i = 0; i < testcase; i++){
        scanf("%d", &jumlah[i]);
    }
    int awal, akhir;
    for(int j = 0; j < testcase; j++){
        scanf("%d %d", &awal, &akhir);
    int hasil = 0;

    for(int k = awal - 1; k <= akhir - 1; k++){
        hasil += jumlah[k];
    }
        printf("%d\n", hasil);
        hasil = 0;
    }

    return 0;
}