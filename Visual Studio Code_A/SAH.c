#include <stdio.h>
int main(){

    int testcase, add = 0, total = 0;
    long long int number;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%lld", &number);
        
        while(number > 0){
            number /= 10;
            total++;
        }
        printf("Case #%d: %lld\n", i, total);
        total = 0;
    }
    return 0;
}