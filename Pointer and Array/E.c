#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    // Membuat array menjadi nol(Karena tidak bisa langsung diinisialisasikan)
    for(int k = 0; k < testcase; k++){
        int size = 0;
        scanf("%d", &size);
        int total[size - 1];
        int matriks[size][size];

        for(int i = 0; i < size; i++){
            total[i] = 0;
        }
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                matriks[i][j] = 0;
            }
        }

        // Input nilai matriks
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                scanf("%d", &matriks[i][j]);
            }
        }
        // Menjumlahkan nilai matriks (Hanya yang nilai arr[j] nya sama)
        // Ex : 0 1, 1 1, 2 1 dengan nilai [j] = 1
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                    total[j] += matriks[i][j];
                }
            }
        printf("Case #%d:", k + 1);
        for(int i = 0; i < size; i++){
            printf(" %d", total[i]);
        }
        printf("\n");
    }
    return 0;
}