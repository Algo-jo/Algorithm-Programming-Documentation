#include <stdio.h>
#include <string.h>
int main(){
    int size1 = 0, size2 = 0;
    // input ukuran matriks s1 x s2
    scanf("%d %d", &size1, &size2);

    // Deklarasi semua nilai matriks = 0
    int matriks[size1][size2];
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            matriks[i][j] = 0;
        }
    }
    // input nilai matriks s1 x s2
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            scanf("%d", &matriks[i][j]);
        }
    }

    int testcase = 0;
    scanf("%d", &testcase);
    for(int k = 0; k < testcase; k++){
        int posI, posJ, perubahan;
        scanf("%d %d %d", &posI, &posJ, &perubahan);
        matriks[posI - 1][posJ - 1] = perubahan;
    }

    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            printf("%d", matriks[i][j]);
            
            if(j != size2 - 1) printf(" ");
            else if(j == size2 - 1) printf("\n");
        }
    }
    return 0;
}