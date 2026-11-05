#include <stdio.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int n = 0, m = 0, odd = 0, even = 0;
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%d", &m);
            if(m % 2 == 0) even++;
            else odd++;
        }
        printf("Odd group : %d integer(s).\n", odd);
        printf("Even group : %d integer(s).\n\n", even);
    }
    return 0;
}