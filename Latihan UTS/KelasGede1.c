#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);

    char kalimat[101];
    for(int i = 0; i < testcase; i++){
        scanf("%s", kalimat);

        int length = strlen(kalimat);
        for(int j = 0; j < length; j++){
            printf("%d", kalimat[j]);

            if(j != length - 1) printf("-");
            else if(j == length - 1) printf("\n");
        }
    }
    return 0;
}