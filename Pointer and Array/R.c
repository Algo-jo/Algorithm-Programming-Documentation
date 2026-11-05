#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase); getchar();
    for(int i = 0 ; i < testcase; i++){
        char kalimat[1005];
        int perubahan = 0;
        char target[26];
        char ganti[26];
        scanf("%s", &kalimat); getchar();
        int length = strlen(kalimat);
            scanf("%d", &perubahan);

            for(int j = 0; j < perubahan; j++){
                scanf("%c %c", &target, &ganti);
                for(int k = 0; k < length; k++){
                    if(kalimat[k] == target){
                        kalimat[k] = 'a';
                    }
                }
                printf("%s", kalimat[j]);
            }
    }

    return 0;
}