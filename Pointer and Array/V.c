#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);

    for(int i = 0; i < testcase; i++){
        int hariKe;
        long long int t1 = 0, t2 = 1, nexterm = 0;

        scanf("%d", &hariKe);

        printf("Case #%d: ", i + 1);
        if(hariKe == 1) printf("0\n");
        else if(hariKe == 2) printf("1\n");
        else{
            for(int j = 0; j < hariKe - 2; j++){; // 0
                nexterm = t1 + t2; // nexterm = 0 + 1
                t1 = t2; // 0 <-- 1
                t2 = nexterm; // 1 <-- 1
            }
            printf("%lld\n", nexterm);
        }
    }
        
    return 0;
}