#include <stdio.h>

void printBytes(void *arr, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%02x ", ((char*)arr)[i]);
    }
}

int main(){
    int arr[] = {16, 31, 32, 65}; 
    printBytes(arr, 4 * sizeof(int));
    return 0;
}