#include <stdio.h>
#include <string.h>

char array[120][120] = {0};
int counter = 0;
void recursion(int Y, int X, int tinggi, int panjang){

    if(X < 0 || Y < 0 || X >= panjang || Y >= tinggi){
        return;
    }
    if(array[Y][X] == '#'){
        return;
    }
    if(array[Y][X] != 'S'){
        counter++;
        array[Y][X] = '#';
    }
    recursion(Y + 1, X, tinggi, panjang);
    recursion(Y - 1, X, tinggi, panjang);
    recursion(Y, X + 1, tinggi, panjang);
    recursion(Y, X - 1, tinggi, panjang);
}


int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        
        int X = 0, Y = 0;
        int tinggi = 0, panjang = 0;
        scanf("%d %d", &tinggi, &panjang); getchar();

        // SCANF
        for(int a = 0; a < tinggi; a++){
            for(int b = 0; b < panjang; b++){

                scanf("%c", &array[a][b]);
                if(array[a][b] == 'S'){
                    Y = a;
                    X = b;
                }
            }
            getchar();
        }

        recursion(Y, X, tinggi, panjang);
        printf("Case #%d: %d\n", i + 1, counter);

    }
    return 0;
}