#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    char nama[100];
    char jurusan[100];
    long long nim;
    char hobi[100];

    file = fopen("Database.txt", "r");

    fscanf(file, "%[^\n]\n", &nama);
    fscanf(file, "%[^#]#%lld\n", &jurusan, &nim);
    fscanf(file, "%[^\n]\n", &hobi);

    printf("Nama: %s\n", nama);
    printf("Jurusan: %s\n", jurusan);
    printf("NIM: %lld\n", nim);
    printf("Hobi: %s\n", hobi);

    fclose(file);
    return 0;
}