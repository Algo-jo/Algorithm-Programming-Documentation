#include <stdio.h>

int main(){
    int tc;
    scanf("%d", &tc); getchar();
    for(int i = 0; i < tc; i++){
        char q[120] = {0};
        char a[120] = {0};
        int correct = 0;
        int n = 0;
        scanf("%d", &n); getchar();

        for(int j = 0; j < n; j++){
            scanf(" %c", &q[j]);
        }
        for(int k = 0; k < n; k++){
            scanf(" %c", &a[k]);
        }
        for(int l = 0; l < n; l++){
            if(a[l] == q[l]) correct++;
        }
        printf("Case #%d: ", i + 1);
        if(correct == n) printf("100\n");
        else{
            printf("%d\n", (correct*100) / n);
        }
    }
    return 0;
}