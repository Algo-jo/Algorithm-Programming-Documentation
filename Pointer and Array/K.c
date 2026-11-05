#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        char kalimat[1005];
        scanf("%s", &kalimat);

        printf("Case #%d : ", i + 1);
        int length = strlen(kalimat);
        // Nabil = 5
        // 0 1 2 3 4
        for(int j = length - 1; j >= 0; j--){
            printf("%c", kalimat[j]);
        }
        printf("\n");
    }

    return 0;
}