#include <stdio.h>
int main(){
    char A[30] = "abcdefghijklmnopqrstuvwxyz";
    int testcase, nums;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%d", &nums);
        printf("Case #%d: ", i);
            for(int j = 0; j < nums; j++){
                printf("%c", A[j]);
                if(j == nums - 1)printf("\n");
            }
    }
    return 0;
}