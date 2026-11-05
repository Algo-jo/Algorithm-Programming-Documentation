#include <stdio.h>
#include <string.h>

int main(){
    int amount;
    int array[100010] = {0};
    scanf("%d", &amount);
    for(int i = 0; i < amount; i++){
        scanf("%d", &array[i]);
    }
                   
    for(int i = 0; i < amount; i++){
        for(int j = 0; j < amount - 1; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    int rank[100010] = {0};
    int tingkat = 1;
    for(int i = 0; i < amount; i++){
        rank[i] = tingkat;
        tingkat++;
    }

    int jumlah;
    scanf("%d", &jumlah);

    int target[200010] = {0};
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