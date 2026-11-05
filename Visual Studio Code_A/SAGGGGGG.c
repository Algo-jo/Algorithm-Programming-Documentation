#include <stdio.h>
int main(){
    int testcase, amount, add = 0;
    long long int total = 1;
    scanf("%d", &testcase);

    for(int i = 1; i <= testcase; i++){
        scanf("%d", &amount);
            for(int j = 1; j <= amount; j++){
                if(j==1){
                    printf("Case %d:", i);
                }
                total = (add * (add + 1) / 2 ) + 1;
                add++;
                printf(" %lld", total);
                if(j == amount) printf("\n");
            }
            total = 1; add = 0;
    }
    return 0;
}