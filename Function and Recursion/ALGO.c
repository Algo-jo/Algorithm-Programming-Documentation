#include <stdio.h>

/*
    <return_datatype> <function_name> <parameter>{
        statement
    }
    int namafunction(int a){
        return a;
    }
    #define ini unsigned long long int
    int ini(uli a){
    return a;
    }
*/

// int toMinus(int plus){
//     if(plus > 0) plus *= -1;
//     return plus;
// }
// int main(){
//     int plus = 100;
//     int hasil = toMinus(plus);
//     printf("%d", hasil);
//     return 0;
// }

// int plusX(int a){
//     return a;
// }
// int main(){
//     int plus = 100;
//     plus = plusX(200); // --> dalam kurung menunjukan value plusX(nilai int a)
//     printf("%d", plus);
// }

// int toMinus(int a){
//     a *= -1;
//     return a;
// }
// int main(){
//     int plus = 100;
//     int minusVar = 0;
//     minusVar = toMinus(plus);
//     printf("%d\n", minusVar);
//     printf("%d\n", plus);
//     return 0;
// }

// int address(int *a){
//     *a = 1000;
//     return *a;
// }

// int main(){
//     int x = 10;
//     int y = 20;
//     int z = 30;
//     x = address(&x);

//     printf("%d\n", x);
//     printf("%d\n", y);
//     printf("%d\n", z);
// }

// void toMinus(int *a){
//     *a *= -1;
// }
// int main(){
//     int x = 10;
//     toMinus(&x);
//     printf("%d\n", x);

//     int y = 10;
//     int *ptr;
//     ptr = &y;

//     printf("%d\n", y);
//     printf("%d\n", ptr);
//     printf("%d\n", *ptr);
//     return 0;
// }  

int arrayspec(int array[], int size){
    // printf("Alamat dari array --> %d\n", &array);
    // printf("Nilai dari array ke-0 --> %d\n", array[0]);

    for(int i = 0; i < size; i++){
        printf("Array ke %d valuenya adalah %d\n", i, array[i]);
    }
}
int main(){
int array[5] = {1,2,3,4,5};
int size = sizeof(array) / sizeof(array[0]);

printf("Byte dari array --> %d\n", sizeof(array));
printf("Byte dari array ke-0 --> %d\n", sizeof(array[0]));
printf("value dari array --> %d\n", size); 

arrayspec(array, size);
}