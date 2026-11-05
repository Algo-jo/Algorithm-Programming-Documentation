#include <stdio.h>


void recursion(int c_horse, int r_horse, int c_target, int r_target, int step, int *min){
    if(c_horse < 1 || c_horse > 8 || c_target < 1 || c_target > 8 ||
       r_horse < 1 || r_horse > 8 || r_target < 1 || r_target > 8){
        return;
    }

    if(c_horse == c_target && r_horse == r_target){
        if(step <= *min) *min = step;
        return;
    }

    if(step > *min) return;
    recursion(c_horse + 2, r_horse + 1, c_target, r_target, step + 1, min);
    recursion(c_horse + 2, r_horse - 1, c_target, r_target, step + 1, min);
    recursion(c_horse - 2, r_horse + 1, c_target, r_target, step + 1, min);
    recursion(c_horse - 2, r_horse - 1, c_target, r_target, step + 1, min);
    recursion(c_horse - 1, r_horse + 2, c_target, r_target, step + 1, min);
    recursion(c_horse - 1, r_horse - 2, c_target, r_target, step + 1, min);
    recursion(c_horse + 1, r_horse + 2, c_target, r_target, step + 1, min);
    recursion(c_horse + 1, r_horse - 2, c_target, r_target, step + 1, min);
    
}

int main(){
    int tc;
    scanf("%d", &tc); getchar();
    for(int i = 0; i < tc; i++){
        char Cbase, Ctarget;
        int Nbase, Ntarget;

        scanf("%c%d %c%d", &Cbase, &Nbase, &Ctarget, &Ntarget); getchar();
        int CB = Cbase - 64;
        int CT = Ctarget - 64;
        int step = 0;
        int min = 6;

        recursion(CB, Nbase, CT, Ntarget, step, &min);
        printf("Case #%d: %d\n", i + 1, min);
    }
    return 0;
}