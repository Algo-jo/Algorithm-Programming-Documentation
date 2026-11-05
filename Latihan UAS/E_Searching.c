#include <stdio.h>

int main(){
    int tc, n, mmr[2000] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &tc);
        for(int j = 0; j < tc; j++){
            scanf("%d", &mmr[j]);
        }
        for(int a = 0; a < tc; a++){
            for(int b = tc - 1; b > a; b--){
                if(mmr[b] < mmr[b - 1]){
                    int temp = mmr[b];
                    mmr[b] = mmr[b - 1];
                    mmr[b - 1] = temp;
                }
            }
        }
        int target = 0, found = -1;
        scanf("%d", &target);
        printf("CASE #%d: ", i + 1);
        for(int a = 0; a < tc; a++){
            if(target == mmr[a]){
                if(a == tc - 1) printf("%d %d\n", mmr[a - 1], mmr[a]);
                else printf("%d %d\n", mmr[a], mmr[a + 1]);
                found = 1;
            }
        }
        if(found != 1) printf("-1 -1\n");
    }
    return 0;
}