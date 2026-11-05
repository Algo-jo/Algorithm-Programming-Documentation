#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5}; // Example array
    int amount = sizeof(array) / sizeof(array[0]);
    int maks = 3; // Example value for maks
    int firstPair = 1; // Flag to check if it's the first pair

    for (int j = 0; j < amount - 1; j++) {
        if ((array[j] * -1) - (array[j] * -1) == maks) {
            if (!firstPair) {
                printf(" "); // Print space before subsequent pairs
            }
            printf("%d %d", array[j], array[j + 1]);
            firstPair = 0; // Set flag to false after the first pair
        } else if ((array[j] * -1) + array[j + 1] == maks) {
            if (!firstPair) {
                printf(" ");
            }
            printf("%d %d", array[j], array[j + 1]);
            firstPair = 0;
        } else if ((array[j + 1]) - array[j] == maks) {
            if (!firstPair) {
                printf(" ");
            }
            printf("%d %d", array[j + 1], array[j]);
            firstPair = 0;
        }
    }

    printf("X"); // Print a newline at the end
    return 0;
}