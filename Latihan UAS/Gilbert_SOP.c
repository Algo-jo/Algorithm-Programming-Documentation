#include<stdio.h>

int main(){
	int X, Y;
	scanf("%d %d", &X, &Y);
	
	int kebun[X][Y];
	for(int i = 0; i < X; i++){
		for(int j = 0; j < Y; j++){
            kebun[i][j] = 0;
			scanf("%d", &kebun[i][j]);
		}
	}
	int T;
	scanf("%d", &T);
	for(int i = 0; i < T; i++){
		int a = 0, b = 0, c = 0;
		scanf("%d %d %d", &a, &b, &c);
		kebun[a-1][b-1] = c;
	}
	for(int i = 0; i < X; i++){
		for(int j = 0; j < Y; j++){
			printf("%d", kebun[i][j]);
			if(j < Y - 1){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
