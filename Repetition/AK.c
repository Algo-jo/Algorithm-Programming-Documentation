#include <stdio.h>

int main(){
    int amount;
    int count[1050] = {0};
    int counter = 1;
    int step[1050] = {0};
    scanf("%d", &amount);
    for(int i = 1; i <= amount; i++){
        scanf("%d", &step[i]);

        if(step[i - 1] >= step[i]){
            count[counter++] = step[i - 1];
        }
    }
    for(int j = 1; j < counter; j++){
        printf("%d ", count[j]);
    }
    printf("%d\n", step[amount]);
    return 0;
}