#include <stdio.h>

int main(){
    int A[10] = {35, 44, 32, 19, 30, 21};
    char nama[10][51] = {"Dennise", "Dedy", "Agus", };
    int temp, n = 6, count = 0;
    // ascending / descending
for(int i = 0; i < n; i++) printf("%d ", A[i]);
// bubble sorting = jumlah putaran = jumlah data - 1
// mulai dari index terakhir ke index pertama
for(int i = 0; i < n-1; i++){
    for(int j = n - 1; j > i; j--){
        if(A[j] < A[j-1]){ // membandingkan
            // tukar data
            temp = A[j];
            A[j] = A[j-1];
            A[j-1] = temp;
        }
        // count++;
    }
        printf("\n\nAfter Comparison\n");
        for(int k = 0; k < n; k++) printf("%s %d ", nama[k], A[k]);
}
// printf("\nJumlah proses = %d\n", count);


    // // langkah 2
    // for(int i = 0; i < 6; i++) printf("%d ", A[i]);
    // if(A[4] < A[3]){ // membandingkan
    //     // tukar data
    //     temp = A[4];
    //     A[4] = A[3];
    //     A[3] = temp;
    // }

    // printf("\nAfter Sort\n");
    // for(int i = 0; i < 6; i++) printf("%d ", A[i]);

    // for(int i = 0; i < 6; i++) printf("%d ", A[i]);
    // if(A[3] < A[2]){ // membandingkan
    //     // tukar data
    //     temp = A[3];
    //     A[3] = A[2];
    //     A[2] = temp;
    // }

    // printf("\nAfter Sort\n");
    // for(int i = 0; i < 6; i++) printf("%d ", A[i]);

    return 0;
}