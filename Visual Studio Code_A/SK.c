#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        scanf("%d", &N);
        printf("Case #%d:\n", t);
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i; j++) {
                if ((i + j) % 2 == 0) {
                    printf("*");
                } else {
                    printf("#");
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}
