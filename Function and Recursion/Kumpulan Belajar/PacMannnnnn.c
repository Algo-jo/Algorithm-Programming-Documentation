#include <stdio.h>

void food(int Y, int X, int Y_max, int X_max, char map[][120], int *count){
	if(Y < 0 || Y >= Y_max || X < 0 || X >= X_max || map[Y][X] == '#') return;
	if(map[Y][X] == '*') (*count)++;
	map[Y][X] = '#';
	
	food(Y + 1, X, Y_max, X_max, map, count);
	food(Y - 1, X, Y_max, X_max, map, count);
	food(Y, X + 1, Y_max, X_max, map, count);
	food(Y, X - 1, Y_max, X_max, map, count);
}

int main(){
	int tc;
	scanf("%d", &tc);
	int i, j, k;
	for(i = 0; i < tc; i++){
		int Y = 0, X = 0;
		int YS = 0, XS = 0, count = 0;
		char map[120][120] = {0};
		
		scanf("%d %d", &Y, &X); getchar();
		for(j = 0; j < Y; j++){
			for(k = 0; k < X; k++){
				scanf("%c", &map[j][k]);
				if(map[j][k] == 'P'){
					YS = j;
					XS = k;
				}
			} getchar();
		}
		food(YS, XS, Y, X, map, &count);
		printf("Case #%d: %d\n", i + 1, count);
	}
	return;
}
