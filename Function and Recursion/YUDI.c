#include <stdio.h>

void print(int n){
    if(n == 0) return;
    printf("%d\n", n);
    print(n - 1); // memanggil ulang cuma dikurang 1
                // P5 P4 P3 P2 P1 nilai N kalau udah sampe P1 balik ke atas

}

int main(){

    int N = 5;
    print(N);
    return 0;
}