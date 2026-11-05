#include <stdio.h>

int main(){
    int tc, n, x = -1;
    scanf("%d", &tc); getchar();
    for(int i = 0; i < tc; i++){
        scanf("%d", &n); getchar();
        printf("Case #%d:\n", i + 1);
        x = -1;
        if(n % 2 == 0) x = 1;
            for(int j = 1; j <= n; j++){
                for(int k = 1; k <= n; k++){
                    if(k <= n - j) printf(" ");
                }
                for(int l = 1; l <= j; l++){
                    if(x == 1){
                        if(l % 2 == 1) printf("#");
                        else printf("*");
                    }
                    else if(x == -1){
                        if(l % 2 == 0) printf("#");
                        else printf("*");
                    }
                }
                printf("\n");
            }
    }
    return 0;
}