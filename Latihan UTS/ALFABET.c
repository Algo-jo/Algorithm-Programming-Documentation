#include <stdio.h>
#include <string.h>

int main(){

    int testcase;
    char kalimat[101] = {0};
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        scanf("%s", kalimat);

        int storage[26] = {0};
        int panjang = strlen(kalimat);
        for(int j = 0; j < panjang; j++){
            storage[kalimat[j] - 'a'] = 1;
        }

        int jumlah = 0;
        for(int k = 0; k < 26; k++){
            if(storage[k] == 1){
                jumlah++;
            }
        }
        printf("Case #%d: ", i + 1);
        if(jumlah <= 2) printf("Breakable\n");
        else if(jumlah >= 3) printf("Unbreakable\n");
    }
    return 0;
}