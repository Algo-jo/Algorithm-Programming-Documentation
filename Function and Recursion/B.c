#include <stdio.h>
#include <string.h>

int hitung[150] = {0};
int i = 1;

int fibo(int array[], int lengthX){
    if(i == lengthX + 1) return 0;
    else{
        printf("%d\n", array[i]);
        return array[i*2, lengthX] + array[2*i+1, lengthX];
    }
}




int main(){
    int testcase;
    scanf("%d", &testcase);
    int length;

    for(int i = 1; i <= testcase; i++){
        scanf("%d", &length);
        int array[150] = {0};

        for(int j = 1; j <= length; j++){
            scanf("%d", &array[j]);   
            }
            printf("Case #%d:\n", i);
            fibo(array, length);
        }
}