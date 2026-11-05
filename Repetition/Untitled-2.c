#include <stdio.h>
int main(){

    // int i, j;
    // for(i = 1, j = 10; i <= 10, j >= 0; i++, j--){
    //     printf("%d %d\n", i, j);
    // }
    for(int i = 0; i < 10; i++){
        if(i == 4) continue;
        printf("%d ", i);
    }




    return 0;
}
