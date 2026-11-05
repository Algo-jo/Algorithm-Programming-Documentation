#include <stdio.h>
#include <string.h>

int main(){
	char str1[] = "abcd1";
	char str2[] = "abcd3";
	
	// strcmp = compare 2 string
	// strncmp = compare 2 string sampai ke character "N";
//	int result = strncmp(str1, str2, 5);
//	printf("%d\n", result);
	
	int arr1[] = {1, 2, 5};
	int arr2[] = {1, 2, 3};
	printf("%d\n", memcmp(arr1, arr2, sizeof(arr1)));
	return;
}
