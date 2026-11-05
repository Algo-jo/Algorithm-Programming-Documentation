#include <stdio.h>
#include <string.h>
int main(){ 
    // int a = 10;
    // int * pointer = &a;

    // a = 100;
    // printf("%d", *pointer);

    // int testcase;
    // int arr[101];
    // scanf("%d", &testcase);
    // for(int i = 0; i < testcase; i++){
    //     scanf("%d", &arr[i]);
    // }

    // int jumlahLahan;
    //     scanf("%d", &jumlahLahan);
    // double perkalian[jumlahLahan + 1];

    // for(int i = 0; i < jumlahLahan; i++){
    //     int panjang, lebar;
    //     scanf("%d %d", &panjang, &lebar);
    //     perkalian[i] = panjang * lebar;
    // }
    // int jumlahTeman;
    // scanf("%d", &jumlahTeman);

    // double totalLuas = 0;
    // for(int j = 0; j < jumlahLahan; j++){
    //     totalLuas += perkalian[j];
    // }

    // printf("%.2lf\n", totalLuas / jumlahTeman);

    char kalimat[101];
    scanf("%[^\n]", kalimat); getchar();

    char delete;
    scanf("%c", &delete);

    int length = strlen(kalimat);
    for(int i = 0; i < length; i++){
        if(kalimat[i] != delete){
            printf("%c", kalimat[i]);
        }
    }
    printf("\n");
    return 0;
}