#include <stdio.h>
#include <string.h>

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int amount = 0;
        scanf("%d", &amount);

        int array[1050] = {0};
        for(int j = 0; j < amount; j++){
            scanf("%d", &array[j]);
        }
        int target = 0;
        int ada  = 0;
        scanf("%d", &target);
                for(int x = 0; x < amount; x++){
                    if(target == array[amount - 1]){
                        printf("CASE #%d: %d %d\n", i + 1, array[amount - 2], array [amount - 1]);
                        ada = 1;
                        break;
                    }
                    else if(target == array[x]){
                        printf("CASE #%d: %d %d\n", i + 1, array[x], array[x + 1]);
                        ada = 1;
                        break;
                    }
                }
                if(ada == 0) printf("CASE #%d: -1 -1\n", i + 1);
        }
    return 0;
}