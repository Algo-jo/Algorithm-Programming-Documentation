#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int t = 0; t < testcase; t++){
        // ukuran matriks
        int size = 0;
        scanf("%d", &size);

            int matriks1[size][size];
            int matriks2[size][size];
            int matriks3[size][size];

                for(int i = 0; i < size; i++){
                    for(int j = 0; j < size; j++){
                        matriks1[i][j] = 0;
                    }
                }
                for(int i = 0; i < size; i++){
                    for(int j = 0; j < size; j++){
                        matriks2[i][j] = 0;
                    }
                }
                for(int i = 0; i < size; i++){
                    for(int j = 0; j < size; j++){
                        matriks3[i][j] = 0;
                    }
                }
        // masuk ke inputan matriks
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                scanf("%d", &matriks1[i][j]);
            }
        }
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                scanf("%d", &matriks2[i][j]);
            }
        }
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                scanf("%d", &matriks3[i][j]);
            }
        }

    int result1[size][size];
    int result2[size][size];
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                result1[i][j] = 0;
            }
        }
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                result2[i][j] = 0;
            }
        }

        // 0,0 0,1    0,0 0,1
        // 1,0 1,1    1,0 1,1
    
            for(int i = 0; i < size; i++){
                for(int j = 0; j < size; j++){
                    for(int k = 0; k < size; k++){
                    result1[i][j] += matriks1[i][k] * matriks2[k][j];
                    }
                }
            }
            for(int i = 0; i < size; i++){
                for(int j = 0; j < size; j++){
                    for(int k = 0; k < size; k++){
                    result2[i][j] += result1[i][k] * matriks3[k][j];
                    }
                }
            }
            //i j i k kj
        printf("Case #%d:\n", t + 1);
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                printf("%d", result2[i][j]);
                if(j == size - 1) printf("\n");
                else printf(" ");
            }
        }

    }
    return 0;
}