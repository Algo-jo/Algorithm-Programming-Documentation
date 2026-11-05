#include <stdio.h>
#include <string.h>
int main() {
    char map[101];
    int entrance = -1, treasure = -1, exit = -1;  // Initialize exit to -1

    scanf("%s", map);

    int length = strlen(map);  // Calculate string length once
    for (int i = 0; i < length; i++){
        if (map[i] == '|') {
            if (entrance == -1) {
                entrance = i;  // First pipe
            } else if (exit == -1) {
                exit = i;  // Second pipe
            }
        } else if (map[i] == '*') {
            if(treasure == -1){
                treasure = i;  // Find the star
            }
        }
    }

    // Check if the '*' is between the two pipes '|'
    if (entrance < treasure && treasure < exit) {
        printf("in\n");
    } else {
        printf("out\n");
    }

    return 0;
}
