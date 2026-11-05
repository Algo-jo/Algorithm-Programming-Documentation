#include <stdio.h>

int main(){
    int tc, n, x;
    char ch[120] = {0};
    scanf("%d", &tc); getchar();
    for(int i = 0; i < tc; i++){
        scanf("%d %d", &n, &x); getchar();

        for(int j = 0; j < n; j++){
            scanf("%c", &ch[j]);
            
            ch[j] = ((ch[j] - 'a' + x) % 26) + 'a';
        }
        getchar();

        printf("Case #%d: ", i + 1);
        for(int k = 0; k < n; k++){
            printf("%c", ch[k]);
        }
        printf("\n");
    }
    return 0;
}