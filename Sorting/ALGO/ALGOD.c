#include <stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);

    int array[100010];
    for(int i = 0; i < testcase; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i <= testcase - 1; i++){

        int key = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    for(int i = 0; i < testcase; i++){
        if(i != testcase - 1) printf("%d ", array[i]);
        else printf("%d\n", array[i]);
    }
    }
    return 0;
}