#include <stdio.h>
#include <string.h>

int main(){
    
    // int testcase;

    // scanf("%d", &testcase);
    // for(int i = 0; i < testcase; i++){
    //     char huruf[30];
    //     int storage[26] = {0};
    //     int valid = 0;

    //     scanf("%s", &huruf); getchar();

    //     int length = strlen(huruf);

    //     for(int j = 0; j < length; j++){
    //         char charr = huruf[j];
    //         storage[charr - 'a'] = 1;
    //     }

    //     for(int k = 0; k < 26; k++){
    //     if(storage[k] == 1){
    //         valid++;
    //     }
    // }
    // printf("%d\n", valid);
    // }


    // 0,0 0,1 0,2 0,3 0,4
    // 1,0 1,1 1,2 1,3 1,4
    // 2,0 2,1 2,2 2,3 2,4

    int size = 0;
    scanf("%d", &size);
    
    for(int i = 1; i <= size; i++){
        //SPACE
        for(int j = i; j < size; j++){
            printf(" ");
        }
        // PAGAR
        for(int k = 1; k <= 2*i-1; k++){
            printf("#");
        }
        // BACKSLASH N DI AKHIR 
        printf("\n");
    }
    return 0;
    // 0,0 0,1 0,2 
    // 1,0 1,1 1,2 1,3 
    // 2,0 2,1 2,2 2,3 2,4
}