#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    char s[120] = {0};
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%s", &s); getchar();
        int integer[100000] = {0}, count = 0, dotcount = 0, len = 0, valid = 0;
        len = strlen(s);
        for(int j = 0; j < len; j++){
            if(s[j] != '.')integer[count] = 1;
            else if(s[j] == '.'){
                count++;
                dotcount++;
            }
        }
        printf("Case #%d: ", i + 1);
        for(int i = 0; i < 6; i++){
            if(integer[i] == 1){
                valid++;
            }
        }
        if(count == 5 && dotcount == 5 && valid == 6){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}