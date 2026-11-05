#include <stdio.h>
#include <string.h>

int main(){
    int n, min;
    char log[10050] = {0};
    int index = 1, ada = -1;
    int storage[10050] = {0};
    scanf("%d %d", &n, &min); getchar();
    for(int i = 0; i < n; i++){
        scanf("%c", &log[i]);
        if(log[i] == '1'){
            storage[index]++;
            ada = 1;
        }
        else{
            if(ada == 1){
                index++;
                ada = -1;
            }
        }
    }
    int count = 0;
    for(int i = 1; i <= index; i++){
        if(storage[i] >= min){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}