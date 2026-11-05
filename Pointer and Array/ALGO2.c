#include <stdio.h>
#include <string.h>

int main(){
  
    // char string[100];
    // scanf("%s", &string); getchar();

    // int storage[26] = {0};
    // int lenght = strlen(string);
    // for(int i = 0; i < lenght; i++){
    //     storage[string[i] - 'a'] = 1;
    // }

    // int counter = 0;
    // for(int i = 0; i < 26; i++){
    //     if(storage[i] == 1){
    //         counter++;
    //     }
    // }
    // if(counter % 2 == 0){
    //     printf("Jenis alfabet genap\n");
    // }
    // else printf("Jumlah alfabet ganjil\n");

    // int x;
    // int *pointer;
    // x = 10;

    // pointer = &x;
    // printf("%d\n", &x);
    // printf("%d\n", pointer);
    // printf("%d\n", *pointer);

    // int array[] = {1,2,3,4};
    // int array2[4] = {0};
    // printf("%d", array2[3]);

    // int uangEko = 1000;
    // char nama[4] = "Eko";

    // for(int i = 0; i < strlen(nama); i++){
    //     printf("Huruf ke %d: %d\n", i + 1, &nama[i]);
    // }
    // printf("\nAlamat Uang Eko: %d \n", &uangEko);
    // printf("%d\n", uangEko); nama[7] = 'a';
    // printf("%d", uangEko);

    int array[3][3] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
    };
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf("%d ", array[i][j]);
    //     }
    //     puts("");
    // }

    // int size = 0;
    // scanf("%d", &size);

    // int array[size][size];
    // printf("Sebelum: \n");
    // for(int i = 0; i < size; i++){
    //     for(int j = 0; j < size; j++){
    //         scanf("%d", &array[i][j]);
    //     }
    // }
    // printf("Sesudah: \n");
    // for(int i = 0; i < size; i++){
    //     for(int j = 0; j < size; j++){
    //     if(j == 0){
    //         printf("%d", array[i][j]);
    //         } else printf("-%d", array[i][j]);
    //     }
    //     puts("");
    // }

    // int N;
    // scanf("%d", &N);

    // char lokasi[N][N];
    // for(int i = 0; i < N; i++){
    //     scanf("%s", &lokasi[i]);
    //     }

    // puts("");
    // int x = -1, y = -1;
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < N; j++){
    //         if(lokasi[i][j] == '*'){
    //             x = j;
    //             y = i;
    //             break;
    //         }
    //     }
    // }
    // printf("(%d, %d)", x + 1, y + 1);
    

    // int N;
    // scanf("%d", &N);

    // int ukuran = 2*N - 1;
    // int array[ukuran][ukuran];

    // for(int k = 0; k < N; k++){
    //     int awal = k;
    //     int akhir = ukuran - k - 1;

    // for(int i = awal; i <= akhir; i++){
    //     for(int j = awal; j <= akhir; j++){
    //         if(i == awal  || j == awal || i == akhir || j == akhir){
    //             array[i][j] = N - k;
    //         }
    //     }
    // }
    // }
    //     for(int l = 0; l < ukuran; l++){
    //         for(int j = 0; j < ukuran; j++){
    //             printf("%d ", array[l][j]);
    //         }
    //         puts("");
    //     }

    // char karakter[255];
    // scanf("%s", &karakter); getchar();

    // int storage[26] = {0};
    // int panjang = strlen(karakter);
    // for(int i = 0; i < panjang; i++){
    //     char distinctCharacter = karakter[i];
    //     storage[distinctCharacter - 'a'] = 1;
    // }

    // int Pangram = 1;
    // for(int i = 0; i < 26; i++){
    //     if(storage[i] == 0){
    //         Pangram = 0;
    //         break;
    //     }
    // }
    // if(Pangram == 0){
    //     printf("ITS NOT A PANGRAM\n");
    // }
    // else if(Pangram == 1){
    //     printf("IT IS A PANGRAM\n");
    // }


    char target[4] = "abc";
    char input[100];
    scanf("%s", input);

    int storageTarget[26] = {0};
    int storageInput[26] = {0};

    for(int i = 0; i < strlen(target); i++){
        char distinct = target[i];
        storageTarget[distinct - 'a'] = 1;
    }

    for(int i = 0; i < strlen(input); i++){
        char distinct2 = input[i];
        storageInput[distinct2 - 'a'] = 1;
    }

    int anagram = 1;
    for(int j = 0; j < 26; j++){
        if(storageTarget[j] != storageInput[j]){
            anagram = 0;
            break;
        }
    }

    if(anagram == 1) printf("IT IS AN ANAGRAM\n");
    else if(anagram == 0) printf("IT IS NOT AN ANAGRAM\n");
    return 0;
}
