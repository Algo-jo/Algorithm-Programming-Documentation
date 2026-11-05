#include <stdio.h>


// int penjumlahan(int a, int b){
//     int hasil = 0;
//     hasil = a + b;
//     return hasil;
// }

void pengurangan(int a, int b){
    int hasil = 0;
    hasil = a - b;
    printf("%d\n", hasil);
}

void perkalian(int yoka, int marvel){
    int hasil = 0;
    hasil = yoka * marvel;
    printf("%d\n", hasil);
}


void penjumlahan(int john, int aaron){
    int hasil = john + aaron;
    printf("%d\n", hasil);
}

int main(){
    // int a, b, hasil;
    // scanf("%d %d", &a, &b);
    // // printf("%d\n", penjumlahan(a, b));
    // pengurangan(a, b);

    int a, b, choice;
    scanf("%d %d", &a, &b);
    scanf("%d", &choice);
    
    switch(choice){
        case 1:{
            penjumlahan(a, b);
            break;
        }
        case 2:{
            perkalian(a, b);
            break;
        }
    }
    return 0;
}



