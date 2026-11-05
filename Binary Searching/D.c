#include <stdio.h>

long long binarySearch(long long array[], long long amount, long long target){
    
    int max = -1;
    int x = 0;
    long long sum = 0;
    for(int i = 0; i < amount; i++){
        sum += array[i];

        while(sum > target){
            sum -= array[x];
            x++;
        }
        max = (i - x + 1 > max) ? (i - x + 1) : max;
    }
    return max;
}

int main(){
    int tc;
    scanf("%d", &tc);

    long long target = 0;
    long long array[tc + 1];
    for(int i = 0; i < tc; i++){
        scanf("%lld", &array[i]);
    }
    long long testing;

    scanf("%lld", &testing);
    for(int j = 0; j < testing; j++){
        scanf("%lld", &target);

        long long result = binarySearch(array, tc, target);
        if(!result) result = -1;
        printf("Case #%d: %lld\n", j + 1, result);
    }
    return 0;
}