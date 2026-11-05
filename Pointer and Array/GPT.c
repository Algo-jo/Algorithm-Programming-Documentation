#include <stdio.h>
#include <string.h>

int main() {
//     char username[101];  // Buffer to store the username (max length is 100)
//     int distinct[26] = {0};  // Array to track distinct characters (26 letters in the alphabet)
//     int count = 0;

//     // Read the username
//     scanf("%s", username);

//     // Traverse the username and track distinct characters
//     for (int i = 0; i < strlen(username); i++) {
//         int index = username[i] - 'a';  // Get index of character ('a' = 0, 'b' = 1, ...)
// //         if (distinct[index] == 0) {  // If this character hasn't been encountered before
// //             distinct[index] = 1;  // Mark the character as encountered
// //             count++;  // Increase the count of distinct characters
// //         }
// printf("%d", index);
//     }

// //     // Check if the count of distinct characters is odd or even
// //     if (count % 2 == 0) {
// //         printf("CHAT WITH HER!\n");  // Female
// //     } else {
// //         printf("IGNORE HIM!\n");  // Male
// //     }

    char S[101];  // Buffer for the string (max length is 100)
    int first_pipe = -1, second_pipe = -1, star_position = -1;

    // Read the input string
    scanf("%s", S);

    // Traverse the string to find the positions of the pipes '|' and the star '*'
    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == '|') {
            if (first_pipe == -1) {
                first_pipe = i;  // Record the position of the first '|'
            } else {
                second_pipe = i; // Record the position of the second '|'
            }
        } else if (S[i] == '*') {
            star_position = i;  // Record the position of '*'
        }
    }

    // Check if the '*' is between the two '|'
    if (star_position > first_pipe && star_position < second_pipe) {
        printf("in\n");
    } else {
        printf("out\n");
    }



    return 0;
}
