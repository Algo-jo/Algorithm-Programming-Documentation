#include <stdio.h>

int binarySearch(int array[], int target, int size){
	int left = 0;
	int right = size - 1;
	int result = -1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(target == array[mid]){
			return mid;
		}
		else if(target < array[mid]){
			right = mid - 1;
		}
		else if(target > array[mid]){
			left = mid + 1;
		}
	}
	return -2;
}

void merging(int array[], int left, int mid, int right){
	int a, b, c, x;
	a = left;
	b = mid + 1;
	c = 0;
	int temp[right - left + 1];
	
	while(a <= mid && b <= right){
		if(array[a] < array[b]){
			temp[c] = array[a];
			c++; a++;
		}
		else{
			temp[c] = array[b];
			c++; b++;
		}
	}
	while(a <= mid){
		temp[c] = array[a];
		c++; a++;
	}
	while(b <= right){
		temp[c] = array[b];
		c++; b++;
	}
	for(x = left; x <= right; x++){
		array[x] = temp[x - left];
	}
}

void mergeSort(int array[], int left, int right){
	if(left >= right) return;
	int mid = (left + right) / 2;
	
	mergeSort(array, left, mid);
	mergeSort(array, mid + 1, right);
	merging(array, left, mid, right);
}

int main(){
	int testcase;
	int i, j;
	scanf("%d", &testcase);
	
	int array[100050] = {0};
	for(i = 0; i < testcase; i++){
		scanf("%d", &array[i]);
	}
	mergeSort(array, 0, testcase - 1);
		
	int testing;
	int target[100050];
	scanf("%d", &testing);
	for(i = 0; i < testing; i++){
		scanf("%d", &target[i]);
	}
	for(int i = 0; i < testing; i++){
		int hasil = binarySearch(array, target[i], testcase);
		printf("%d\n", hasil + 1);
	}
	return 0;
}
