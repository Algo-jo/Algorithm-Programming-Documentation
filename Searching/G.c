#include <stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int amount = 0, target = 0;
        scanf("%d %d", &amount, &target);

        int array[10010] = {0};
        for(int j = 0; j < amount; j++){
            scanf("%d", &array[j]);
        }

        int ada = 0;
        for(int k = 0; k < amount; k++){
            if(array[k] >= target){
                ada++;
            }
        }
        printf("Case #%d: %d\n", i + 1, ada);
    }


    return 0;
}