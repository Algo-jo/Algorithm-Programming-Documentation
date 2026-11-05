#include <stdio.h>
int main(){
    char capacity[101];
    int testcase;
    scanf("%d", &testcase);
    for(int j = 1; j <= testcase; j++){
        scanf("%[^\n]", &capacity[j]);
        printf("Case #&d: ", j);
        for(int i = 1; i <= capacity; i++){
            if(capacity[i] >= 97 && capacity[i] <= 122){
                printf("%c", capacity[i]);
            }
        }
        printf("\n");
    }
}