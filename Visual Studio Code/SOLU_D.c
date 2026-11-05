#include <stdio.h>
int main(){
    int start, add;
    scanf("%d %d", &start, &add);
    int end = start + add;

    for (int i = start; i <= end; i++){
        printf("%d\n", i);
    }
    return 0;
}