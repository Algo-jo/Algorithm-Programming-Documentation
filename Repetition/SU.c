#include <stdio.h>
int main(){
    int testcase, number_of_match;
    int bibi = 0; int lili = 0;
    char hasil_match;
    scanf("%d", &testcase); getchar();
    for(int i = 1; i <= testcase; i++){
            scanf("%d", &number_of_match); getchar();
                for(int j = 1; j <= number_of_match; j++){
                    scanf("%c", &hasil_match); 
                        if(hasil_match == 'B'){
                            bibi++;
                        }
                        else if(hasil_match == 'L'){
                            lili++;
                        }        
                    }
                if(bibi > lili) printf("Bibi\n");
                if(lili > bibi) printf("Lili\n");
                if(bibi == lili) printf("None\n");
                bibi = 0; lili = 0;
            }
    return 0;
}