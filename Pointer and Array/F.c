#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);

    for(int j = 1; j <= testcase; j++){
        char kalimat[100001];
        int valid = 0;
        int storage[26] = {0};

        scanf("%s", kalimat);
        int length = strlen(kalimat);
        for(int i = 0; i < length; i++){
            storage[kalimat[i] - 'a'] = 1;
        }
        for(int k = 0; k < 26; k++){
            if(storage[k] == 1){
                valid++;
            }
        }
        printf("Case #%d: ", j);
        if(valid % 2 == 1){
            printf("Ewwww\n");
        }
        else printf("Yay\n");
    }
    return 0;
}