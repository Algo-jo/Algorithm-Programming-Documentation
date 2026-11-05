#include <stdio.h>

int main() {
    int N, Ai, total = 0;

    // Read the number of times Bibi borrowed money
    scanf("%d", &N);

    // Process each borrowing amount
    for (int i = 0; i < N; i++) {
        scanf("%d", &Ai);
        total += Ai;  // Add each borrowed amount to the total
    }

    // Print the total amount of money Bibi owes
    printf("%d\n", total);

    return 0;
}
