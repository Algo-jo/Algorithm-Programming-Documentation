#include <stdio.h>
int main(){
    int testcase, amount, numbers_group;
    int ODD = 0, EVEN = 0;
    scanf("%d", &testcase); 
    for(int i = 1; i <= testcase; i++){

        scanf("%d", &amount); 
        for(int j = 1; j <= amount; j++){
            scanf("%d", &numbers_group); 
                if(numbers_group % 2 == 0){
                    EVEN++;
                }
                else ODD++;
            }
        printf("Odd group : %d integer(s).\n", ODD);
        printf("Even group : %d integer(s).\n", EVEN);
        printf("\n");
        ODD = 0; EVEN = 0;
    }
    return 0;
}