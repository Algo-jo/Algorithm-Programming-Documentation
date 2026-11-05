#include <stdio.h>

int main(){

    int A[10] = {35, 44, 32, 19, 30, 21};
    int i, j, count = 6;
    int smallest_index;

    for(i = 0; i < count - 1; i++){
        smallest_index = i;

        for(j = i+1; j < count; j++){
            if(A[j] < A[smallest_index]){
                smallest_index = j;
            }
        }
    }
}