#include <stdio.h>
#include <string.h>
int main(){
    char kata[101];
    int testcase;

    scanf("%d", &testcase); getchar();

    for(int j = 0; j < testcase; j++){
    scanf("%[^\n]", kata); getchar();
    printf("Case #%d: ", j + 1);

    int length = strlen(kata);

    for(int i = 0; i < length; i++){
        if(kata[i] != 'a' && kata[i] != 'i' && kata[i] != 'u' && kata[i] != 'e' && kata[i] != 'o' 
        && kata[i] != 'A' && kata[i] != 'I' && kata[i] != 'U' && kata[i] != 'E' && kata[i] != 'O'){
            printf("%c", kata[i]);
        }
    }
    printf("\n");
    }
    return 0;
}