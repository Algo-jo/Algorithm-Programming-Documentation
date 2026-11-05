#include <stdio.h>
int main(){
    int testcase, garis_finish, lompat = 1, lompat_akhir = 0;
    scanf("%d", &testcase);

    for(int i = 1; i <= testcase; i++){
        scanf("%d", &garis_finish);

            for(int j = 1; j <= garis_finish; j++){
                lompat_akhir += lompat;
                    if(lompat_akhir >= garis_finish){
                        break;
                    }
                lompat++;
            }
            printf("Case #%d: %d\n", i, lompat);
            lompat_akhir = 0; lompat = 0;
    }
    return 0;
}