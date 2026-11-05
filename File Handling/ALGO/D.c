#include <stdio.h>
#include <string.h>

int main(){
    int tc, ntc, n;
    char x[105];
    char awal[26], akhir[26], tempAwal;
    int hitung[26] = {0}, panjang, index;
    int ubah[26] = {0}, jmlUbah;

    FILE *fin = fopen("testdata.in", "r");
    fscanf(fin, "%d\n", &ntc);
    for(tc = 1; tc <= ntc; tc++){
        fscanf(fin, "%[^\n]\n", x);
        fscanf(fin, "%d\n", &n);

        jmlUbah = 0;
        for(int i = 0; i < n; i++){
            fscanf(fin, "%c %c\n", &awal[jmlUbah], &akhir[jmlUbah]);

            index = tempAwal - 'A';
            if(ubah[index] == 0){
                awal[jmlUbah] = tempAwal;
;               ubah[index] = 1;
            }
        }

        // proses
        panjang = strlen(x);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < panjang; j++){
                if(x[j] == awal[i]) x[j] = akhir[i];
            }
        }

        // cetak
        printf("Case #%d:\n", tc);
        for(int i = 0; i < panjang; i++){
            index = x[i] - 'A';
            hitung[index]++;
            // hitung[x[i] - 'A'];
        }

        for(int i = 0; i < 25; i++){
            if(hitung[i] != 0){
                printf("%c %d\n", i + 'A', hitung[i]);
                hitung[i] = 0;
            }
        }

    }
    fclose(fin);
    return 0;
}