#include <stdio.h>

void recursion(int c_horse, int r_horse, int c_target, int r_target, int step, int *min) {
    // Check if the current position is out of bounds
    if (c_horse < 1 || c_horse > 8 || r_horse < 1 || r_horse > 8) {
        return;
    }
    
    // If the knight reaches the target position
    if (c_horse == c_target && r_horse == r_target) {
        if (step < *min) {
            *min = step; // Update the minimum steps
        }
        return; // Return after finding a valid path
    }
    
    // If the number of steps exceeds the current minimum, return
    if (step >= *min) {
        return;
    }

    // Explore all possible knight moves
    recursion(c_horse + 2, r_horse + 1, c_target, r_target, step + 1, min);
    recursion(c_horse + 2, r_horse - 1, c_target, r_target, step + 1, min);
    recursion(c_horse - 2, r_horse + 1, c_target, r_target, step + 1, min);
    recursion(c_horse - 2, r_horse - 1, c_target, r_target, step + 1, min);
    recursion(c_horse - 1, r_horse + 2, c_target, r_target, step + 1, min);
    recursion(c_horse - 1, r_horse - 2, c_target, r_target, step + 1, min);
    recursion(c_horse + 1, r_horse + 2, c_target, r_target, step + 1, min);
    recursion(c_horse + 1, r_horse - 2, c_target, r_target, step + 1, min);
}

int main() {
    int tc;
    scanf("%d", &tc); getchar(); // Read number of test cases
    for (int i = 0; i < tc; i++) {
        char Cbase, Ctarget;
        int Nbase, Ntarget;

        // Read the positions
        scanf(" %c%d %c%d", &Cbase, &Nbase, &Ctarget, &Ntarget);
        int CB = Cbase - 'A' + 1; // Convert column character to number (1-8)
        int CT = Ctarget - 'A' + 1; // Convert column character to number (1-8)
        int step = 0;
        int min = 7; // Set initial min to a large number (max moves on an 8x8 board)

        // Call the recursion function
        recursion(CB, Nbase, CT, Ntarget, step, &min);
        printf("Case #%d: %d\n", i + 1, min);
    }
    return 0;
}