#include <stdio.h>
int main(){
    int bawah, samping;
    scanf("%d %d", &bawah, &samping); getchar();

    for(int i = 0; i < bawah; i++){
        for(int j = 0; j < bawah; j++){
            printf("#");
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 1; i <= bawah; i++){
        for (int j = 1; j <= bawah; j++){
            if(i % samping == 0){
                if(j == bawah) printf("#\n");
                else printf("#");
            }
            else{
                if(j == bawah) printf(".\n");
                else printf(".");
                }
            }
        }
    printf("\n");

    for(int i = 1; i <= bawah; i++){
        for(int j = 1; j <= bawah; j++){
            if(j % samping == 0){
                if(j==bawah) printf("#\n");
                else printf("#");
            }
            else{
                if(j==bawah)printf(".\n");
                else printf(".");
            }
        }
    }
    return 0;
}