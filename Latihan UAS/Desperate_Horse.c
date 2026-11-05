#include <stdio.h>

void recursion(int h_column, int h_row, int t_column, int t_row, int step, int *min){
    if(h_column < 1 || h_column > 8 || h_row < 1 || h_row > 8 ||
       t_column < 1 || t_column > 8 || t_row < 1 || t_row > 8) return;
    
    if(h_column == t_column && h_row == t_row){
        if(step < *min){
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
    int testcase;
    scanf("%d", &testcase); getchar();
    for(int i = 0; i < testcase; i++){
        char A, C;
        int B, D;
        int minimal;
        scanf("%d", &minimal);
        scanf("%c%d %c%d", &A, &B, &C, &D); getchar();

        int step = 0;
        int min = 6;
        int a = A - 'A' + 1;
        int c = C - 'A' + 1;
        // printf("%d %d\n", a, B);
        // printf("%d %d\n", c, D);
        recursion(a, B, c, D, step, &min);
        printf("Case #%d: ", i + 1);
        if(min <= minimal * 2){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}