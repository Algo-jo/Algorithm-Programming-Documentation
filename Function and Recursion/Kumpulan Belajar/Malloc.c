#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

int main(){
	int *ptr = calloc(6, sizeof(int));
	ptr[0] = 5;
	ptr[2] = 10;
	ptr[2] = 20;
	ptr[5] = 30;
	ptr[7] = 120;
	printf("%d %d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[5], ptr[7]);
	
	free(ptr);
	ptr = NULL;
	return 0;
}
