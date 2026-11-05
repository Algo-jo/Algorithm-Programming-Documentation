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
        int arr1 = 0, arr2 = 0;
        scanf("%d", &target);
                for(int x = 0; x < amount; x++){
                    if(target == array[amount - 1]){
                        ada = 1;
                        arr1 = amount - 2;
                        arr2 = amount - 1;
                        break;
                    }
                    else if(target == array[x]){
                        ada = 1;
                        arr1 = x;
                        arr2 = x + 1;
                        break;
                    }
                }
                printf("CASE #%d: ", i + 1);
                if(ada == 1){
                    printf("%d %d\n", array[arr1], array[arr2]);
                }
                else printf("-1 -1\n");
        }
    return 0;
}