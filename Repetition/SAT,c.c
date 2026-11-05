#include <stdio.h>
int main(){
    int testcase, size;

    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        scanf("%d", &size);
            for(int j = 1; j <= size; j++){
                for(int k = 1; k <= size; k++){
                    if(j >= size - i + 1 && j <= size + 1 - 1){
                        printf("#");
                    }
                }
            }


    }
}