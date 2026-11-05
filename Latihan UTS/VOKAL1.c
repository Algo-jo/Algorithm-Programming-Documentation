#include <stdio.h>
#include <string.h>
int main(){

    char kalimat[1000001] = {0};
    scanf("%[^\n]", kalimat);

    // Masukin huruf ke dalam storage
    // Tiap storage hanya nampung satu huruf
    // Jadi huruf yang sama diinput berkali-kali tetep keitung satu
    int length = strlen(kalimat);
    int storage[26] = {0};
    for(int i = 0; i < length; i++){
        storage[kalimat[i] - 'a'] = 1;
    }

    int vokal = 0, konsonan = 0;
    // Kalau huruf vokal
    // storage[0] = a, storage[4] = e, dst
    if(storage[0] == 1) vokal++;
    if(storage[4] == 1) vokal++;
    if(storage[8] == 1) vokal++;
    if(storage[14] == 1) vokal++;
    if(storage[20] == 1) vokal++;
    
    //Kalau huruf konsonan
    for(int j = 0; j < 26;j++){
        if(j != 0 && j != 4 && j != 8 && j != 14 && j != 20){ // --> exclude huruf vokal
            if(storage[j] == 1){
                konsonan++;
            }
        }
    }

    //Print jumlah jenis vokal dan konsonan
    printf("Vokal: %d\n", vokal);
    printf("Konsonan: %d\n", konsonan);

    return 0;
}