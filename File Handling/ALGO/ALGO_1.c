#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    char nama[100];
    char jurusan[100];
    long long nim;
    char hobi[100];

    file = fopen("BASE.txt", "r");

    fscanf(file, "%[^\n]\n", &nama);
    fscanf(file, "%[^#]#%lld\n", &jurusan, &nim);
    fscanf(file, "%[^\n]\n", &hobi);

    // // Print di terminal
    // printf("Nama: %s\n", nama);
    // printf("Jurusan: %s\n", jurusan);
    // printf("NIM: %lld\n", nim);
    // printf("Hobi: %s\n", hobi);
    // fclose(file);

    FILE *output;
    // write (menulis) append (menambah)
    output = fopen("output.txt", "w");
     // print ke file

    fprintf(output, "Nama: %s\n", nama);
    fprintf(output, "Jurusan: %s\n", jurusan);
    fprintf(output, "NIM: %lld\n", nim);
    fprintf(output, "Hobi: %s\n", hobi);

    fclose(output);

    return 0;
}