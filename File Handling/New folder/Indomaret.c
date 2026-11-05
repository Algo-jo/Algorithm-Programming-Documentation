#include <stdio.h>
#include <string.h>

struct data{
    int kode;
    char namaBarang[51];
    int jumlah;
    int harga;
}indoAlfa[10];

void bacaFile(int *count){
    // 3 proses penting
    // open file
    int kode, jumlah, harga;
    char namaBarang[51];
    FILE *fin = fopen("Barang.txt", "r");

    //proses
    while(!feof(fin)){
        fscanf(fin, "%d#%[^#]#%d#%d\n", &kode, namaBarang, &jumlah, &harga);

        // validasi
        //strtok = pecah berdasarkan token ("#")

        indoAlfa[*count].kode = kode;
        strcpy(indoAlfa[*count].namaBarang, namaBarang);
        indoAlfa[*count].jumlah = jumlah;
        indoAlfa[*count].harga = harga;

        *count = *count + 1;
    }
    // close
    fclose(fin);
}

void cetakData(int count){
    printf("%50s\n", "Indo Alfa Mart");
    printf("%50s\n", "==============");

    printf("List Item\n");
    printf("=======================================\n");
    for(int i = 0; i < count; i++){
        printf("%4d %30s %2d %7d", indoAlfa[i].kode, 
        indoAlfa[i].namaBarang, indoAlfa[i].jumlah, 
        indoAlfa[i].harga);

    }
    printf("=======================================\n");

}

void tulisFile(int count){
    FILE *fout = fopen("Barang.txt", "w");

    for(int i = 0; i < count; i++){
        fprintf(fout, "%d#%s#%d#%d\n", indoAlfa[i].kode, 
        indoAlfa[i].namaBarang, indoAlfa[i].jumlah, 
        indoAlfa[i].harga);
    }
    
}

int main(){
    int pilihan, count = 0, nomor;
    do{

    printf("%50s\n", "Indo Alfa Mart");
    printf("%50s\n", "==============");

    for(int i = 0; i < 20; i++) printf("\n");
    printf("1. Lihat Barang\n");
    printf("2. Jual Barang\n");
    printf("3. Pesen Barang\n");
    printf("4. Exit\n");
    printf("Pilihan: \n");

    scanf("%d", &pilihan);

    switch(pilihan){
        case 1:{
        bacaFile(&count);
        cetakData(count);
        getchar();
            break;
        }
        
        case 2:{
            bacaFile(&count);
            cetakData(count);

            printf("Mau beli barang apa[1..%d?]", count);
            scanf("%d", &nomor); getchar();

            printf("Mau beli berapa banyak [1..%d?]", indoAlfa[nomor-1].jumlah);

            print("Harga total nya adalah %d\n", count * indoAlfa[nomor-1].harga);

            indoAlfa[nomor].jumlah - count;
            tulisFile(count);
            getchar();
            break;
        }

        case 3:{
            break;
        }
        case 4:{
            break;
        }
    }
}while(pilihan != 4);
    return 0;
}