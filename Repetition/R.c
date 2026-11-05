#include <stdio.h>

int main(){
    int testcase, amount, house, highest = 0;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%d", &amount);

        for(int j = 1; j <= amount; j++){
            scanf("%d", &house);

            if(house >= highest){
                highest = house;
            }
            
        }
    }

    return 0;
}