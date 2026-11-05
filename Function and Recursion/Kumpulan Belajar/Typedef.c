#include <stdio.h>

typedef unsigned long long int ulli;

struct data{
	double x, y;
}Variabel;

typedef struct DATA{
	double a, b;
}VARIABEL;

typedef struct tipe{
	int x, y;
}tipe;

struct datatype{
	int A;
};

int main(){
//	VARIABEL X;
//	X.a = 100;
//	Variabel.x = 16;
//	printf("%lf\n", Variabel.x);
//		printf("%lf\n", X.a);	
	
	ulli A = 1000;
	printf("%llu\n", A);
	
	struct datatype Var;
	Var.A = 100;
	
	tipe variabel;
	variabel.x = 10;
	printf("%d\n", variabel.x);
		printf("%d\n", Var.A);

	return 0;
}
