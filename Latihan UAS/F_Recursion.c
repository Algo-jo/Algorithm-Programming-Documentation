#include <stdio.h>
#include <string.h>

void reverse(char str[], int len){
    // printf("Case #%d: ", i + 1)
    for(int i = len - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
    puts("");
    return;
}

int main(){
    int tc;
    scanf("%d", &tc); getchar();
    for(int i = 0; i < tc; i++){
        char str[1001] = {0};
        scanf("%[^\n]", str); getchar();
        int len = strlen(str);
        printf("Case #%d: ", i + 1);
        reverse(str, len);
    }
    return 0;
}