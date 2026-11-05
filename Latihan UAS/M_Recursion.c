#include <stdio.h>

int func(int a, int b){
    if(a == b) return 1;
    if(a == 1) return (a, b);
    if(a % 2 == 0) return func(a/2, b);
    else if(a % 2 == 1) return func((a*3)+1, b);
}

int main(){
    int tc, a, b;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d %d", &a, &b);
        int res = func(a, b);
        printf("Case #%d: ", i + 1);
        if(res == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}