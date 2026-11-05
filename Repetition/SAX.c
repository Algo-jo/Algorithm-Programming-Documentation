#include <stdio.h>
int main(){

    long long int testcase, add, total = 0;
    scanf("%lld", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%lld", &add);
        if(add >= 0) total += add;
    }
    printf("%lld\n", total);
    total = 0; add = 0;
    return 0;
}