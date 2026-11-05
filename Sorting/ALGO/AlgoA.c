#include <stdio.h>

int main(){
    int testcase;
    int array[10005];
    scanf("%d", &testcase);

    if(testcase % 2 == 0){
        return 0;
    }
    for(int i = 0; i < testcase; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < testcase; i++){
        int min = i;
        for(int j = testcase - 1; j > i; j--){
            if(array[j] < array[min]){
                min = j;
            }
        }
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
    int median = (testcase - 1) / 2;
    printf("%d\n", array[median]);

    return 0;
}