#include <stdio.h>
int main(){

    int testcase, dice, total = 0;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%d", &dice);
        if(dice >= 2 && dice <= 12) total += dice;
            
        if(total >= 40) total %= 40;

        if(total == 30) total = 10;
        else if(total == 12) total = 28;
        else if(total == 35) total = 7;
        }

    printf("%d\n", total);
    return 0;
}