#include <stdio.h>

int main(){

    FILE *file;
    file = fopen("TEKS.txt", "r");

    int array[100];
    int index = 0;

    // feof --> end of file
    // nilai apapun int > 0 itu TRUE
    // selain itu, 0 sudah pasti FALSE
    while(!feof(file)){
        fscanf(file, "%d\n", &array[index]);
        index++;
    }
    // printf("%d\n", feof(file));

    for(int i = 0; i < index; i++){
        printf("Array[%d]: %d\n", i, array[i]);
    }
}