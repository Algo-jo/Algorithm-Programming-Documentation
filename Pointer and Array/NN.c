#include <stdio.h>

int main(){
    int tc, n;
    long long array[100000] = {0};
    scanf("%d", &tc);

    for(int j = 0; j < tc; j++){
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%lld", &array[i]);
        }
        long long max1 = -1000001, maxIndex1 = 0, max2 = -1000001, maxIndex2 = 0;
        for(int i = 0; i < n; i++){
            if(max1 < array[i]){
                max1 = array[i];
                maxIndex1 = i;
            }
        }
        array[maxIndex1] = -1000001;
        // for(int i = 0; i < n; i++) printf("%lld ", array[i]);
        for(int i = 0; i < n; i++){
            if(max2 < array[i]) max2 = array[i];
            
        }
        // printf("%lld %lld\n", max1, max2);
        printf("Case #%d: %lld\n", j + 1, max1 + max2);
    }

    return 0;
}