#include <stdio.h>

void recursion(int h_column, int h_row, int t_column, int t_row, int step, int *min){
    if(h_column < 1 || h_column > 8 || h_row < 1 || h_row > 8 ||
       t_column < 1 || t_column > 8 || t_row < 1 || t_row > 8){
        return;
       }

    if(h_column == t_column && h_row == t_row){
        if(step <= *min){
            *min = step;
        }
        return;
    }
    if(step > *min) return;
    recursion(h_column + 2, h_row + 1, t_column, t_row, step + 1, min);
    recursion(h_column + 2, h_row - 1, t_column, t_row, step + 1, min);
    recursion(h_column - 2, h_row + 1, t_column, t_row, step + 1, min);
    recursion(h_column - 2, h_row - 1, t_column, t_row, step + 1, min);
    recursion(h_column + 1, h_row + 2, t_column, t_row, step + 1, min);
    recursion(h_column + 1, h_row - 2, t_column, t_row, step + 1, min);
    recursion(h_column - 1, h_row + 2, t_column, t_row, step + 1, min);
    recursion(h_column - 1, h_row - 2, t_column, t_row, step + 1, min);
}

int main(){
    int tc;
    scanf("%d", &tc); getchar();
    for(int i = 0; i < tc; i++){
        int minimal;
        int min = 100;
        scanf("%d", &minimal); getchar();

        char h_col, t_col;
        int h_row, t_row;
        scanf("%c%d %c%d", &h_col, &h_row, &t_col, &t_row); getchar();

        int h_column = h_col - 64;
        int t_column = t_col - 64;
        int step = 0;

        printf("Case #%d: ", i + 1);
        recursion(h_column, h_row, t_column, t_row, step, &min);
       
        if(min == minimal * 2){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}