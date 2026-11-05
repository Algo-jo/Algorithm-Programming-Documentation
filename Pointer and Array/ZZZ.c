#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int a = 0; a < testcase; a++){
        int panjang = 0, nafas = 0;
        scanf("%d %d", &panjang, &nafas);
        char lorong[100005];
        scanf("%s", &lorong);

        int sisa_nafas = nafas;
        int hidup = 1;
        for(int i = 0; i < panjang; i++){
            char step = lorong[i];
            if(step == '1'){
                sisa_nafas = nafas;
            }
            else if(step == '0'){
                sisa_nafas--;
            }

            if(sisa_nafas <= 0){
                hidup = 0;
                break;
            }
        }

        printf("Case #%d: ", a + 1);
        if(hidup == 0) printf("Dead\n");
        else if(hidup == 1) printf("Alive\n");


    }
    return 0;
}