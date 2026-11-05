#include <stdio.h>

// void ubahNilai(int *a){
//     *a = 20;
// }
// int main(){
//     int a = 10;
//     ubahNilai(&a); // --> passing by references
//     printf("%d", a);
//     return 0;
// }
// void print(int n){
//     if(n > 0){
//         print(n-1);
//         printf("%d ", n);
//     }
// }


// int main(){
//     int n = 10;
//     for(int i =1; i <= n; i++){
//         printf("%d ", i);
//     }
//     print(n);
// }

void print(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n + print(n-1);
    }
}