#include <stdio.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        int n = 0;
        scanf("%d", &n);

        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(j == 0 || k == 0 || j == n - 1 || k == n - 1) printf("*");
                else if(j == k) printf("*");
                else if(j + k == n - 1) printf("*");
                else printf(" ");

                if(k == n - 1) printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}