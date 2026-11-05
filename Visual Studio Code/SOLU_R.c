#include <stdio.h>
int main(){
    int a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3;

    scanf("(%d+%d)x(%d-%d)", &a1, &b1, &c1, &d1); getchar();
    scanf("(%d+%d)x(%d-%d)", &a2, &b2, &c2, &d2); getchar();
    scanf("(%d+%d)x(%d-%d)", &a3, &b3, &c3, &d3); getchar();

    int prob1 = (a1 + b1) * (c1 - d1);
    int prob2 = (a2 + b2) * (c2 - d2);
    int prob3 = (a3 + b3) * (c3 - d3);

    printf("%d %d %d\n", prob1, prob2, prob3);
    return 0;
}