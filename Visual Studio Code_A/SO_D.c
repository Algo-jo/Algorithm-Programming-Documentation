#include <stdio.h>
int main(){

    int test;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++){
        long long int male, female;
        scanf("%d %d", &male, &female);

        if(male * female % 2 == 0){
            printf("Case #%d: Party time!\n", i);
        }
        else if(male * female % 2 != 0){
            printf("Case #%d: Need more frogs\n", i);
        }
    }
    return 0;
}