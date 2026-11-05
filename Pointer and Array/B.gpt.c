#include <stdio.h>

int main(){
    int testcase, banyakPerubahan;
    
    // Reading the number of test cases
    scanf("%d", &testcase);

    // Initialize arrays to store the initial and final prices
    int hargaAwal[101] = {0};
    int hargaAkhir[101] = {0};

    // Reading the initial prices
    for(int i = 0; i < testcase; i++){
        scanf("%d", &hargaAwal[i]);
    }

    // Reading the number of changes
    scanf("%d", &banyakPerubahan);

    // Processing the changes
    for(int j = 0; j < banyakPerubahan; j++){
        int index, newPrice;
        scanf("%d %d", &index, &newPrice);

        // Apply the change
        hargaAwal[index] = newPrice;

        // Output the result after each change
        printf("Case #%d: ", j + 1);
        for(int k = 0; k < testcase; k++){
            printf("%d ", hargaAwal[k]);  // Print the updated prices
        }
        printf("\n");  // Newline after each case
    }

    return 0;
}
