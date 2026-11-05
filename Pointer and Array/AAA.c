#include <stdio.h>

int main(){
    int n;
    long long array[5100] = {0};
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%lld", &array[i]);
    }
    int count = 0;
    long long storage[5100] = {0};
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(array[i] == array[j]){
                storage[j] = 1;
            }
        }
        if(storage[i] == 0){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}