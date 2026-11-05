#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a); getchar();

    if(a == 5){
        FILE *file;
        file = fopen("log.txt", "a");

        fprintf(file, "User input 5 nich\n");
        fclose(file);
        printf("Log sudah ditambahkan");
    }

    return 0;
}