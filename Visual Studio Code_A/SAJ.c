#include <stdio.h>
int main(){
    int testcase;
    int tampung, total = 0;
    scanf("%d", &testcase); getchar();

    for(int i = 1; i <= testcase; i++){
        scanf("%d", &tampung); getchar();
        total += tampung;
    }
    printf("%d\n", total);
    
    return 0;
}