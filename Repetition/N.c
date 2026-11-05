#include <stdio.h>

int main(){
    int tc, m, n, a;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d %d", &m, &n);
        a = m;
        while(m >= n){
            m = m - n + 1;
            a++;
        }
        printf("Case #%d: %d\n", i + 1, a);
    }

    return 0;
}