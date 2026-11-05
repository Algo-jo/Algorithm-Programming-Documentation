#include <stdio.h>
#include <string.h>

int main(){
    int arr1[] = {1, 2};
    int arr2[] = {1, 3};

        // kayak strcmp
        // Return Value of 1, 0 or -1
     if(memcmp(arr1, arr2, 2) == 0){
         printf("The arrays are the same\n");
     }
     else printf("it is not the same\n");


    // copy arr2 ke arr1
    // memcpy(arr1, arr2, 2 * sizeof(int));
    // printf("%d %d\n", arr1[0], arr1[1]);

    // set all of the arr1 to 0 (by size of int)
    // memset(arr1, 0, 2 * sizeof(int));
    // printf("%d %d\n", arr1[0], arr1[1]);

    // Finding 0 on the arr1 byte
    // Return value of NULL / FOUND
    if(memchr(arr1, 1, sizeof(int) * 2) != NULL){
        printf("Found!\n");
    }
    else printf("No\n");
//
//    if(memcmp(arr1, arr2, 2 * sizeof(int)) == 0){
//        printf("Equal!\n");
//    }
//    memcpy(arr1, arr2, 2 * sizeof(int));
//    printf("%d %d\n", arr1[0], arr1[1]);
//
//    memset(arr1, 0, sizeof(arr1));
//    printf("%d %d\n", arr1[0], arr1[1]);
//
//    if(memchr(arr2, 0, sizeof(arr2)) != NULL){
//        printf("Found !\n");
//    }
    return 0;
}
