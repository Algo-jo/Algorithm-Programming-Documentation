#include <stdio.h>

int main(){
    int start, counting;
    int i;

    scanf("%d %d", &start, &counting); getchar();
    int stop = (start + counting) - 1;

    for(i = start; i <= stop; i++) {
        printf("%d\n", i);
    }
    return 0;
}