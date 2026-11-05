#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int n;
        char code[1050] = {0};
        scanf("%d %s", &n, &code);

        for(int j = 0; j < n; j++){
            char temp[1050] = {0};
            int l, r, x;
            scanf("%d %d", &l, &r);

            l--; r--; x = r;
            for(int k = l; k <= r; k++){
                temp[k] = code[k];
            }
            for(int k = l; k <= r; k++){
                code[k] = temp[x];
                x--;
            }
        }
        printf("Case #%d: %s\n", i + 1, code);
    }
    return 0;
}