#include <stdio.h>

FILE *fp; // nama file berupa fp

int main(){
    // fopen = akses / buka file
    // mode = "r" = read
    // mode = "w" = write
    // mode = "a" = append
    // char string[100];
    // fp = fopen("coba.txt", "r");
    // fscanf(fp, "%[^\n]\n", &string);

    // printf("%s\n", string);

    // fgets(string, 10, fp);
    
    int n;
    int n = 0;
    char name[10][20];
    fp = fopen("coba.txt", "r");
    fscanf(fp, "%d\n", &n);
    // for(int i = 0; i < n; i++){
    //     fscanf(fp, "%[^\n]\n", name[i]);
    // } // file scanf --> nama fie, %, alamat

    // for(int i = 0; i < n; i++){
    //     printf("%s\n", name[i]);
    // }

    while(!feof(fp)){
        fscanf(fp, "%[^\n]\n", name[n]);
        n++;
    }
    for(int i = 0; i < n; i++){
        pritnf("%s\n", name[i]);
    }
    return 0;
}