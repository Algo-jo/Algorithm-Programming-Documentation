#include <stdio.h>

int main(){
    int testcase;
    scanf("%d", &testcase);

    int amount = 0, time = 0;
    for(int i = 0; i < testcase; i++){
        scanf("%d %d", &amount, &time);

        int array[510];
        for(int j = 0; j < amount; j++){
            scanf("%d", &array[j]);
        }
    int count = 0;
    for(int a = 0; a < amount; a++){
        for(int b = amount - 1; b > a; b--){
            if(array[b] < array[b - 1]){
                int temp = array[b];
                array[b] = array[b-1];
                array[b-1] = temp;
                count++;
            }
        }
    }
    long long total = (long long) count * time;
        printf("Case #%d: %lld\n", i + 1, total);
    }
    return 0;
}