#include <stdio.h>

void function(int X_Horse, int Y_Horse, int X_target, int Y_target, int *min, int step){
    if(X_Horse < 1 || X_Horse > 8 || Y_Horse < 1 || Y_Horse > 8 ||
        X_target < 1 || X_target > 8 || Y_target < 1 || Y_target > 8){
            return;
        }
    if(X_Horse == X_target && Y_Horse == Y_target){
        if(step <= *min) *min = step;
    }
    if(step >= *min) return;
    function(X_Horse + 2, Y_Horse + 1, X_target, Y_target, min, step + 1);
    function(X_Horse + 2, Y_Horse - 1, X_target, Y_target, min, step + 1);
    function(X_Horse - 2, Y_Horse + 1, X_target, Y_target, min, step + 1);
    function(X_Horse - 2, Y_Horse - 1, X_target, Y_target, min, step + 1);
    function(X_Horse + 1, Y_Horse + 2, X_target, Y_target, min, step + 1);
    function(X_Horse + 1, Y_Horse - 2, X_target, Y_target, min, step + 1);
    function(X_Horse - 1, Y_Horse + 2, X_target, Y_target, min, step + 1);
    function(X_Horse - 1, Y_Horse - 2, X_target, Y_target, min, step + 1);
}

int main(){
    int tc, move;
    scanf("%d", &tc); getchar();
    for(int i = 0; i < tc; i++){
        scanf("%d", &move); getchar();
        char baseC, targetC;
        int baseI, targetI;
        scanf("%c%d %c%d", &baseC, &baseI, &targetC, &targetI); getchar();
        int Cbase = baseC - 'A' + 1;
        int Ctarget = targetC - 'A' + 1;
        int min = 64, step = 0;

        // printf("%d %d %d %d", Cbase, baseI, Ctarget, targetI);
        function(Cbase, baseI, Ctarget, targetI, &min, step);
        printf("Case #%d: ", i + 1);
        if(min <= move * 2){
            printf("YES\n");
        }else printf("NO\n");
    }
    return 0;
}