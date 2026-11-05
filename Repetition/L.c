#include <stdio.h>

int main(){
    int tc, m, n, a;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d %d", &m, &n);
        int m1 = m;
        a = m;
        while(m1 >= n){
            m1 = m1 - n + 1;
            a++;
        }
        printf("Case #%d: %d\n", i + 1, a);
        a = 0;
    }

    return 0;
}