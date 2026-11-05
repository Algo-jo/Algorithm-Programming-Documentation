#include <stdio.h>
#include <string.h>

int main() {
    int testcase, size;
    scanf("%d %d", &testcase, &size);

    // Allocate space for strings, including space for null terminator
    char array[testcase][size + 1];

    for (int i = 0; i < testcase; i++) {
        // Read strings, ensuring they fit within the allocated space
        scanf("%s", array[i]);
    }

    // Selection sort
    for (int i = 0; i < testcase; i++) {
        int min = i;

        for (int j = i + 1; j < testcase; j++) {
            if (strcmp(array[j], array[min]) < 0) {
                min = j;
            }
        }
        if (min != i) {
            char temp[size + 1]; // Temporary string to hold the swap
            strcpy(temp, array[i]);
            strcpy(array[i], array[min]);
            strcpy(array[min], temp);
        }
    }

    // Print sorted strings
    for (int k = 0; k < testcase; k++) {
        printf("%s\n", array[k]);
    }
    return 0;
}