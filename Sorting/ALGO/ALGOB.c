#include <stdio.h>

int main(){

    int testcase;
    scanf("%d", &testcase);

    int array[100010];
    for(int i = 0; i < testcase; i++){
        scanf("%d", &array[i]);
    }
    int count = 0;
    for(int i = 0; i < testcase; i++){
        for(int j = testcase - 1; j > i; j--){
            if(array[j - 1] > array[j]){
                int temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;

                count++;
            }
        }
    }
    for(int i = 0; i < testcase; i++){
        if(i != testcase - 1) printf("%d ", array[i]);
        else printf("%d\n", array[i]);
    }
    printf("%d\n", count);
}