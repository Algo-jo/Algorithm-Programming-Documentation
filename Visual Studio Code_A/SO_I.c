#include <stdio.h>
int main(){
    int test;
    scanf("%d", &test);
    for(int i = 1; i <= test; i++){

        int uang, persen, batas;
        scanf("%d %d %d", &uang, &persen, &batas);
        if(uang % 100 == 0){
        double pers = (double) uang * persen / 100;
            if(pers <= batas){
                printf("Case #%d: %d\n", i, (int)pers);
            }
            else if(pers > batas){
                printf("Case #%d: %d\n", i, batas);
            }
        }
    }
    
    return 0;
}