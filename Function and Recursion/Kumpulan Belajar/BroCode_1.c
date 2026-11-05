#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//typedef char user[25];
//
//typedef struct{
//	char name[25];
//	char pass[12];
//	int id;
//} User;

enum data{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};


int main(){
	
//	user USER1 = "Bro";
//	User player1 = {"Bro", "Password", 12345};
//	printf("%s %s %d\n", player1.name, player1.pass, player1.id);

	enum data A = Wed;
	printf("%d\n", A);
	
	srand(time(0));
	int B = (rand() % 6) + 1;
	printf("%d\n", B);
	
	
	return 0;
}
