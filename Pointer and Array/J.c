#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        char kalimat[1005] = {0};
        scanf("%s", &kalimat);

        int length = strlen(kalimat);

        printf("Case %d: ", i + 1);
        for(int j = 0; j < length; j++){
            // Nabil = 5
            // 0 1 2 3 4
            printf("%d", kalimat[j]);
            if(j == length - 1) printf("\n");
            else printf("-");
        }
    }

    return 0;
}