#include <stdio.h>
int main(){
	int n, m, kekuatan;
	scanf("%d %d", &n, &m); getchar();
	
	int maxBibi = 0;
		for(int i=1; i<=n; i++){
			scanf("%d", &kekuatan); getchar();
			if(kekuatan>maxBibi){
				maxBibi=kekuatan;
			}
		}
	
	int maxNaga = 0;
		for(int j=1; j<=m; j++){
			scanf("%d", &kekuatan); getchar();
			if(kekuatan>maxNaga){
			maxNaga = kekuatan;
			}
		}
		
	if(maxNaga < maxBibi){
		printf("The dark secret was true\n");	
		}else{
			printf("Secret debunked\n");
		}

	return 0;
}