#include <stdio.h>

int main(){
    int tc;
    int array = 0;
    int storage[1050] = {0};
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &array);
        storage[array]++;
    }
    int max = storage[0];
    int index = 0;
    for(int i = 0; i < 1050; i++){
        if(max < storage[i]){
            max = storage[i];
            index = i;
        }
    }
    printf("%d\n", index);

}