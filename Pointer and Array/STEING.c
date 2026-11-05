#include <stdio.h>
#include <string.h>
int main(){
    char kalimat[1005], target[1005];
    scanf("%s", kalimat);
    scanf("%s", target);
    int lengthK = strlen(kalimat);
    int lengthT = strlen(target);

    for(int i = 0; i < lengthK; i++){
        // BAAA
        // 0123
        // AAA
        // 012
        int valid = 0;
        int BenerNih = 0;
        if(kalimat[i] == target[0]){
 
                if(kalimat[i] == target[i]){
                    valid++;
                    if(valid == lengthT){
                    BenerNih++;
                    valid = 0;
                }
                }
                if(kalimat[i] != target[i]){
                    valid = 0;
                }
        }
        printf("%d", BenerNih);
        
    }
    return 0;
}