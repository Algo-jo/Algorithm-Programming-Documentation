#include <stdio.h>
int main(){
	int t,n;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d", &n);
		
		int arr[n];
		int totalBil=0;
		for(int j=0; j<n; j++){
			scanf("%d", &arr[j]);
			totalBil+=arr[j];
		}
		
		int possible = 0;
		int pertambahan=0;
		for(int j=0; j<n; j++){
			pertambahan+=arr[j];
			if(pertambahan*2 == totalBil){
				possible=1;
				break;
			}
		}
		printf("Case #%d: %s\n", i,((possible)? "Yes":"No"));
	}
	return 0;
}
