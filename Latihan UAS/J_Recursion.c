#include <stdio.h>

int count = 0;
long long int func(long long int n){
    count++;
    if(n == 1) return 0;
    if(n % 2 == 0) return func(n/2);
    else if(n % 2 == 1) return func(n*3+1);
}

int main(){
    int tc;
    long long n;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%lld", &n);
        int res = func(n);
        printf("Case #%d: ", i + 1);
        if(count % 2 == 0) printf("Jojo\n");
        else printf("Lili\n");
        count = 0;
    }
    return 0;
}