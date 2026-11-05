#include <stdio.h>
#include <string.h>

char map[50][50] = {0};
int step = 0;
int found = -1;
void floodfill(int x, int y, int size){
    if(x < 0 || x >= size || y < 0 || y >= size || map[x][y] == '#'){
        return;
    }
    found = 1;
    map[x][y] = '#';
    floodfill(x + 1, y, size);
    floodfill(x - 1, y, size);
    floodfill(x, y + 1, size);
    floodfill(x, y - 1, size);
}

int main(){
    int n, x, y;
    scanf("%d", &n); getchar();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%c", &map[i][j]);
        }
        getchar();
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            found = -1;
            floodfill(i, j, n);
            if(found == 1) step++;
        }
    }
    printf("%d\n", step);
    return 0;
}