#include <stdio.h>
int main(){
    int testcase, price;
    int num_item, money;
    long long int total = 0;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%d %d", &num_item, &money);
            for(int j = 1; j <= num_item; j++){
                scanf("%d", &price);
                total += price;
            }
            if(total <= money){
            printf("Case #%d: No worries\n", i);
            }
            else if(total > money){
            printf("Case #%d: Wash dishes\n", i);
            }
        total = 0;
    }
    return 0;
}