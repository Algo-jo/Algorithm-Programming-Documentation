#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum(int a, int b){
	return a + b;
}
//
//int multi(int a, int b){
//	return a * b;
//}
//
//void application(int (*operation)(int a, int b)){
//	srand(time(NULL));
//	int a = rand() % 100;
//	int b = rand() % 100;
//	printf("The result combination of %d and %d is %d\n", a, b, operation(a, b));
//}

int main(){
//	srand(time(NULL));
//	int guess = -1;
//	int num = 1;
//	while(guess != num){
//		num = rand() % 10 + 1;
//		printf("Guess the number: ");
//		scanf("%d", &guess);
//		if(guess == num){
//			printf("CONGRATS! You guessed the number: %d\n", guess);
//		}
//		else printf("Nu uh! The number is: %d\n", num);
//	}
	//	
//	for(i = 0; i < 5; i++){
//		int num = rand() % 100 + 1;
//		printf("%d ", num);
//	}
//	return 0;
	
//	application(&multi);
	
//	time_t A = time(NULL);
//	srand(time(NULL));
//	printf("%d\n", rand() % 10 + 1);
//	printf("%d\n", rand() % 10 + 1);
//	printf("%d\n", rand() % 10 + 1);
	
	srand(time(NULL));
	int application(int operator(int, int)){
		int a = rand() % 100 + 1;
		int b = rand() % 100 + 1;
		
		printf("%d + %d is %d\n", a, b, operator(a, b));
	}
	application(sum);
	
	return 0;
}
