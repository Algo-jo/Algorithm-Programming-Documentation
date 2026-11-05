#include <stdio.h>

int main(){
    FILE *file;
    int a, b;
    file = fopen("testdata.in", "r");
    fscanf(file, "%d %d", &a, &b);

    printf("%d\n", a+b);
    fclose(file);
    return 0;

}