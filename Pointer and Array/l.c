#include <stdio.h>
#include <string.h>
int main(){
    int size;
    scanf("%d", &size);
    int indexing[1005] = {0};
    int perubahan[1005] = {0};

    for(int i = 0; i < size; i++){
        scanf("%d", &indexing[i]);
    }
    for(int j = 0; j < size; j++){
        scanf("%d", &perubahan[j]);
    }
    // indexing = 1 0 2
    // nilai    = 10 20 30

    // indexingA  0  1  2
    // print    = 20 10 30
        // int k = 0  k <= 2
    // array[indexing[k]] = perubahan[k]
    int array[size];
    for(int k = 0; k < size; k++){
        array[k] = 0;
    }
    for(int k = 0; k < size; k++){
        array[indexing[k]] = perubahan[k];
    }
    for(int k = 0; k < size; k++){
        printf("%d", array[k]);
        if(k == size - 1) printf("\n");
        else printf(" ");
    }
    
    return 0;
}