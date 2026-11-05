#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d", &tc); getchar();
    for(int i = 0; i < tc; i++){
        char str[1100] = {0};
        int n;
        scanf("%s", str);
        scanf("%d", &n); getchar();
        int len = strlen(str);

        for(int j = 0; j < n; j++){
            char a, b;
            scanf("%c %c", &a, &b); getchar();

            for(int k = 0; k < len; k++){
                if(str[k] == a) str[k] = b;
            }
        }
        printf("Case #%d: %s\n", i + 1, str);
    }
    return 0;
}