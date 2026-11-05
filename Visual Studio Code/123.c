#include <stdio.h>

int main() {
    int N;
    long long int X;  // Menggunakan long long int untuk menampung nilai besar
    
    // Membaca input
    scanf("%d", &N);
    
    // Menghitung 2^N dengan bit shifting dan memastikan operasi dilakukan pada long long
    X = 1LL << N;
    
    // Output hasil X - 1, karena kita ingin minimal menang sekali
    printf("%lld\n", X - 1);
    
    return 0;
}