#include <stdio.h>

int main() {
    int T, N;

    // Read the number of test cases
    scanf("%d", &T);

    // Process each test case
    for (int t = 1; t <= T; t++) {
        scanf("%d", &N);

        printf("Case %d:", t);

        int pieces = 1;  // Initial number of pieces with 0 cuts
        for (int X = 0; X < N; X++) {
            printf(" %d", pieces);
            pieces += X + 1;  // Update pieces using the formula
        }

        printf("\n");
    }

    return 0;
}
