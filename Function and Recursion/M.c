#include <stdio.h>

int YES = 0;
long long function(long long A, long long B){
    if(A == B) return YES = 1;

    if(A == 1) return A;
    if(A % 2 == 0) return function(A / 2, B);
    else return function(A * 3 + 1, B);
}


int main(){
    long long A, B;
    int testcase;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        YES = 0;
        scanf("%lld %lld", &A, &B);

        function(A, B);
        printf("Case #%d: ", i);

        if(YES == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}