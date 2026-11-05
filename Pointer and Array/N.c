#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);

    int array[100000] = {0};
    int size = 0;
    for(int i = 0; i < testcase; i++){
        scanf("%d", &size);
        for(int j = 0; j < size; j++){
            scanf("%d", &array[i]);
        }

    // PENGECEKAN
    // 0 1 2 3
    // 10 20 30 40
    int trash = 0;
    int nambah = 0;
    int HighestArr = 0;
    for(int k = 0; k < size; k++){
        // 1 2 3
        nambah++;
        if(array[k] > HighestArr){
            HighestArr = array[k];
            trash = nambah;
        }
    }
    printf("%d", nambah);
    printf("%d", trash);
    // int HighestArr2 = 0;
    // for(int l = 0; l < size; l++){
    //     if(l != trash){
    //         if(array[l] >= HighestArr2){
    //             HighestArr2 = array[l];
    //         }
    //     }
    // }
    // printf("%d\n", HighestArr);
    // printf("%d\n", HighestArr2);
    }
    return 0;
}