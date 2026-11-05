#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	
	int n[100][100];
	for(int i=0; i<t; i++){
		for(int j=0; j<t; j++){
			scanf("%d", &n[i][j]);
		}
	}
	
	int bisa=1;
	for(int i=0; i<t; i++){
		for(int j=0; j<t; j++){
			for(int k=j+1; k<t; k++){
				if(n[i][j]==n[i][k] || n[j][i]==n[k][i]){
					bisa=0;
				}
			}
			
		}
	}
	
	if(bisa==1){
		printf("Yay\n");
	}else{
		printf("Nay\n");
	}
	return 0;
}