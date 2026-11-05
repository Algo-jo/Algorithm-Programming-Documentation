#include <stdio.h>
#include <limits.h>
#include <string.h>

int main(){
//	printf("%d %d %zu %zu", INT_MIN, INT_MAX, sizeof(int), sizeof(int) * CHAR_BIT);
	
	char str[150] = {0};
	char remove;
	scanf("%[^#]#%c", str, &remove);
	
	int length = strlen(str);
	int i, j;
	while(length != 0){
		
		for(i = 0; i < length; i++){
			if(str[i] != remove){
				result[j++] = str[i]
			}
		}
		printf(" ");
		scanf("%c", &remove);
		length = strlen(str);
		
	}
	
	return 0;
}
