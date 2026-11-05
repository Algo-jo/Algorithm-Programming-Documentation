#include <stdio.h>

int main(){
    int testcase, target;
    scanf("%d %d", &testcase, &target);

    int array[200] = {0};
    int Arrtarget[200] = {0};
    for(int i = 0; i < testcase; i++){
        scanf("%d", &array[i]);
    }
    for(int j = 0; j < target; j++){
        scanf("%d", &Arrtarget[j]);
    }

    for(int k = 0; k < target; k++){
        for(int l = 0; l < testcase; l++){
            if(Arrtarget[k] == array[l]){
                array[l] = 0;
            }
        }
    }
    for(int i = 0; i < testcase; i++){
        int min = i;
        for(int j = i; j < testcase; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }

    // for(int i = 0; i < testcase; i++){
    //     printf("%d ", array[i]);
    // }
    printf("Maximum number is %d\n", array[testcase - 1]);

    return 0;
}