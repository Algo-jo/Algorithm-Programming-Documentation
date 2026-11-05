#include <stdio.h>

int main(){

    int tc;
    scanf("%d", &tc);

    int hadiah[1000] = {0};
    int paket = 0;
    int n;
    for(int i = 0; i < tc; i++){
        scanf("%d", &n);
        hadiah[n] += 1;
        if(hadiah[n] > paket){
            paket = hadiah[n];
        }
    }
    printf("%d\n", paket);
    return 0;
}