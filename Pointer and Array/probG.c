#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int t = 0; t < testcase; t++){
        int length = 0;
        scanf("%d", &length);

            long long int result[100000];
            for(int  i = 0; i < length; i++){
                scanf("%lld", &result[i]);
            }
            long long int kriteria[100000];
            for(int j = 0; j < length; j++){
                scanf("%lld", &kriteria[j]);
            }
            long long int lolos = 0;
            for(int k = 0; k < length; k++){
                if(result[k] < kriteria[k]){
                    lolos++;
                }
            }
            printf("Case #%d: %lld\n", t + 1, lolos);
        
    }
    return 0;
}