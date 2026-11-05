#include <stdio.h>
int main(){
    int testcase, n, a, b, c, d, jumlah;
    scanf("%d", &testcase);

    for(int i = 1; i <= testcase; i++){
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    }
    for(int j = a; j <= n; j++){
        if(n % a == 0 || n % b == 0 || n % c == 0 || n % d == 0){
            jumlah++;
        }
    }
    printf("%d", jumlah);
    return 0;
}