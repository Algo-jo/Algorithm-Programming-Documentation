#include <stdio.h>
int main(){
    int testcase;
    int A, s, h, i, a, p;

    scanf("%d", &testcase);
    for(int j = 1; j <= testcase; j++){
        scanf("%d %d %d %d %d %d", &A, &s, &h, &i, &a, &p);
        printf("Case #%d: ", j);
        
        while(A != 0){
            printf("a"); A--;
        }
        while(s != 0){
            printf("s"); s--;
        }
        while(h != 0){
            printf("h"); h--;
        }
        while(i != 0){
            printf("i"); i--;
        }
        while(a != 0){
            printf("a"); a--;
        }
        while(p != 0){
            printf("p"); p--;
        }
        printf("\n");
    }
    return 0;
}