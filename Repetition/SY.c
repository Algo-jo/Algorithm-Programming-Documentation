#include <stdio.h>
int main(){

    int testcase, tinggi, lebar;
    scanf("%d", &testcase);
        for(int i = 1; i <= testcase; i++){
            scanf("%d %d", &tinggi, &lebar);
            
                printf("Case #%d:\n", i);
                for(int j = 1; j <= tinggi; j++){
                    for(int k = 1; k <= lebar; k++){

                        if( j == 1  || k == lebar || k == 1 || j == tinggi){
                            printf("#");
                        }
                        else printf(" ");
                    }
                    printf("\n");
                }
        }
        return 0;
}