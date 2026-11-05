#include <stdio.h>
int main(){

    int testcase, screamCount;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%d", &screamCount);
            
            printf("Case #%d:\n", i);
            for(int j = 1; j <= screamCount; j++){
                if(j % 3 == 0 || j % 5 == 0){
                if(j % 15 == 0) printf("%d Lili\n", j);
                    else printf("%d Jojo\n", j);
                }
                else printf("%d Lili\n", j);
            }
    }
    return 0;
}