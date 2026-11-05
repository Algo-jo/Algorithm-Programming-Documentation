#include <stdio.h>
#include <string.h>
// abstract data type 
// di dalem sini, tipe data baru
// char LF01[51];

struct address{
    char street[40];
    char city[40];
    char province[40];
    int number;
};

struct dob{
    int tgl, bl, thn;
};

struct dob tgllahir;
struct mhs{
    char nim[11]; //10
    char name[51];// 51
    int nilai;// 4
    // ini kan harusnya dijumlahin = 65, tapi dia 68 karena kelipatan 4
}LF01[20];

void cetak(struct mhs a){
    printf("NIM: %s\n", a.nim);
    printf("NIM: %s\n", a.name);
    printf("NIM: %d\n", a.nilai);
}

void cetakArray(struct mhs a[27], int jumlah){
    int i;

    for(int i = 0; i < jumlah; i++){
        printf("NIM: %s\n", a[i].nim);
        printf("Name: %s\n", a[i].name);
        printf("Nilai: %d\n", a[i].nilai);
    }
}
int main(){
    printf("Size dari struct = %d\n\n", sizeof(struct mhs));

    struct mhs ahlovely;
    struct mhs maxwell = {"28069420", "Maxwell Stephanieson", 90};

    strcpy(ahlovely.nim, "2802428223");
    strcpy(ahlovely.name, "Ahlovely");
    ahlovely.nilai = 30;

    // cetak(ahlovely);
    // cetak(maxwell);

    cetakArray(LF01, 2);
    return 0;


    
}