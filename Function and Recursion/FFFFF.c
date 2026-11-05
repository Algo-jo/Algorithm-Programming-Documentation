#include <stdio.h>
#include <string.h>

void balik(char array[], int panjang){
    if(panjang >= 0){ // --> kondisi untuk recursive (sampai stop)
        printf("%c", array[panjang]);
        balik(array, panjang - 1); // --> pengurangan (seperti while)
    }

}
int main(){
    int testcase;
    char array[1001] = {};

    scanf("%d", &testcase); getchar();
    for(int i = 0; i < testcase; i++){
        scanf("%[^\n]", array); getchar();

        int panjang = strlen(array);
        printf("Case #%d: ", i + 1);
        balik(array, panjang - 1);
        printf("\n");
    }
}