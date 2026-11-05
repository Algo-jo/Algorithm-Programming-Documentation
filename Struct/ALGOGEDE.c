#include <stdio.h>
#include <string.h>

struct nilai{
    int tm, uts, uas;
};

struct mahasiswa{
    char nim[11];
    char nama[50];
    struct nilai nl; // --> Pemanggil struct di atas
    double ipk;
};

// Define ulang global variabel
struct mahasiswa mhs1; // mahasiswa -> nama struct
                        // mhs1 variabel untuk dipanggil
struct mahasiswa mhs[101];
int main()
{   
    for(int i = 0; i < 3; i++){
    printf("Input your name: ");
    scanf("%[^\n]", mhs[i].nama); getchar();
    }
    for(int i = 0; i < 3; i++){
        printf("%s\n", mhs[i].nama);
    }

    // strcpy(mhs[0].nama, "Irene\n");
    // printf("%s", mhs[0].nama);
    // printf("Input your nim: ");
    // scanf("%s", mhs[0].nim); getchar();

    // printf("Input your name: ");
    // scanf("%[^\n]", mhs[0].nama); 

    // printf("Input your IPK: ");
    // scanf("%lf", &mhs[0].ipk);

    // printf("Input your UTS score: ");
    // scanf("%d", &mhs[0].nl.uts); // Pake indexing [] untuk nyimpen di char

    // printf("Hi %s, your NIM is %s, your score is %d, your GPA is %.2lf", mhs[0].nama, mhs[0].nim, mhs[0].nl.uts, mhs[0].ipk);

    return 0;
}