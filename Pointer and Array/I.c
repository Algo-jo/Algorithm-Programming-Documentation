#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int length;
        scanf("%d", &length);
        int array[length];
            for(int j = 0; j < length; j++){
                array[j] = 0;
            }

        for(int j = 0; j < length; j++){
            scanf("%d", &array[j]);
        }
        // 4 angka
        // 1 2 3 4
        // 0 1 2 3
        printf("Case #%d: ", i + 1);
        for(int k = length - 1; k >= 0; k--){
            printf("%d", array[k]);
            if(k == 0) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}