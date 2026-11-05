#include <stdio.h>
int main(){

    int lengthAngka, keliling;
    scanf("%d %d", &lengthAngka, &keliling);
    int array[lengthAngka + 1];

    // for(int i = 0; i < lengthAngka; i++){
    //     array[i] = 0;
    // }

    for(int i = 0; i < lengthAngka; i++){
        scanf("%d", &array[i]);
    }
  

    for(int j = 0; j < lengthAngka; j++){
        int maxSum = 0;
        int pembagian = 0;

        if(array[j] == -1){
            // 1 1 1 -1 1 1 1 
            for(int k = j - keliling; k <= j + keliling; k++){
                if(array[k] != -1){
                    maxSum += array[k];
                    pembagian++;
                }
            }
            array[j] = maxSum / pembagian;
        }
    }
    for(int l = 0; l < lengthAngka; l++){
        printf("%d", array[l]);
        if(l == lengthAngka - 1) printf("\n");
        else printf(" ");
    }

    return 0;
}