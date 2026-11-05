#include <stdio.h>

int main(){
    int tc, n, x[5000] = {0}, temp, fin = 0;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%d", &x[j]);
        }
        for(int k = 1; k < n; k++){
            temp = x[k-1] - x[k];
            if(temp < 0) temp *= -1;
            if(k == 1) fin = temp;
            if(temp < fin) fin = temp;
        }
        printf("Case #%d: %d\n", i + 1, fin);
        fin = 0;
    }
    return 0;
}