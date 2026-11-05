#include <stdio.h>

// int plus(int a){
//     a += a;
//     return a;
// }

// int main(){
//     int x = 10;
//     int var = plus(x);
//     printf("%d\n", var);
//     return 0;
// }

// int add(int a, int b);
// int returnminus(int a);

// int add(int a, int b){
//     int result = returnminus(a) + b;
// }
// int returnminus(int a){
//     return -a;
// }

// int main(){
//     int minusAandB = add(12, 24);
//     printf("%d", minusAandB);
// }

// int print(int a){
//     printf("%d\n", a);
// }
// int main(){

//     int x = 10;
//     print(x);
//     printf()
// }

// int nilai = 1000;
// int func() {
//     printf("Nilai adalah %d\n", nilai);
// }
// int main(){
//     int nilai = 10;
//     printf("%d\n", nilai);
//     func();
//     return 0;
// }

void plus(int a, int b){
    int hasil = a + b;
    printf("The calculation of the 2 integer is %d\n", hasil);
}
void minus(int a, int b){
    int hasil = a - b;
    printf("The calculation of the 2 integer is %d\n", hasil);
}

int main(){
    int choice = 0;
    int first, second = 0;
    scanf("%d %d", &first, &second);

    scanf("%d", &choice);
    switch(choice){
        case 1:{
            plus(first, second);
            break;
        }
        case 2:{
            minus(first, second);
            break;
        }

    }
    return 0;
}