#include <stdio.h>

void flood(int Y, int X, int A, int B, char map[][120], int *count){
	if(A < 0 || A >= Y || B < 0 || B >= X || map[A][B] == '#'){
		return;
	}
	if(map[A][B] != 'P'){
		if(map[A][B] == '*') (*count)++;
	}
	map[A][B] = '#';
	flood(Y, X, A + 1, B, map, count);
	flood(Y, X, A - 1, B, map, count);
	flood(Y, X, A, B + 1, map, count);
	flood(Y, X, A, B - 1, map, count);
}

int main(){
	int tc, i, Y, X, j, k;
	char map[120][120] = {0};
	scanf("%d", &tc);
	for(i = 0; i < tc; i++){
		int SY = 0, SX = 0, count = 0;
		scanf("%d %d", &Y, &X); getchar();
		
		for(j = 0; j < Y; j++){
			for(k = 0; k < X; k++){
				scanf("%c", &map[j][k]);
				if(map[j][k] == 'P'){
					SY = j;
					SX = k;
				}
			} getchar();
		}
		flood(Y, X, SY, SX, map, &count);
		printf("Case #%d: %d\n", i + 1, count);
	}
	return 0;
}
