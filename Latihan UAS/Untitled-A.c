#include <stdio.h>
#include <string.h>

int min = 80;
void horsie(int x1, int y1, int x2, int y2, int step){
    if(x1 < 0 || x1 > 8 || y1 < 0 || y1 > 8 || x2 < 0 || x2 > 8 || y2 < 0 || y2 > 8){
        return;
    }
    if(x1 == x2 && y1 == y2){
        if(min >= step){
            min = step;
            return;
        }
    }
    if(step >= 10) return;
    horsie(x1 + 1, y1 + 2, x2, y2, step + 1);
    horsie(x1 - 1, y1 + 2, x2, y2, step + 1);
    horsie(x1 + 1, y1 - 2, x2, y2, step + 1);
    horsie(x1 - 1, y1 - 2, x2, y2, step + 1);
    horsie(x1 + 2, y1 + 1, x2, y2, step + 1);
    horsie(x1 - 2, y1 + 1, x2, y2, step + 1);
    horsie(x1 + 2, y1 - 1, x2, y2, step + 1);
    horsie(x1 - 2, y1 - 1, x2, y2, step + 1);
}

int main(){
    char a, b;
    int A, B;
    int step = 0;
    int minimals;
    scanf("%c%d %c%d", &a, &A, &b, &B);
    scanf("%d", &minimals);

    int X = a - 'A' + 1;
    int Y = b - 'A' + 1;
    printf("%d %d %d %d\n", X, A, Y, B);

    horsie(X, A, Y, B, step);
    printf("%d\n", min);

    if(minimals * 2 >= min){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}