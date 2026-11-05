#include <stdio.h>
int main(){

    int testcase, banyak_permen, uang, hpermen, j, i;
    long long int bankpermen = 0;
    int kasus = 0;
    scanf("%d", &testcase);

    for(i = 1; i <= testcase; i++){
        kasus++;
        int k = 0;
        scanf("%d %d", &banyak_permen, &uang);
            for(j = 0; j < banyak_permen; j++){
                scanf("%d", &hpermen);

                if (j == 0 && hpermen > uang){
                    printf("Case #%d: 0\n", kasus);
                    k = 1;
                    
                }
                else bankpermen += hpermen;
            }
            ////
            if(k == 0){
                if(uang < bankpermen) printf("Case #%d: %d\n", kasus, uang);
                else if(uang > bankpermen) printf("Case #%d: %lld\n", kasus, bankpermen); 
            }
            ////
    bankpermen = 0; uang = 0; hpermen = 0; banyak_permen = 0; k = 0;
    }
    return 0;
}
