#include <stdio.h>
int main(){
    int testcase, toys, a, b, c, d, amount = 0;
    scanf("%d", &testcase);
        for(int i = 1; i <= testcase; i++){
            scanf("%d %d %d %d %d", &toys, &a, &b, &c, &d);
            for(int j = 1; j <= toys; j++){
            if(j % a == 0 || j % b == 0 || j % c == 0 || j % d == 0){
                amount++;
            }
            }
            printf("Case #%d: %d\n", i, amount);
            amount = 0;
        }
        return 0;
}