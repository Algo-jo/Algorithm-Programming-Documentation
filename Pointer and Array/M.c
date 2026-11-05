#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);

    for(int i = 0; i < testcase; i++){
        int size = 0;
        scanf("%d", &size);

        int array[size][size];
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                array[j][k] = 0;
            }
        }

        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                scanf("%d", &array[j][k]);
            }
        }
       
        int penjumlahan[size];
        for(int l = 0; l < size; l++){
            penjumlahan[l] = 0;
        }
        // 0,0 0,1 0,2
        // 1,0 1,1 1,2
        // 2,0 2,1 2,2
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                penjumlahan[k] += array[j][k];
            }
        }
        printf("Case #%d:", i + 1);
        for(int m = 0; m < size; m++){
            printf(" %d", penjumlahan[m]);
        }
        printf("\n");
    }

    return 0;
}