#include <stdio.h>
int main(){
    int harga, duit, proses;

    scanf("%d %d", &harga, &duit);
    proses = harga / duit;
    printf("%d\n", proses);
    return 0;

}