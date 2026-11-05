#include <stdio.h>
#include <string.h>

int main(){
    int testcase;
    scanf("%d", &testcase);

    int array[testcase];
    for(int i = 0; i < testcase; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < testcase; i++){
        for(int j = 0; j < testcase - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }   
    }
    for(int i = 0; i < testcase; i++){
        printf("%d ", array[i]);
    }
    // puts("");
    // int Left = 0, Right = 0;
    // int max = 0;
    // for(int i = 0; i < testcase - 1; i++){
    //     int temp = array[i] - array[1 + 1];
    //     if(temp < 0) temp *= -1;
    //     if(temp > max){
    //         max = temp;
    //         Left = array[i];
    //         Right = array[i + 1];
    //     }
    // }
    // printf("%d %d\n", Left, Right);

    return 0;
}