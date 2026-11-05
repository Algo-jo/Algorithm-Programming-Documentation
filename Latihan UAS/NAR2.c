#include <stdio.h>

int main(){
    int n, sum = 0, x;
    int arr[100][100] = {0};
    printf("Pilih ukuran matriks:\n");
    printf("1. 3x3\n2. 4x4\n");
    scanf("%d", &n);
    if(n == 1) x = 3;
    else x = 4;

    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= x; j++){
            printf("Masukkan matriks baris ke-%d, kolom ke-%d: ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    printf("\nHasil Matriks:\n");
    for(int i = 1; i <= x; i++){
        for(int j = 0; j <= x + 1; j++){
            if(j == 0) printf("| ");
            else if(j == x + 1) printf("|\n");
            else printf("%d ", arr[i][j]);
        }
    }
    printf("Sum Matriks: %d\n", sum);
    return 0;
}