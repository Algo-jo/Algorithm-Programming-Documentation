#include <stdio.h>
#include <string.h>
int main(){

    int testcase;
    scanf("%d", &testcase);

    for(int a = 0; a < testcase; a++){
        char kalimat[101] = {0};
        scanf("%s", kalimat);
        
        int length = strlen(kalimat);
        int storage[26] = {0};
        int jumlah = 0;

        for(int j = 0; j < length; j++){
            storage[kalimat[j] - 'a'] = 1;
        }
        for(int k = 0; k < 26; k++){
            if(storage[k] == 1){
                jumlah++;
            }
        }
        printf("Case #%d:", a + 1);
        if(jumlah > 2) printf(" Unbreakable\n");
        else if(jumlah <= 2) printf(" Breakable\n");
    }
    return 0;
}