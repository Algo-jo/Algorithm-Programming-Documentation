#include <stdio.h>
#include <string.h>

int palindrome(char str[], int len){
    for(int i = 0; i < len / 2; i++){
        if(str[i] != str[len - 1 - i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        char str[1001] = {0};
        scanf("%s", str);
        int len = strlen(str);
        int res = palindrome(str, len);
        printf("Case #%d: ", i + 1);
        if(res == 1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}