#include <stdio.h>
#include <string.h>

int valid;
int function(char array[], int length){
    valid = 0;
    int k = length - 1;
    for(int i = 0; i < length; i++){
        if(array[i] == array[k]){
            valid++;
            k--;
        }
    }
    return valid;
}

int main(){
    int testcase;
    scanf("%d", &testcase); getchar();
    for(int i = 0; i < testcase; i++){
        char array[1010] = {0};
        scanf("%s", array);
        
        int length = strlen(array);
        function(array, length);

        if(valid == length) printf("Case #%d: yes\n", i + 1);
        else printf("Case #%d: no\n", i + 1);
    }
}