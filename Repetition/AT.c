#include <stdio.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int n = 0;
        scanf("%d", &n); getchar();

        int x = n;
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= x; k++){
                if(k <= n - j) printf(" ");
                else if(k > n - j) printf("*");
            }
            x++;
            printf("\n");
        }
    }
    return 0;
}