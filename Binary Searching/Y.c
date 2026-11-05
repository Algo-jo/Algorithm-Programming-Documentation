#include <stdio.h>

int binarySearch(int size, int array[], int target){
    int left = 0;
    int right = size - 1;
    int result = -1;

    while(left <= right){
        int mid = (left + right) / 2;
        if(target == array[mid]){
            result = mid;
            right = mid - 1;
        }
        else if(target < array[mid]){
            right = mid - 1;
        }
        else if(target > array[mid]){
            left = mid + 1;
        }
    }
    return result;
}

int main(){
    int test1, test2;
    scanf("%d %d", &test1, &test2);

    int array1[100010];
    int array2[100010];
    for(int i = 0; i < test1; i++){
        scanf("%d", &array1[i]);
    }
    for(int j = 0; j < test2; j++){
        scanf("%d", &array2[j]);
    }
    int hasil[100010];
    
    for(int k = 0; k < test2; k++){
        hasil[k] = binarySearch(test1, array1, array2[k]);
    }

    // for(int x = 0; x < test2; x++){
    //     if(hasil[x] != -1) printf("%d\n", hasil[x] + 1);
    //     else printf("-1\n");
    // }
    return 0;
}