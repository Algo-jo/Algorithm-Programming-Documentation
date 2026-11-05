#include <stdio.h>
#include <string.h>
int main(){

    int testcase;
    scanf("%d", &testcase);

    int nomorKamar[5005];
    for(int i = 0; i < testcase; i++){
        scanf("%d", &nomorKamar[i]);
    }
    int storage[5005] = {0};
    for(int j = 0; j < testcase; j++){
        storage[nomorKamar[j] - 1] = 1;
    }
    
    int senang = 0;
    for(int k = 0; k < 10; k++){
        if(storage[k] == 1){
            senang++;
        }
    }
    printf("%d", senang);
    return 0;
}