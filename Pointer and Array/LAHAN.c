#include <stdio.h>
#include <string.h>
int main(){
    int testcase;
    scanf("%d", &testcase);

    int total = 0;
    for(int i = 0; i < testcase; i++){
        int num1 = 0, num2 = 0;
        int perkalian = 0;
        scanf("%d %d", &num1, &num2);

        perkalian = num1 * num2;
        total += perkalian;
    }
    int pembagian;
    scanf("%d", &pembagian);

    printf("%.2lf", (double) total / pembagian);
    return 0;
}