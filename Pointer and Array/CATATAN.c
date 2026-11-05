#include <stdio.h>
int main(){

    // int x = 100;
    // int *pointer_x = &x;

    // printf("%d\n", *pointer_x); // Bintang, menunjukan nilai dari yang ditunjuk;
    // *pointer_x = 50; //pointer yang dideklarasi nilai, akan mengubah nilai variable yang ditunjuk;
    // printf("%d or ", *pointer_x);
    // printf("%d\n", x);

    // accesing array bisa dilakukan dengan var[index] atau *(var + index)
    // Exp : A[3] atau *(A+3)

    //Two dimensional array
    // int A[3][4] row nya 3, column nya 4 = 0,1 0,2 0,3 0,4 dst

    // initialization
        // int b[2][2] = {1,2,3,4} or { {1,2},
        //                              {3,4} }

    // int *pointer[2];

    // int x =  1, y = 2;
    // pointer[0] = &x;
    // pointer[1] = &y;
    // for(int i = 0; pointer[i]; i++){
    //     printf("%d\n", pointer[i]);
    // }

    // char a[10] = "BINUS";
    // char b[10] = {'B', 'I', 'N', 'U', 'S'};

    // for(int i = 0; b[i] != '\0'; i++){
    //     printf("%c ", b[i]);
    // }

    char a[10] = "yES";
    char b[10] = "YeS";
    // strcpy(a, "Anjay");
    // printf("%s", a);

    int compare = strcmpi(a, b);
    printf("%d", compare);

    return 0;
}