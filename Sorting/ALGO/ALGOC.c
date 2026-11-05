#include <stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);

    int array[100050];
    for(int i = 0; i < testcase; i++){
        scanf("%d", &array[i]);
    }
    int count = 0;

    for(int i = 0; i < testcase; i++){
        int min = i;
        for(int j = testcase - 1; j > i + 1; j--){
            if(array[j] < array[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = array[min];
            array[min] = array[i];
            array[i] = temp;
            count++;
        }
    }

    for(int i = 0; i < testcase; i++){
        if(i != testcase - 1) printf("%d ", array[i]);
        else printf("%d\n", array[i]);
    }
    printf("%d\n", count);
}