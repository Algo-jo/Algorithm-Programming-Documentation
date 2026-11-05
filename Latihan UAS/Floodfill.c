#include <stdio.h>

void recursion(int Y, int X, int Ymax, int Xmax, char peta[][105], int *result){
    if(Y < 0 || Y >= Ymax || X < 0 || X >= Xmax || peta[Y][X] == '#'){
        return;
    }
    if(peta[Y][X] != 'S'){
        (*result)++;
    }
    peta[Y][X] = '#';
    recursion(Y + 1, X, Ymax, Xmax, peta, result);
    recursion(Y - 1, X, Ymax, Xmax, peta, result);
    recursion(Y, X + 1, Ymax, Xmax, peta, result);
    recursion(Y, X - 1, Ymax, Xmax, peta, result);
}

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        char peta[105][105] = {0};
        int Y, X;
        scanf("%d %d", &Y, &X); getchar();

        int YS, XS;
        for(int a = 0; a < Y; a++){
            for(int b = 0; b < X; b++){
                scanf("%c", &peta[a][b]);
                if(peta[a][b] == 'S'){
                    YS = a;
                    XS = b;
                }
            }
            getchar();
        }
        int result = 0;
        recursion(YS, XS, Y, X, peta, &result);
        printf("Case #%d: %d\n", i + 1, result);
    }

    return 0;
}