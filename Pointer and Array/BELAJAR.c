#include <stdio.h>
#include <stdlib.h>
int main(){

    // int angka = 10;
    // int *pointer;
    // pointer = &angka;

    // printf("Nilai dari angka: %d\n", angka);
    // printf("Nilai dari angka: %d\n", &angka);
    // printf("Nilai dari angka: %d\n", pointer);
    
    // int x = 4;
    // int *pointer = &x;
    // int y = *pointer; // --> ketika * tidak ada tipe data, dia akan menunjuk value
    // int **Ptr = pointer; // --> pointer menunjuk pointer
    // printf("%d\n", x);
    // printf("%d\n", pointer);
    // printf("%d\n", y);
    // printf("%d\n", Ptr);

    // char nama[3][20] = {"Ani", "Bobi", "Cahyadi"};
    // int nilai[3] = {70, 65, 10};
    // int i;

    // printf("%d\n", sizeof(int)); // 4
    // printf("%d\n", sizeof(nilai)); // 4 x 3

    // int JumlahElemen = sizeof(nilai) / 4;
    // for(int i = 0; i < JumlahElemen; i++){
    //     printf("Nilai dari %s adalah: %d\n", nama[i], nilai[i]);
    // }
    
//     function("Mike", 5);
//     return 0;
// }
//     void function(char name[], int angka){
//         printf("Hello my name is %s and I am %d YO", name, angka);
//     }

    // int percobaan = 3;
    // int answer;
    // printf("Guess the word!: \n");
    
    // while(answer != 7){
    //     scanf("%d", &answer);
    //     percobaan--;

    //     if(percobaan == 0){
    //         printf("Sorry you're LOST\n");
    //         break;
    //     }
    //     if(answer == 7){
    //         printf("YOU WON!!!!\n");
    //     }
    // }
    int A = 5;
    int * pA = &A;
    printf("%d\n", &A);
    printf("%d\n", *&*&A);
}