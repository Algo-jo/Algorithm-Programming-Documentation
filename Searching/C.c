#include <stdio.h>
#include <string.h>

int main(){
    int testcase, test_target;
    int array[120] = {0};
    int target[120] = {0};

    scanf("%d %d", &testcase, &test_target);

    for(int i = 0; i < testcase; i++){
        scanf("%d", &array[i]);
    }
    for(int j = 0; j < test_target; j++){
        scanf("%d", &target[j]);
    }

    for(int i = 0; i < test_target; i++){
        for(int j = 0; j < testcase; j++){
            if(target[i] == array[j]){
                array[j] = 0;
            }
        }
    }
    for(int i = 0; i < testcase; i++){
        for(int j = testcase - 1; j > i; j--){
            if(array[j] < array[j - 1]){
                int temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }
    if(array[testcase - 1] == 0){
        printf("Maximum number is -1\n");
    }
    else printf("Maximum number is %d\n", array[testcase - 1]);
    return 0;
}