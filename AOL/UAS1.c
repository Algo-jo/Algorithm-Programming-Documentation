#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d", &tc); getchar();
    char a[1000][5] = {0}, b[1000][5] = {0};
    int storage[1000] = {0};
    for(int i = 0; i < tc; i++){
        scanf("%s %s", &a[i], &b[i]); getchar();

        if(i != 0){
            for(int j = 0; j < i; j++){
                if(strcmp(a[i], a[j]) == 0 && strcmp(b[i], b[j]) == 0){
                    storage[i]++;
                }
            }
        }
    }
    for(int i = 0; i < tc; i++){
        printf("%s%s %0*d\n", a[i], b[i], 4, storage[i] + 1);
    }
    return 0;
}