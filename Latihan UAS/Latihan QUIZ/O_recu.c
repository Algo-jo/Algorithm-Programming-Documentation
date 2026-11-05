#include <stdio.h>

char array[120][120] = {0};
int count = 0;
void recursion(int Y, int X, int tinggiMAX, int lebarMAX){

    if(array[X][Y] == '#') return;
    if(Y < 0 || X < 0 || X >= lebarMAX || Y >= tinggiMAX) return;
    if(array[X][Y] != 'P'){
        if(array[X][Y] == '*'){
            count++;
        }
        array[X][Y] = '#';
    }

    recursion(Y + 1, X, tinggiMAX, lebarMAX);
    recursion(Y - 1, X, tinggiMAX, lebarMAX);
    recursion(Y, X + 1, tinggiMAX, lebarMAX);
    recursion(Y, X - 1, tinggiMAX, lebarMAX);
}

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int tc = 0; tc < testcase; tc++){

        int tinggi = 0, lebar = 0;
        int YP = 0, XP = 0;
        count = 0;
        scanf("%d %d", &tinggi, &lebar); getchar();

        for(int a = 0; a < tinggi; a++){
            for(int b = 0; b < lebar; b++){
                scanf("%c", &array[a][b]);

                if(array[a][b] == 'P'){
                    YP = a;
                    XP = b;
                }
            }
            getchar();
        }
        recursion(YP, XP, tinggi, lebar);
        printf("Case #%d: %d\n", tc + 1, count);
    }

    return 0;
}