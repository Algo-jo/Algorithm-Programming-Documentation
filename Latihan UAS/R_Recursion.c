#include <stdio.h>
#include <string.h>
int count;

void recursion(int YS, int XS, int Ymax, int Xmax, char map[][105]){
    if(YS < 0 || XS < 0 || YS >= Ymax || XS >= Xmax || map[YS][XS] == '#'){
        return;
    }
    if(map[YS][XS] != 'P'){
        if(map[YS][XS] == '*'){
            count++;
        }
    }
    map[YS][XS] = '#';
    recursion(YS + 1, XS, Ymax, Xmax, map);
    recursion(YS - 1, XS, Ymax, Xmax, map);
    recursion(YS, XS + 1, Ymax, Xmax, map);
    recursion(YS, XS - 1, Ymax, Xmax, map);
}

int main(){
    int tc;
    scanf("%d", &tc); getchar();
    for(int i = 0; i < tc; i++){
        int X = 0, Y = 0;
        
        char map[105][105] = {0};
        int YS = 0, XS = 0;
        count = 0;
        scanf("%d %d", &Y, &X); getchar();
        for(int j = 0; j < Y; j++){
            for(int k = 0; k < X; k++){
                scanf("%c", &map[j][k]);
                if(map[j][k] == 'P'){
                    YS = j;
                    XS = k;
                }
            }getchar();
        }
        
        recursion(YS, XS, Y, X, map);
        printf("Case #%d: %d\n", i + 1, count);
    }
    return 0;
}