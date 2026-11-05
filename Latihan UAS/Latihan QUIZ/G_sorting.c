#include <stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int amount = 0, time = 0;
        scanf("%d %d", &amount, &time);

        int array[10050] = {0};
        for(int j = 0; j < amount; j++){
            scanf("%d", &array[j]);
        }
        int count = 0;

        for(int a = 0; a < amount; a++){
            for(int b = amount - 1; b > a; b--){
                if(array[b - 1] > array[b]){
                    int temp = array[b];
                    array[b] = array[b - 1];
                    array[b - 1] = temp;

                    count++;
                }
            }
        }
        for(int i = 0; i < amount; i++){
            printf("%d ", array[i]);
        }
        printf("\n%d", count*time);
    }
    
    return 0;
}