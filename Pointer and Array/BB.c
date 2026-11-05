#include <stdio.h>
int main(){
    int testcase, length;
    int i, j, k, l;
    int a[100001], b[100001];
    scanf("%d", &testcase);
        for(i = 0; i < testcase; i++){
            scanf("%d", &length);

                for(j = 0; j < length; j++){
                    scanf("%d", &a[j]);
                }
                for(k = 0; k < length; k++){
                    scanf("%d", &b[k]);
                }
                printf("Case #%d: ", i + 1);
                for(l = 0; l < length; l++){
                    printf("%d ", a[l] - b[l]);
                }
                printf("\n");
        }
    return 0;
}