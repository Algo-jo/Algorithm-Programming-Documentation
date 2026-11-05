#include <stdio.h>
int main(){
    int kasus;
    scanf("%d", &kasus);

    for(int i = 1; i <= kasus; i++){
        int mie, rumah, toko, gabung;
        scanf("%d %d %d", &mie, &rumah, &toko); 

        if (mie <= rumah + toko){
        printf("Case #%d: yes\n", i);
        }
        else{
        printf("Case #%d: no\n", i);
        }
    }
    return 0;
}