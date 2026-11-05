#include <stdio.h>

char map[100][100] = {0};
int counter = 0;
void function(int koordinatY, int koordinatX, int tinggiMAX, int lebarMAX){

    if(koordinatY < 0 || koordinatX < 0 || koordinatY >= tinggiMAX || koordinatX >= lebarMAX){
        return;
    }
    if(map[koordinatY][koordinatX] == '#'){
        return;
    }
    if(map[koordinatY][koordinatX] == '*'){
        counter++;
    }
    map[koordinatY][koordinatX] = '#';

    function(koordinatY + 1, koordinatX, tinggiMAX, lebarMAX); // turun
    function(koordinatY - 1, koordinatX, tinggiMAX, lebarMAX); // naik
    function(koordinatY, koordinatX + 1, tinggiMAX, lebarMAX); // kanan
    function(koordinatY, koordinatX - 1, tinggiMAX, lebarMAX); // kiri
}

int main(){
    int testcase;
    scanf("%d", &testcase); getchar();
    for(int t = 0; t < testcase; t++){
        int tinggi, lebar;
        scanf("%d %d", &tinggi, &lebar); getchar();

        int YS = 0;
        int XS = 0;
        counter = 0;
        for(int i = 0; i < tinggi; i++){
            for(int j = 0; j < lebar; j++){
                scanf("%c", &map[i][j]);

                if(map[i][j] == 'P'){
                    YS = i;
                    XS = j;
                }
            }
            getchar();
        }

        function(YS, XS, tinggi, lebar);
        printf("Case #%d: %d\n", t + 1, counter);

    }

    return 0;
}