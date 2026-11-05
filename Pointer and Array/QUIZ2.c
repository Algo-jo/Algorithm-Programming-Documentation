#include <stdio.h>
#include <string.h>
int main(){
    char kata[101];
    scanf("%[^\n]", kata);

    int vowel = 0, consonant = 0;
    for(int i = 0; i < strlen(kata); i++){
        if(kata[i] == 'a' || kata[i] == 'i' || kata[i] == 'u'
         || kata[i] == 'e' || kata[i] == 'o'){
            vowel++;
         }
         else if(kata[i] != ' '){
            consonant++;
         }
         
    }
    printf("%d %d\n", vowel, consonant);
    return 0;
}