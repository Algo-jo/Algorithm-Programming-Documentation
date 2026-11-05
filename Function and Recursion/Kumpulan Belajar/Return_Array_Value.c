#include <stdio.h>
#include <mem.h>
#include <stdlib.h>

//int *getNextFive(int x){
//	int *result = malloc(sizeof(int) * 5);
//	int i;
//	for(i = 0; i < 5; i++){
//		result[i] = x + 1 + i;
//	}
//	return result;
//}

int *array(int x){
	int i;
	int *result = malloc(sizeof(int) * 5);
	for(i = 0; i < 5; i++){
		result[i] = x + i + 1;
	}
	return result;
}

int main(){
//	int x = 5;
//	int *arr = getNextFive(x);
//	int i;
//	for(i = 0; i < 5; i++){
//		printf("%d ", arr[i]);
//	}

	int x = 5;
	int i;
	int *hasil = array(x);
	for(i = 0; i < 5; i++){
		printf("%d ", hasil[i]);
	}
	
	
	return 0;
}
