#include <stdio.h>
#include <windows.h>
int main(){
    system("cls");
    FILE *file;
    file = fopen("data.txt", "r");
    if(file == NULL) {
        printf("Theres no file\n");
        return 0;
    }
    printf("Theres a file!\n");

    ////////////////////////////
    char kalimat[100];
    fscanf(file, "%[^\n]\n", kalimat);
    printf("%s\n", kalimat);

    fscanf(file, "%[^\n]\n", kalimat);
    printf("%s\n", kalimat);



    fclose(file);
    return 0;
}